#ifndef FUNC_H_
#define FUNC_H_

#include <string>

/**
* Structure holding 2D point coords
**/

struct Point{
    float x; //x coosrd 
    float y; //y coord 
};

/**
* Function that prints Point Struct
**/
void printPoint( Point z,  std::string name );

/**
* Function that find center between two points
**/

Point middle( Point x, Point y );

/**
* Function that converts numerical characters to floating point number
**/
float char_to_float( char *in );

/**
*Function that displays lenghts of sides of a rectangle written on this point
**/
Point length( Point x, Point y ); 



#endif