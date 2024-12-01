#include "student.h"

void Student::CopyString(char*& dest, const char* source) {
    size_t length = strlen(source) + 1;
    dest = new char[length];
    strcpy_s(dest, length, source);
}

Student::Student() : name(nullptr), birthDate(nullptr), contact(), collage() {
    CopyString(name, "Unknown");
    CopyString(birthDate, "Unknown");
}

Student::Student(const char* name, const char* birthDate, const Contact& contact, const Collage& collage)
    : name(nullptr), birthDate(nullptr), contact(contact), collage(collage) {
    CopyString(this->name, name);
    CopyString(this->birthDate, birthDate);
}

Student::Student(const Student& other)
    : name(nullptr), birthDate(nullptr), contact(other.contact), collage(other.collage) {
    CopyString(name, other.name);
    CopyString(birthDate, other.birthDate);
}

Student::~Student() {
    delete[] name;
    delete[] birthDate;
}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        delete[] name;
        delete[] birthDate;

        CopyString(name, other.name);
        CopyString(birthDate, other.birthDate);
        contact = other.contact;
        collage = other.collage;
    }
    return *this;
}

void Student::Show() const {
    std::cout << "Name: " << name << ", Birth Date: " << birthDate << std::endl;
    contact.Show();
    collage.Show();
}
