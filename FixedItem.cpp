//
// Created by shachar on 12/21/2017.
//

#include "FixedItem.h"
#include <sstream>

string FixedItem::to_string() {
    return std::string();
}

shared_ptr<FixedItem> FixedItem::make_fixedItem(string type,stringstream& stream) {
    char temp;
    int h,w;
            double x,y;
    stream>>h>>temp>>w>>temp>>temp>>x>>y>>temp;

    return std::make_shared<FixedItem>(h,w,x,y);
}

FixedItem::FixedItem(const int w, const int h,  double x,  double y) :w(w), h(h) {
this->location.set_x(x);
    this->location.set_y(y);
}
