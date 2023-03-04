#include <iostream>
#include <string>
using namespace std;

#include "PlaneFlight.h"

PlaneFlight::PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage)
{
    setFromCity(fromCity);
    setToCity(toCity);
    setName(passengerName);
    setCost(cost);
    setMileage(mileage);
}

string PlaneFlight::getName()
{
    return (mName);
}

// Makes sure the passengerName isn't an empty string, mName = passengerName
void PlaneFlight::setName(string passengerName)
{
    if (passengerName != "")
    {
        mName = passengerName;
    }
}

string PlaneFlight::getFromCity()
{
    return (mFromCity);
}

// Makes sure the fromCity isn't an empty string and doesn't match the toCity. mFromCity = fromCity
void PlaneFlight::setFromCity(string fromCity)
{
    if (fromCity != "" && fromCity != mToCity)
    {
        mFromCity = fromCity;
    }
}

string PlaneFlight::getToCity()
{
    return (mToCity);
}

// Makes sure the toCity isn't an empty string and doesn't match the fromCity. mToCity = toCity
void PlaneFlight::setToCity(string toCity)
{
    if (toCity != "" && toCity != mFromCity)
    {
        mToCity = toCity;
    }
}

double PlaneFlight::getCost()
{
    return (mCost);
}

// Cost must be greater or equal to zero. No negative costs.
void PlaneFlight::setCost(double cost)
{
    if (cost >= 0)
    {
        mCost = cost;
    }
}

double PlaneFlight::getMileage()
{
    return (mMileage);
}

// Mileage must be number greater than 0, if not it is set to -1
void PlaneFlight::setMileage(double mileage)
{
    if (mileage > 0)
    {
        mMileage = mileage;
    }
    else
    {
        mMileage = -1;
    }
}
