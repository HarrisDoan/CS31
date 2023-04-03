#include <iostream>
#include <string>
using namespace std;

#ifndef DonationData_h
#define DonationData_h

#include "BloodDonation.h"

class DonationData
{
public:
    DonationData(int EmployeeID, int month, int day, int year);
    bool validDate(DonationData data);
    int getMonth();
    int getDay();
    int getYear();
    int getID();
    void setID(int EmployeeID);
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    friend bool sixMonthPassed(DonationData data1, DonationData data2);

private:
    int mID;
    int mMonth;
    int mDay;
    int mYear;
};

#endif /* DonationData_h */
