#include "contact.h"

void Contact::CopyString(char*& dest, const char* source) {
    size_t length = strlen(source) + 1;
    dest = new char[length];
    strcpy_s(dest, length, source);
}

Contact::Contact() : phone(nullptr), city(nullptr), country(nullptr) {
    CopyString(phone, "Unknown");
    CopyString(city, "Unknown");
    CopyString(country, "Unknown");
}

Contact::Contact(const char* phone, const char* city, const char* country)
    : phone(nullptr), city(nullptr), country(nullptr) {
    CopyString(this->phone, phone);
    CopyString(this->city, city);
    CopyString(this->country, country);
}

Contact::Contact(const Contact& other)
    : phone(nullptr), city(nullptr), country(nullptr) {
    CopyString(phone, other.phone);
    CopyString(city, other.city);
    CopyString(country, other.country);
}

Contact::~Contact() {
    delete[] phone;
    delete[] city;
    delete[] country;
}

Contact& Contact::operator=(const Contact& other) {
    if (this != &other) {
        delete[] phone;
        delete[] city;
        delete[] country;

        CopyString(phone, other.phone);
        CopyString(city, other.city);
        CopyString(country, other.country);
    }
    return *this;
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << ", City: " << city << ", Country: " << country << std::endl;
}
