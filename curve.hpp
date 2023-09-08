#ifndef CURVE_H
#define CURVE_H

#include <vector>
#include <cmath>
// #include <numbers>

enum curvesType
{
    ellipse = 0,
    circle = 1,
    helix3D = 2
};

class Curve
{
public:
    Curve() = default;
    ~Curve() = default;
    virtual std::vector<double> get3Dpoint(const double &t) const = 0;
    virtual std::vector<double> getFirstDerivative(const double &t) const = 0;
    // virtual double getCoordinateByX() const;
    // virtual double getCoordinateByY() const;
    // virtual double getCoordinateByZ() const;

protected:
    double coordinateByX = 0;
    double coordinateByY = 0;
    double coordinateByZ = 0;
};

class CalculationsByEllipse
{
public:
    ~CalculationsByEllipse() = default;
    static std::vector<double> get3DpointByEllipse(const double &radiusByX, const double &radiusByY, const double &t);
    static std::vector<double> getFirstDerivativeByEllipse(const double &radiusByX, const double &radiusByY, const double &t);
};

class Ellipse final : public Curve, public CalculationsByEllipse
{
public: 
    Ellipse(const double &radiusByX, const double &radiusByY, const double &coordinateByX = 0, const double &coordinateByY = 0);
    ~Ellipse() = default;
    std::vector<double> get3Dpoint(const double &t) const override;
    std::vector<double> getFirstDerivative(const double &t) const override;

protected:
    double radiusByX = 0;
    double radiusByY = 0;
};

class Circle final : public Curve, public CalculationsByEllipse
{
public: 
    Circle(const double &radius, const double &coordinateByX = 0, const double &coordinateByY = 0);
    ~Circle() = default;
    std::vector<double> get3Dpoint(const double &t) const override;
    std::vector<double> getFirstDerivative(const double &t) const override;
    double getRadius() const;
    bool operator<(const Circle *other) const;

protected:
    double radius = 0;
};

class Helix3D final : public Curve
{
public:
    Helix3D(const double &radius, const double &step, const double &coordinateByX = 0, const double &coordinateByY = 0, const double &coordinateByZ = 0);
    ~Helix3D() = default;
    std::vector<double> get3Dpoint(const double &t) const override;
    std::vector<double> getFirstDerivative(const double &t) const override;

protected:
    double radius = 0;
    double step = 0;
};

#endif