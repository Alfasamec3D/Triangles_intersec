#include<iostream>
#include <vector>
#include <algorithm>
#include<cassert>
#include <iomanip>

template <typename T> int eps_sgn(T val);
template <typename T> bool eps_eq(T val1, T val2);

class Point
{
private:
	std::vector<double> m_coords;
public:
	Point();
	Point(const double x, const double y, const double z);
	double x() const;
	double y() const;
	double z() const;
};

class Vector
{
private:
	std::vector<double> m_coords;
public:
	Vector();
	Vector(const double x, const double y, const double z);
	Vector(const Point point1, const Point point2);
	Vector(const Point point);
	double x() const;
	double y() const;
    double z() const;
};

class Segment
{
private:
	std::vector<Point> m_edges;
public:
	Segment();
	Segment(const Point edge1, const Point edge2);
	Vector dir() const;
};

class Triangle
{
private:
	std::vector <Point> m_apexes;

public:
	Triangle();
	Triangle(const Point apex1, const Point apex2, const Point apex3);
	Triangle(const double x1, const double y1, const double z1, const double x2, const double y2, const double z2, const double x3, const double y3, const double z3);
	
	Vector norm() const;
	int actual() const;
	Segment segm() const;
};


Vector vectprod(const Vector vector1, const Vector vector2);
double scalprod(const Vector vector1, const Vector vector2);
double sqrdist(const Point point1, const Point point2);
bool operator== (const Point point1, const Point point2);
bool operator== (const Segment segment1, const Segment segment2);
Point operator*(const Point point, const double num);
Point operator*(const double num, const Point point);
Vector operator*(const double num, const Vector vector);
Vector operator*(const Vector vector, const double num);
bool operator==(const Vector vector1, const Vector vector2);
Vector operator+(const Vector vector1, const Vector vector2);

Point intsec(const Segment segment, const Triangle triangle);
std::istream& operator>> (std::istream& in, Triangle& triangle);


bool compare(const Point point, const Segment segment);
bool compare(const Segment segment1, const Segment segment2);
bool compare(const Point point, const Triangle triangle);
bool compare(const Segment segment, const Triangle triangle);
bool compare(const Triangle triangle1, const Triangle triangle2);
void final();