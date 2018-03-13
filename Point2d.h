//
// Created by shachar on 12/21/2017.
//
#include <memory>

#ifndef UNTITLED_POINT2D_H
#define UNTITLED_POINT2D_H
#include <iostream>
#include <string>
using std::shared_ptr;
using  namespace std;


class Point2d {
    double x;
    double y;
public:
    Point2d() :x(0.0), y(0.0) {
        std::cout << "constructor Point2d" << std::endl;
    }
     Point2d(double _x, double _y) :x(_x), y(_y) {
        std::cout << "constructor2" << std::endl;

    }
    Point2d( Point2d &p): x(p.get_x()),y(p.get_y()){}

    ~Point2d(){
        std::cout << "destructor Point2d" << std::endl;
    }


    double get_x();
    double get_y();
    void set_x(double _x);
    void set_y(double _y);
    static Point2d* make_point2d(string type);
    bool equal(Point2d &p);

};


#endif //UNTITLED_POINT2D_H
