#include <iostream>
#include "bird.hpp"

// default constructor
Bird::Bird() : Animal() {
    location[2] = 0;
}

// constructor that takes in 4 parameters
Bird::Bird(int age, double x1, double y1, double z1) : Animal(age, location[0], location[1]) {
    location[2] = z1;
}

// move method for bird
void Bird::moves(double x, double y, double z) {
    Animal::moves(x, y);
    location[2] = z;
}

// destructor
Bird::~Bird() {
    std::cout << "Bird destructor" << std::endl;
}

// copy constructor
Bird::Bird(const Bird &a): Animal(a) {
    location[2] = a.location[2];
}

// sleep method for bird
void Bird::sleep() {
    std::cout << "Bird sleep" << std::endl;
}

// eat method for bird
void Bird::eat() {
    std::cout << "Bird eat" << std::endl;
}

// get id of the bird
long Bird::getId() const {
    return Animal::getId();
}

// get age of the bird
int Bird::getAge() const {
    return Animal::getAge();
}

// check if bird is alive
bool Bird::getAlive() const {
    return Animal::getAlive();
}

// get x position of bird
double Bird::getX() const {
    return Animal::getX();
}

// get y position of bird
double Bird::getY() const {
    return Animal::getY();
}

// get z position of bird
double Bird::getZ() const {
    return location[2];
}

// insertion operator
std::ostream& operator<<(std::ostream& os, const Bird& b) {
    if (b.getAlive())
        os << "Bird is alive" << std::endl;

    os << "Bird age: " << b.getAge() << std::endl;
    os << "Bird id: " << b.getId() << std::endl;
    os << "Bird position " << "X: " << b.getX() << " Y: " << b.getY() << " Z: "
    << b.getZ() << std::endl;
    return os;
}
