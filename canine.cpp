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

// get id of canine
long Canine::getId() const {
    return Animal::getId();
}

// get age of canine
int Canine::getAge() const {
    return Animal::getAge();
}

// see if canine is alive
bool Canine::getAlive() const {
    return Animal::getAlive();
}

// get canine x position
double Canine::getX() const {
    return Animal::getX();
}

// get canine y position
double Canine::getY() const {
    return Animal::getY();
}


std::ostream& operator<<(std::ostream& os, const Canine& a) {
    if (a.getAlive())
        os << "Canine is alive" << std::endl;

    os << "Canine age: " << a.getAge() << std::endl;
    os << "Canine id: " << a.getId() << std::endl;
    os << "Canine position: " << "X: " << a.getX() << " Y: " << a.getY()
    << std::endl;

    return os;
}
