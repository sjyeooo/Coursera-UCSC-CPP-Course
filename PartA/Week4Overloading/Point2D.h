#ifndef POINT_2D

class Point2D
{
public:
    Point2D();
    Point2D(double x, double y);

    inline double get_x() { return x; }
    inline double get_y() { return y; }

    double distance(const Point2D& p);
    double magnitude();

    Point2D operator+(const Point2D& p);
    Point2D operator-(const Point2D& p);

private:
    double x, y;
};


#endif