//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_MAPOBJECT_H
#define UNTITLED_MAPOBJECT_H
#include "Point2d.h"
#include <string>
using namespace std;

class MapObject {
public:
    Point2d location;
    string id;
    string owner;

    virtual string to_string()=0;

    void setLocation(double _x, double _y);
    void setLocationX(double _x);
    void setLocationY(double _y);



};


#endif //UNTITLED_MAPOBJECT_H
