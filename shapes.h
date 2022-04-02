/*************************************************************************
      Hunter Stout   -   4/1/2022
      shapes.h       -   Lab 10 Header File.
*************************************************************************/

#ifndef SHAPES_H
#define SHAPES_H
#include<cmath>

class Shape{ //(PARENT)
    public:
        Shape() {thickness = 5.0; cost_per_cubic_unit = 10.0;}
        double cost() {return thickness * cost_per_cubic_unit * area();}
        virtual double area() {return 0.0;}
        virtual void input();

    private:
        double thickness;
        double cost_per_cubic_unit;
};

class Rectangle:public Shape{
    public:
        Rectangle() {length = 0.0; width = 0.0;}
        double area() {return length * width;}
        void input();

    private:
        double length;
        double width;
};

class Circle:public Shape{
    public:
        Circle() {radius = 0.0;}
        double area() {return M_PI * radius * radius;}
        void input();

    private:
        double radius;
};

class Trapezoid:public Shape{
    public:
        Trapezoid() {base1 = 0.0; base2 = 0.0; height = 0.0;}
        double area() {return height * (base1 + base2) / 2.0;}
        void input();

    private:
        double base1;
        double base2;
        double height;
};
#endif