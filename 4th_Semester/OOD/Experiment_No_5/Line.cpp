#include "iostream"
#include "Line.h"

using namespace std;

Line::Line()
{
    this->x1 = 0;
    this->x2 = 0;
    this->y1 = 0;
    this->y2 = 0;
    this->slope = 0;
    this->intercept = 0;
}

Line::Line(float x1, float y1, float x2, float y2)
{
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
    this->slope = 0;
    this->intercept = 0;
}

void Line::calcSlope()
{
    this->slope = (this->y2 - this->y1) / (this->x2 - this->x1);
}

void Line::calcIntercept()
{
    this->intercept = y1 - ((7 * x1) / 3);
}

void Line::setX1(float x1)
{
    this->x1 = x1;
}
void Line::setX2(float x2)
{
    this->x2 = x2;
}
void Line::setY1(float y1)
{
    this->y1 = y1;
}
void Line::setY2(float y2)
{
    this->y2 = y2;
}
float Line::getX1()
{
    return this->x1;
}
float Line::getX2()
{
    return this->x2;
}
float Line::getY1()
{
    return this->y1;
}
float Line::getY2()
{
    return this->y2;
}
float Line::getIntercept()
{
    this->calcIntercept();
    return this->intercept;
}
float Line::getSlope()
{
    this->calcSlope();
    return this->slope;
}