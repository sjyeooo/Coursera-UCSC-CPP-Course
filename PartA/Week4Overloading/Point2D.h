#ifndef POINT_2D

class Point2D
{
public:
	Point2D();
	Point2D(double x_in, double y_in);

	inline double get_x() const { return x; }
	inline double get_y() const { return y; }

	double distance(const Point2D& p) const;
	double magnitude() const;

	Point2D operator+(const Point2D& p);
	Point2D operator-(const Point2D& p);

private:
	double x, y;
};


#endif