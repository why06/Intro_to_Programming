/* Shaun Carter
 * Introduction to Programming
 * Module 2: Assignment 1
 * Prof. Matt Blackmon
 * 
 * Description:  A program that compute circumference and area of the circle
*/
#include <iostream>
#include <string>

#define PI 3.14159

using namespace std;
int main()
{
    double Radius = 10;
    double Circum, Area;
    
    //formulas
    Circum = PI * Radius * 2;
    Area = PI * Radius * Radius;
    
    //results
    cout <<  "Circle with radius of: " <<  Radius << "\n\n";
    cout <<  "Circumference = " <<  Circum << " Area = " << Area << "\n";
    return 0;
}