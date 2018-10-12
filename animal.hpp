#include <iostream>
#pragma once

class Animal {
protected:
    int age;
    long id;
    bool alive;
    double location[3];

public:
    static long uniqueId;
    Animal();
    Animal(int age1, double x1, double y1);
    virtual void moves(double x, double y);
    virtual ~Animal();
    Animal(const Animal &a);
    virtual void sleep();
    virtual void eat();

    friend std::ostream& operator<<(std::ostream& os, const Animal&);
};

