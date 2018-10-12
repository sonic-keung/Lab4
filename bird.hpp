#include <iostream>
#include "animal.hpp"
#pragma once

class Bird : public Animal { // inherit Animal class
private:
    double location[3];
public:
    static long uniqueId;

    Bird();

    Bird(int age1, double x, double y, double z);

    // moves the animal to the set of coordinates
    virtual void moves(double x, double y, double z);

    virtual ~Bird();

    // copy constructor
    Bird(const Bird &a);
    void sleep();
    void eat();

    // getters
    long getId() const;
    int getAge() const;
    bool getAlive() const;
    double getX() const;
    double getY() const;
    double getZ() const;

    friend std::ostream& operator<<(std::ostream& os, const Bird&);

};