#include "../header/func.h"

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>



float char_to_float( char *in ){
    std::string out = in;
    return std::stof(out);
}

void printPoint( Point z, char *name ){ std::cout << name <<" (" << z.x << "; " << z.y << ") " << std::endl; }

Point middle( Point x, Point y ){
    Point temp;
    temp.x = (x.x+y.x)*.5;
    temp.y = (x.y+y.y)*.5;
    return temp;
}

Point length( Point x, Point y ){
    Point temp;
    temp.x = fabs(x.x-y.x);
    temp.y = fabs(x.y-y.y);
    return temp;
}