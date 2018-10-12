#include <iostream>
#include "animal.hpp"
#pragma once

class Bird : public Animal { // inherit Animal class
private:
public:
    // default constructor
    Bird();

    // constructor that accepts 4 parameters
    Bird(int age1, double x, double y, double z);

    // moves the animal to the set of coordinates
    virtual void moves(double x, double y, double z);

    // destructor
    virtual ~Bird();

    // copy constructor
    Bird(const Bird &a);
    void sleep() override;
    void eat() override;

    friend std::ostream& operator<<(std::ostream& os, const Bird&);

};