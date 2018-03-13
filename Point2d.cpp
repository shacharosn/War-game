//
// Created by shachar on 12/21/2017.
//

#include "Point2d.h"

double Point2d::get_x() {
    return x;
}

double Point2d::get_y() {
    return y;
}

void Point2d::set_x(double _x) {
this->x=_x;
}

void Point2d::set_y(double _y) {
    this->y=_y;
}

Point2d* Point2d::make_point2d(string type) {
    /*if (type == "normal") return shared_ptr<M16>(new M16);
    if (type == "paramedic")return shared_ptr<Missle>(new Missle);
    if (type == "sniper") return shared_ptr<UZI>(new UZI);*/
    return new Point2d();
}

bool Point2d::equal(Point2d &p) {
    return p.get_x()== this->get_x() && p.get_y()== this->get_y();
}
