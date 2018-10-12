#include <iostream>
#include "canine.hpp"

// default constructor
Canine::Canine() : Animal() {}

// constructor that accepts 3 parameters
Canine::Canine(int age, double x1, double y1) : Animal(age, location[0], location[1]) {}

// move method that moves the animal
void Canine::moves(double x, double y) {
    Animal::moves(x, y);
}

// copy constructor
Canine::Canine(const Canine &a) : Animal(a) {}

// destructor
Canine::~Canine() {
    std::cout << "Canine destructor" << std::endl;
}

// sleep method
void Canine::sleep() {
    std::cout << "Canine sleep" << std::endl;
}

// eat method
void Canine::eat() {
    std::cout << "Canine eat" << std::endl;
}

// hunt method
void Canine::hunt() {
    std::cout << "Canine hunt" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Canine& a) {
    os << "Canine age: " << a.age << std::endl;
    os << "Canine id: " << a.id << std::endl;

    if (a.alive)
        os << "Canine is alive" << std::endl;
    else
        os << "Dead" << std::endl;

    os << "Canine position: " << "X: " << a.location[0] << " Y: " << a.location[1]
       << std::endl;
    return os;
}