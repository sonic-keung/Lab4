#include <iostream>
#include "animal.hpp"
#pragma once
class Canine : public Animal {
private:
    double location[2];

public:
    //static long uniqueId;

    Canine(); // default constructor

    Canine(int age1, double x1, double y1);

    // moves the animal to the set of coordinates
    virtual void moves(double x, double y);

    // destructor
    virtual ~Canine();

    // copy constructor
    Canine(const Canine &a);

    void sleep();
    void eat();
    void hunt();
    // getters
    long getId() const;
    int getAge() const;
    bool getAlive() const;
    double getX() const;
    double getY() const;

    friend std::ostream& operator<<(std::ostream& os, const Canine&);

};
