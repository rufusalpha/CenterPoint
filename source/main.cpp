#include "../header/func.h"

#include <cstdlib>
#include <iostream>

int main( int argc, char **argv )
{
    Point a, b, center;

    if( argc != 5 ){
        std::cout << argc << " ERROR: To Few Arguments" << std::endl;
        std::cout << "Correct usage: " << argv[0] << " point1_x point1_y point2_x point2_y" << std::endl;
    }
    else{
        a.x = char_to_float(argv[1]);
        a.y = char_to_float(argv[2]);
        b.x = char_to_float(argv[3]);
        b.y = char_to_float(argv[4]);
        center.x = .0;
        center.y = .0;
        printPoint(a);
        printPoint(b);

        printPoint(middle(a,b));

    }



    return 0;
}