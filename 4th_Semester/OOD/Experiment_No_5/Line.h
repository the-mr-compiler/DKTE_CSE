class Line
{
private:
    float x1, y1, x2, y2, intercept;
    float slope;

public:
    Line();
    Line(float x1, float y1, float x2, float y2);

    void setX1(float x1);
    void setX2(float x2);
    void setY1(float y1);
    void setY2(float y2);
    void calcSlope();
    void calcIntercept();

    float getX1();
    float getX2();
    float getY1();
    float getY2();
    float getIntercept();
    float getSlope();
};