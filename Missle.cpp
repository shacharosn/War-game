//
// Created by shachar on 12/21/2017.
//

#include "Missle.h"

string Missle::to_string() {
    return nullptr;
}

void Missle::collect() {

}

Missle::Missle() {}

Missle::Missle(double x, double y) {
    this->location.set_x(x);
    this->location.set_y(y);

}
