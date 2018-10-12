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

// insertion operator
std::ostream& operator<<(std::ostream& os, const Bird& a) {
    os << "Bird age: " << a.age << std::endl;
    os << "Bird id: " << a.id << std::endl;

    if (a.alive)
        os << "Bird is alive" << std::endl;
    else
        os << "Dead" << std::endl;

    os << "Bird position: " << "X: " << a.location[0] << " Y: " << a.location[1]
       << " Z: " << a.location[2] << std::endl;
    return os;
}
