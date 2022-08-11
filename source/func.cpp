#include "../header/func.h"

#include <cstdlib>
#include <iostream>
#include <string>



float char_to_float( char *in ){
    std::string out = in;
    return std::stof(out);
}

void printPoint( Point z ){ std::cout << "(" << z.x << "; " << z.y << ") " << std::endl; }

Point middle( Point x, Point y ){
    Point temp;
    temp.x = (x.x+y.x)*.5;
    temp.y = (x.y+y.y)*.5;
    return temp;
}