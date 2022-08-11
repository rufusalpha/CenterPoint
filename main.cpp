#include <cstdlib>
#include <iostream>

using namespace std;

int main( int argc, char **argv )
{
    if( argc < 1 ){
        cout << "To Few Arguments" << endl;
        cout << "Correct usage: main.exe point1_x point1_y point2_x point2_y" << endl;
    }
    else{
        cout << "else" << endl;
    }

    return 0;
}