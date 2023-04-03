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
    bool addVacationToAccount(BloodDonation donation1, DonationData data1, BloodDonation donation2, DonationData data2); // Overloaded with new parameters

private:
    int mID;
    double mBalance;
};

#endif
