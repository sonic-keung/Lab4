#include <iostream>
#include "bird.hpp"

Bird::Bird() : Animal() {
    location[2] = 0;
}

Bird::Bird(int age, double x1, double y1, double z1) : Animal(age, location[0], location[1]) {
    location[2] = z1;
}

void Bird::moves(double x, double y, double z) {
    Animal::moves(x, y);
    location[2] = z;
}

Bird::~Bird() {
    std::cout << "Bird destructor" << std::endl;
}

// copy constructor
Bird::Bird(const Bird &a): Animal(a) {
    location[2] = a.location[2];
}


void Bird::sleep() {
    std::cout << "Bird sleep" << std::endl;
}

void Bird::eat() {
    std::cout << "Bird eat" << std::endl;
}

long Bird::getId() const {
    return Animal::getId();
}

int Bird::getAge() const {
    return Animal::getAge();
}

bool Bird::getAlive() const {
    return Animal::getAlive();
}

double Bird::getX() const {
    return Animal::getX();
}

double Bird::getY() const {
    return Animal::getY();
}

double Bird::getZ() const {
    return location[2];
}


std::ostream& operator<<(std::ostream& os, const Bird& b) {
    if (b.getAlive())
        os << "Bird is alive" << std::endl;

    os << "Bird age: " << b.getAge() << std::endl;
    os << "Bird id: " << b.getId() << std::endl;
    os << "Bird position " << "X: " << b.getX() << " Y: " << b.getY() << " Z: "
    << b.getZ() << std::endl;
    return os;
}
