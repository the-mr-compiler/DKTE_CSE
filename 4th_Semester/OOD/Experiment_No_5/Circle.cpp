#include <iostream>
#include "Circle.h"
#include <cmath>
using namespace std;

Circle::Circle()
{
    this->centerX = 0;
    this->centerY = 0;
    this->area = 0;
    this->circumference = 0;
    this->radius = 0;
}

Circle::Circle(int cx, int cy, int r)
{
    this->centerX = cx;
    this->centerY = cy;
    this->radius = r;
}

int Circle::isTangent(int x1, int y1, int x2, int y2)
{
    Line l = Line(x1, y1, x2, y2);
    int ans = ((pow(radius, 2) - pow(centerX, 2)) * pow(l.getSlope(), 2)) - (2 * l.getSlope() * centerX * (l.getIntercept() - centerY)) + pow(radius, 2) - (pow((l.getIntercept() - centerY), 2));
    return ans == 0;
}
int Circle::isTangent(float slope, int intercept)
{
    int ans = ((pow(radius, 2) - pow(centerX, 2)) * (slope * slope)) - (2 * slope * centerX * (intercept - centerY)) + pow(radius, 2) - ((intercept - centerY) * (intercept - centerY));
    return ans == 0;
}

int Circle::isTangent(Line tl)
{
    tl.calcSlope();
    tl.calcIntercept();
    int ans = ((pow(radius, 2) - pow(centerX, 2)) * (tl.getSlope() * tl.getSlope())) - (2 * tl.getSlope() * centerX * (tl.getIntercept() - centerY)) + pow(radius, 2) - ((tl.getIntercept() - centerY) * (tl.getIntercept() - centerY));
    return ans == 0;
}

void Circle::calcArea()
{
    this->area = M_PI * this->radius * this->radius;
}

void Circle::calcCircumference()
{
    this->circumference = (2 * M_PI * this->radius);
}

void Circle::draw()
{
    cout << "\nDrawing Circle\n";
}

void Circle::setCenterX(int cx)
{
    this->centerX = cx;
}
void Circle::setCenterY(int cy)
{
    this->centerY = cy;
}
void Circle::setRadius(int r)
{
    this->radius = r;
}

int Circle::getCenterX()
{
    return this->centerX;
}
int Circle::getCenterY()
{
    return this->centerY;
}
float Circle::getRadius()
{
    return this->radius;
}
float Circle::getArea()
{
    return this->area;
}
float Circle::getCircumference()
{
    return this->circumference;
}