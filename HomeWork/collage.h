#pragma once
#ifndef COLLAGE_H
#define COLLAGE_H

#include <iostream>
#include "contact.h"

class Collage {
private:
    char* name;
    Contact contact;

    void CopyString(char*& dest, const char* source);

public:
    Collage();
    Collage(const char* name, const Contact& contact);
    Collage(const Collage& other);
    ~Collage();

    void Show() const;

    Collage& operator=(const Collage& other);
};

#endif
