#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "collage.h"

class Student {
private:
    char* name;
    char* birthDate;
    Contact contact;
    Collage collage;

    void CopyString(char*& dest, const char* source);

public:
    Student();
    Student(const char* name, const char* birthDate, const Contact& contact, const Collage& collage);
    Student(const Student& other);
    ~Student();

    void Show() const;

    Student& operator=(const Student& other);
};

#endif
