#include <iostream>
#include "animal.hpp"

long Animal::uniqueId = 0; // set the first id to 0

// default constructor, set all the values to 0 and alive to true
Animal::Animal() : age(0) {
    location[0] = 0;
    location[1] = 0;
    alive = true;
    id = uniqueId++;
}

// constructor that takes 3 parameters
Animal::Animal(int age1, double x1, double y1) {
    alive = true;
    id = uniqueId++;
    age = age1;
    location[0] = x1;
    location[1] = y1;
}

// copy constructor
Animal::Animal(const Animal &a) {
    age = a.age;
    location[0] = a.location[0];
    location[1] = a.location[1];
    alive = a.alive;
}

// move method for animal
void Animal::moves(double x, double y) {
    location[0] = x;
    location[1] = y;
}

// destructor
Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

// sleep method
void Animal::sleep() {
    std::cout << "Animal sleep" << std::endl;
}

// eat method
void Animal::eat() {
    std::cout << "Animal eat" << std::endl;
}

// get id of animal
long Animal::getId() const {
    return id;
}

// get age of animal
int Animal::getAge() const {
    return age;
}

// check if animal is alive
bool Animal::getAlive() const {
    return alive;
}

// get x position of animal
double Animal::getX() const {
    return location[0];
}

// get y position of animal
double Animal::getY() const {
    return location[1];
}

// insertion operator
std::ostream& operator<<(std::ostream& os, const Animal& a) {
    if (a.alive)
         os << "Animal is alive" << std::endl;

    os << "Animal age: " << a.age << std::endl;
    os << "Animal id: " << a.id << std::endl;
    os << "Animal position: " << "X: " << a.getX() << " Y: " << a.getY()
       << std::endl;
    return os;
}
