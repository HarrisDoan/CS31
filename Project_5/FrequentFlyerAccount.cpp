#include <iostream>
#include <string>
using namespace std;

#include "FrequentFlyerAccount.h"
#include "PlaneFlight.h"

// Initialize balance to 0
FrequentFlyerAccount::FrequentFlyerAccount(string name)
{
    mBalance = 0;
    mName = name;
}

double FrequentFlyerAccount::getBalance()
{
    return (mBalance);
}

string FrequentFlyerAccount::getName()
{
    return (mName);
}

// Must have matching names
bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight)
{
    if (flight.getName() != mName)
        return false;
    mBalance += flight.getMileage();
    return true;
}

bool FrequentFlyerAccount::canEarnFreeFlight(double mileage)
{
    return mBalance >= mileage;
}

// Sets the variables to the inputs, and subtracts the mileage from the balance.
bool FrequentFlyerAccount::freeFlight(string from, string to, double mileage, PlaneFlight &flight)
{
    if (canEarnFreeFlight(mileage))
    {
        flight.setFromCity(from);
        flight.setToCity(to);
        flight.setMileage(mileage);
        flight.setCost(0); // free flight so cost = 0
        flight.setName(mName);
        mBalance -= mileage;
        return true;
    }
    return false;
}
