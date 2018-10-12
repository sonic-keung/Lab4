#include <iostream>
#include "animal.hpp"
#pragma once
class Canine : public Animal {

public:
    Canine();

    Canine(int age1, double x1, double y1);

    virtual void moves(double x, double y);

    // destructor
    virtual ~Canine();

    // copy constructor
    Canine(const Canine &a);

    void sleep() override;
    void eat() override;
    void hunt();

    // insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Canine&);

};
