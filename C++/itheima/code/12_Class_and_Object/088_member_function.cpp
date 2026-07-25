#include <iostream>

class Cube
{
public:
    void setLength(double getLength)
    {
        length = getLength;
    }

    void setWidth(double getWidth)
    {
        width = getWidth;
    }
    
    void setHeight(double getHeight)
    {
        height = getHeight;
    }    

    double getLength()
    {
        return length;
    }

    double getWidth()
    {
        return width;
    }

    double getHeight()
    {
        return height;
    }
    
    double calcArea()
    {
        return 2 * length * width + 2 * length * height + 2 * width * height;
    }

    double calcVolume()
    {
        return length * width * height;
    }

    bool isSamebyClass(Cube& c)
    {
        if(length == c.getLength() && width == c.getWidth() && height == c.getHeight())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

private:    
    double length{ };
    double width{ };
    double height{ };
};

bool isSame(Cube& c1, Cube& c2)
{
    if(c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Create cube "c1".
    Cube c1;

    c1.setLength(10);
    c1.setWidth(10);
    c1.setHeight(10);

    std::cout << c1.getLength() << '\n';
    
    std::cout << "Area: " << c1.calcArea() << '\n';
    std::cout << "Volume: " << c1.calcVolume() << '\n';

    // Create cube "c2".
    Cube c2;

    c2.setLength(10);
    c2.setWidth(10);
    c2.setHeight(10);

    std::cout << "Area: " << c2.calcArea() << '\n';
    std::cout << "Volume: " << c2.calcVolume() << '\n';

    // Judge by global function.
    bool result{ isSame(c1, c2) };

    if(result)
    {
        std::cout << "Global function: c1 and c2 are the same.\n";
    }
    else
    {
        std::cout << "Global function: c1 and c2 are not same.\n";
    }

    // Judge by member function.
    bool result2{ c1.isSamebyClass(c2) };
    
    if(result2)
    {
        std::cout << "Member function: c1 and c2 are the same.\n";
    }
    else
    {
        std::cout << "Member function: c1 and c2 are not same.\n";
    }

    return 0;
}