/*************************************************************************
      Hunter Stout   -   4/1/2022
      shapes.cc      -   Lab 10 Class File.
*************************************************************************/

#include<iostream>
#include"shapes.h"
using namespace std; 

//SHAPES (PARENT)
void Shape::input() {
    cout << "Enter thickness:";
    cin >> thickness;
    cout << "Enter cost per cubic unit:";
    cin >> cost_per_cubic_unit;
}

//RECTANGLE
void Rectangle::input() {
    cout << "Enter Length:";
    cin >> length;
    cout << "Enter width:";
    cin >> width;
}

//CIRCLE
void Circle::input() {
    cout << "Enter radius:";
    cin >> radius;
}

//TRAPEZOID
void Trapezoid::input() {
    cout << "Enter height:";
    cin >> height;
    cout << "Enter base1:";
    cin >> base1;
    cout << "Enter base2:";
    cin >> base2;
}