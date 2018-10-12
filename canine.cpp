#include <iostream>
#include "canine.hpp"

Canine::Canine() : Animal() {}

Canine::Canine(int age, double x1, double y1) : Animal(age, location[0], location[1]) {}

void Canine::moves(double x, double y) {
    Animal::moves(x, y);
}

Canine::Canine(const Canine &a) : Animal(a) {}

Canine::~Canine() {
    std::cout << "Canine destructor" << std::endl;
}

void Canine::sleep() {
    std::cout << "Canine sleep" << std::endl;
}

void Canine::eat() {
    std::cout << "Canine eat" << std::endl;
}

void Canine::hunt() {
    std::cout << "Canine hunt" << std::endl;
}

long Canine::getId() const {
    return Animal::getId();
}

int Canine::getAge() const {
    return Animal::getAge();
}

bool Canine::getAlive() const {
    return Animal::getAlive();
}

double Canine::getX() const {
    return Animal::getX();
}

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
