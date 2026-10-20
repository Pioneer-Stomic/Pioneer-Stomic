#include <iostream>

class Point
{
public:
    void setX(double getX)
    {
        m_X = getX;
    }
    
    void setY(double getY)
    {
        m_Y = getY;
    }
    
    double getX()
    {
        return m_X;
    }
    
    double getY()
    {
        return m_Y;
    }

private:   
    double m_X{ };
    double m_Y{ };
};

class Circle
{
public:
    void setRadius(double getRadius)
    {
        radius = getRadius;
    }

    void setCenter(Point getCenter)
    {
        center = getCenter;
    }

    double getRadius()
    {
        return radius;
    }

    Point getCenter()
    {
        return center;
    }

private:    
    Point center{ };
    double radius{ };
};

void isInCircle(Point& p, Circle& c)
{
    double distanceSquare{ (p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) + (p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY()) };
    double radiusSquare{ c.getRadius() * c.getRadius() };

    if( distanceSquare == radiusSquare )
    {
        std::cout << "The point is on the circle.\n";
    }
    else if( distanceSquare > radiusSquare )
    {
        std::cout << "The point is outside the circle.\n";
    }
    else
    {
        std::cout << "The point is inside the circle.\n";
    }
}

int main()
{
    Circle c{ };
    c.setRadius(10);
    
    Point center{ };
    center.setX(10);
    center.setY(0);

    c.setCenter(center);

    Point p{ };
    p.setX(10);
    p.setY(10);

    isInCircle(p, c);

    return 0;
}