#include <iostream>
#include "animal.hpp"

long Animal::uniqueId = 0;

Animal::Animal() : age(0) {
    location[0] = 0;
    location[1] = 0;
    alive = true;
    id = uniqueId++;
}

Animal::Animal(int age1, double x1, double y1) {
    alive = true;
    id = uniqueId++;
    age = age1;
    location[0] = x1;
    location[1] = y1;
}

Animal::Animal(const Animal &a) {
    age = a.age;
    location[0] = a.location[0];
    location[1] = a.location[1];
    alive = a.alive;
}


void Animal::moves(double x, double y) {
    location[0] = x;
    location[1] = y;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

void Animal::sleep() {
    std::cout << "Animal sleep" << std::endl;
}

void Animal::eat() {
    std::cout << "Animal eat" << std::endl;
}

long Animal::getId() const {
    return id;
}

int Animal::getAge() const {
    return age;
}

bool Animal::getAlive() const {
    return alive;
}

double Animal::getX() const {
    return location[0];
}

double Animal::getY() const {
    return location[1];
}


std::ostream& operator<<(std::ostream& os, const Animal& a) {
    if (a.alive)
         os << "Animal is alive" << std::endl;

    os << "Animal age: " << a.age << std::endl;
    os << "Animal id: " << a.id << std::endl;
    os << "Animal position: " << "X: " << a.getX() << " Y: " << a.getY()
       << std::endl;
    return os;
}
