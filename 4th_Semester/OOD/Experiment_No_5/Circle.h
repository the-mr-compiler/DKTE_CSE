#include "Line.h"

class Circle
{
private:
    int centerX, centerY;
    float radius, circumference, area;

public:
    Circle();
    Circle(int cx, int cy, int r);
    void calcArea();
    float getArea();
    void calcCircumference();
    float getCircumference();

    int isTangent(int x1, int y1, int x2, int y2);
    int isTangent(float slope, int intercept);
    int isTangent(Line tl);

    void setCenterX(int cx);
    void setCenterY(int cy);
    void setRadius(int r);

    int getCenterX();
    int getCenterY();
    float getRadius();

    void draw();
};
