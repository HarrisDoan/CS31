#include <iostream>
#include <string>
using namespace std;

#ifndef FREQUENTFLYERACCOUNT_H
#define FREQUENTFLYERACCOUNT_H

#include "PlaneFlight.h"

class FrequentFlyerAccount
{
public:
    FrequentFlyerAccount(string name);
    double getBalance();
    string getName();
    bool addFlightToAccount(PlaneFlight flight);
    bool canEarnFreeFlight(double mileage);
    bool freeFlight(string from, string to, double mileage, PlaneFlight &flight);

private:
    string mName;
    double mBalance;
};

#endif
