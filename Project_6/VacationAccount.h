#include <iostream>
#include <string>
using namespace std;

#ifndef VacationAccount_h
#define VacationAccount_h

#include "BloodDonation.h"

class VacationAccount
{
public:
    VacationAccount(int EmployeeID);
    double getBalance();
    int getID();
    void setID(int ID);
    bool addVacationToAccount(BloodDonation donation);

private:
    int mID;
    double mBalance;
};

#endif