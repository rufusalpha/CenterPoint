#include "../header/func.h"

#include <iostream>

int main( int argc, char **argv )
{
        if( argc != 5 ){
        std::cout << argc << " ERROR: To Few Arguments" << std::endl;
        std::cout << "Correct usage: " << argv[0] << " point1_x point1_y point2_x point2_y" << std::endl;
    }
    else{
        Point a, b;
        a.x = char_to_float(argv[1]);
        a.y = char_to_float(argv[2]);
        b.x = char_to_float(argv[3]);
        b.y = char_to_float(argv[4]);


        std::cout << std::endl;

        printPoint(a, "Point a");
        printPoint(b, "Point b");
        printPoint(middle(a,b), "Center point");
        printPoint(length(a,b), "Side Length");

        std::cout << std::endl << std::endl;

    }



    return 0;
}