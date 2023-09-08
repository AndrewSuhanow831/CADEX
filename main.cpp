#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <functional>

#include "curve.hpp"

#define MIN_SIZE_LIST_CURVES 3
#define MAX_SIZE_LIST_CURVES 4

#define MIN_RANDOM_NUMBER_DOUBLE 0
#define MAX_RANDOM_NUMBER_DOUBLE 5
#define PREC 9

#define Pi 3.1415926535

int getRandomNumber(const int &min, const int &max);

double GetRandomNumberDouble(const double &min, const double &max, const int &precision);

std::list<Curve*> createListCurvesWithGivenSize(const int &size);

void printCurveCoordinatesOfPoints(const std::list<Curve*> &listCurves, const double &parametrT, const bool &printFirstDerivative = false);

std::list<Circle*> createListWithCircleFromAnother(const std::list<Curve*> &listCurves);

double getTotalSumByRadii(std::list<Circle*> &listCircles);

int main(int, char**)
{
    std::srand(std::time(nullptr));

    int sizeListCurves = getRandomNumber(MIN_SIZE_LIST_CURVES, MAX_SIZE_LIST_CURVES);
    std::list<Curve*> listCurves = createListCurvesWithGivenSize(sizeListCurves);
    std::cout << "3D Points:" << std::endl;
    printCurveCoordinatesOfPoints(listCurves, Pi/4);
    std::cout << "\n";
    std::cout << "FirstDerivative:" << std::endl;
    printCurveCoordinatesOfPoints(listCurves, Pi/4, true);
    std::cout << "\n";
    std::list<Circle*> listCircles = createListWithCircleFromAnother(listCurves);
    listCircles.sort(std::less<Circle*>());
    std::cout << "Total sum of radii of all curves in the 'listCircles' " << getTotalSumByRadii(listCircles) 
    << std::endl;
};

int getRandomNumber(const int &min, const int &max)
{
  return (min + rand() % (max - min + 1));
};

double GetRandomNumberDouble(const double &min, const double &max, const int &precision)
{
  double value = rand() % (int)pow(10, precision);
  value = min + (value / pow(10, precision)) * (max - min);
  return value;
}

std::list<Curve*> createListCurvesWithGivenSize(const int &size)
{
    std::list<Curve*> resultList;
    int maxCountOfArguments = 5;
    std::vector<double> vectorArguments(maxCountOfArguments);
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < vectorArguments.size(); j++)
        {
          vectorArguments[j] = (GetRandomNumberDouble(MIN_RANDOM_NUMBER_DOUBLE, MAX_RANDOM_NUMBER_DOUBLE, PREC));
        }
        Curve *curve = nullptr;
        bool isValidTypeOfCurve = false;
        while (!isValidTypeOfCurve)
        {
          int typeOfCurve = getRandomNumber(0, 2);
          switch (static_cast<curvesType>(typeOfCurve))
          {
          case curvesType::ellipse:
              curve = new Ellipse(vectorArguments.at(0), vectorArguments.at(1), 
              vectorArguments.at(2), vectorArguments.at(3));
              isValidTypeOfCurve = true;
              break; 
          case curvesType::circle:
              curve = new Circle(vectorArguments.at(0), vectorArguments.at(1), 
              vectorArguments.at(2));
              isValidTypeOfCurve = true;
              break; 
          case curvesType::helix3D:
              curve = new Helix3D(vectorArguments.at(0), vectorArguments.at(1), 
              vectorArguments.at(2), vectorArguments.at(3), vectorArguments.at(4));
              isValidTypeOfCurve = true;
              break;
          default:
              break;
          }
        }
        resultList.push_back(curve);
        vectorArguments.resize(maxCountOfArguments);
    }
    return resultList;
}

void printCurveCoordinatesOfPoints(const std::list<Curve*> &listCurves, const double &parametrT, const bool &printFirstDerivative)
{
    std::list<Curve*>::const_iterator listCurvesIter(listCurves.cbegin());
    while (listCurvesIter != listCurves.cend())
    {
        if ((*listCurvesIter) != nullptr)
        {
            std::vector<double> result = printFirstDerivative 
            ? (*listCurvesIter)->getFirstDerivative(parametrT) 
            : (*listCurvesIter)->get3Dpoint(parametrT);
            std::cout << "(";
            for (int i = 0; i < result.size() - 1; i++)
            {
              std::cout << result.at(i) << ", ";
            }
            std::cout << result.at(result.size() -1) << ")";
          std::cout << "\n";
        }
        ++listCurvesIter;
    }
}

std::list<Circle*> createListWithCircleFromAnother(const std::list<Curve*> &listCurves)
{
    std::list<Curve*>::const_iterator listCurvesIter(listCurves.cbegin());
    std::list<Circle*> result;
    while (listCurvesIter != listCurves.cend())
    {
      if ((*listCurvesIter) != nullptr)
      {
        Circle *circle = dynamic_cast<Circle*>(*listCurvesIter);
        if (circle != nullptr)
        {
          result.push_back(circle);
        }
      }
      ++listCurvesIter;
    }
    return result;
}

double getTotalSumByRadii(std::list<Circle*> &listCircles)
{
    std::list<Circle*>::const_iterator listCirclesIter(listCircles.cbegin());
    double result = 0;
    while (listCirclesIter != listCircles.cend())
    {
      if ((*listCirclesIter) != nullptr)
      {
        result += (*listCirclesIter)->getRadius();
      }
      ++listCirclesIter;
    }
    return result;
}