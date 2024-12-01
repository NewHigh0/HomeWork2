#include "collage.h"

void Collage::CopyString(char*& dest, const char* source) {
    size_t length = strlen(source) + 1;
    dest = new char[length];
    strcpy_s(dest, length, source);
}

Collage::Collage() : name(nullptr), contact() {
    CopyString(name, "Unnamed");
}

Collage::Collage(const char* name, const Contact& contact)
    : name(nullptr), contact(contact) {
    CopyString(this->name, name);
}

Collage::Collage(const Collage& other)
    : name(nullptr), contact(other.contact) {
    CopyString(name, other.name);
}

Collage::~Collage() {
    delete[] name;
}

Collage& Collage::operator=(const Collage& other) {
    if (this != &other) {
        delete[] name;
        CopyString(name, other.name);
        contact = other.contact;
    }
    return *this;
}

void Collage::Show() const {
    std::cout << "Collage Name: " << name << std::endl;
    contact.Show();
}
