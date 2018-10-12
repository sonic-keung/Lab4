#include <iostream>
#include "canine.hpp"
#include "animal.hpp"
#include "bird.hpp"

int main() {
    Animal *a = new Animal(1, 3.0, 4.0);
    Animal *b = new Bird(2, 4.0, 5.0, 6.0);
    Animal *c = new Canine(3, 5.0, 5.0);

    a->eat();
    a->sleep();
    a->moves(2.0, 3.0);
    std::cout << *a << std::endl;

    b->eat();
    b->sleep();
    (dynamic_cast<Bird*>(b))->moves(4.0, 2.0, 3.0);
    std::cout << (*dynamic_cast<Bird*>(b)) << std::endl;

    c->eat();
    c->sleep();
    c->moves(6.0, 6.0);
    (dynamic_cast<Canine*>(c))->hunt();
    std::cout  << (*dynamic_cast<Canine*>(c)) << std::endl;

    delete a;
    delete b;
    delete c;
    return 0;
}
