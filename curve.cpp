#include "curve.hpp"

// double Curve::getCoordinateByX() const
// {
//     return coordinateByX;
// }

// double Curve::getCoordinateByY() const
// {
//     return coordinateByY;
// }

// double Curve::getCoordinateByZ() const
// {
//     return coordinateByZ;
// }

std::vector<double> CalculationsByEllipse::get3DpointByEllipse(const double &radiusByX, const double &radiusByY, const double &t)
{
    std::vector<double> result;
    result.push_back(radiusByX * cos(t));
    result.push_back(radiusByY * sin(t));
    result.push_back(0);
    return result;
}
std::vector<double> CalculationsByEllipse::getFirstDerivativeByEllipse(const double &radiusByX, const double &radiusByY, const double &t)
{
    std::vector<double> result;
    result.push_back(radiusByX * (-sin(t)));
    result.push_back(radiusByY * (cos(t)));
    result.push_back(0);
    return result;
}

Ellipse::Ellipse(const double &radiusByX, const double &radiusByY, const double &coordinateByX, const double &coordinateByY)
    : radiusByX(radiusByX), radiusByY(radiusByY)
{
    this->coordinateByX = coordinateByX;
    this->coordinateByY = coordinateByY;
}

std::vector<double> Ellipse::get3Dpoint(const double &t) const
{
    return CalculationsByEllipse::get3DpointByEllipse(radiusByX, radiusByY, t);
}

std::vector<double> Ellipse::getFirstDerivative(const double &t) const
{
    return CalculationsByEllipse::getFirstDerivativeByEllipse(radiusByX, radiusByY, t);
}

Circle::Circle(const double &radius, const double &coordinateByX, const double &coordinateByY)
   : radius(radius)
{
    this->coordinateByX = coordinateByX;
    this->coordinateByY = coordinateByY;
}

std::vector<double> Circle::get3Dpoint(const double &t) const
{
    return CalculationsByEllipse::get3DpointByEllipse(radius, radius, t);
}

std::vector<double> Circle::getFirstDerivative(const double &t) const
{
    return CalculationsByEllipse::getFirstDerivativeByEllipse(radius, radius, t);
}

double Circle::getRadius() const
{
    return radius;
}

bool Circle::operator<(const Circle *other) const
{
    if (other == nullptr)
    {
        return false;
    }
    double epsilon = pow(10, -9);
    return ((other->radius - this->radius) > epsilon);
}

Helix3D::Helix3D(const double &radius, const double &step, const double &coordinateByX, const double &coordinateByY, const double &coordinateByZ)
    : radius(radius), step(step)
{
    this->coordinateByX = coordinateByX;
    this->coordinateByY = coordinateByY;
    this->coordinateByZ = coordinateByZ;
}

std::vector<double> Helix3D::get3Dpoint(const double &t) const
{
    std::vector<double> result;
    result.push_back(radius * cos(t));
    result.push_back(radius * sin(t));
    result.push_back(step * t);
    return result;
}

std::vector<double> Helix3D::getFirstDerivative(const double &t) const
{
    std::vector<double> result;
    result.push_back(radius * (-sin(t)));
    result.push_back(radius * (cos(t)));
    result.push_back(step);
    return result;
}
