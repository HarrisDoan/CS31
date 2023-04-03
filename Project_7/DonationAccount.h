#include <iostream>
#include <string>
using namespace std;

#ifndef DonationAccount_h
#define DonationAccount_h

#include "VacationAccount.h"
#include "BloodDonation.h"
#include "DonationData.h"

class DonationAccount
{
public:
    DonationAccount(int EmployeeID, int timesDonated);
    DonationAccount() : DonationAccount(0, 0){}; // Construtor delegation to initialize the value of timesDonated to 0;
    int getID();
    int getTimesDonated();
    void setTimesDonated(int timesDonated);
    void setID(int EmployeeID);
    bool validDonation(BloodDonation donation, DonationData data, DonationAccount &Account);

private:
    int mID;
    int mtimesDonated;
    int month;
    int day;
    int year;
};

#endif