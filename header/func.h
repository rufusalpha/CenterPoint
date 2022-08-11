#ifndef FUNC_H_
#define FUNC_H_

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
void printPoint( Point z );

/**
* Function that find center between two points
**/

Point middle( Point x, Point y );

/**
* Function that converts numerical characters to floating point number
**/
float char_to_float( char *in );





#endif