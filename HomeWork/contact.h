#pragma once
#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <cstring>

class Contact {
private:
    char* phone;
    char* city;
    char* country;

    void CopyString(char*& dest, const char* source);

public:
    Contact();
    Contact(const char* phone, const char* city, const char* country);
    Contact(const Contact& other);
    ~Contact();

    void Show() const;

    Contact& operator=(const Contact& other);
};

#endif
