#include <iostream>
#pragma once

class Animal {
private:
    int age;
    long id;
    bool alive;
    double location[2];

public:
    static long uniqueId;
    Animal();
    Animal(int age1, double x1, double y1);
    // moves the animal to the set of coordinates
    virtual void moves(double x, double y);
    // destructor
    virtual ~Animal();
    // copy constructor
    Animal(const Animal &a);
    virtual void sleep();
    virtual void eat();

    // getters
    long getId() const;
    int getAge() const;
    bool getAlive() const;
    double getX() const;
    double getY() const;

    friend std::ostream& operator<<(std::ostream& os, const Animal&);
};

