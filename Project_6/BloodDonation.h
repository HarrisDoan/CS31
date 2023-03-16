#include <iostream>
#include <string>
using namespace std;

#ifndef BloodDonation_h
#define BloodDonation_h

class BloodDonation
{
public:
    BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight);
    int getID();
    void setID(int EmployeeID);
    int getAge();
    void setAge(int EmployeeAge);
    double getWeight();
    void setWeight(double EmployeeWeight);

private:
    int mID;
    int mAge;
    double mWeight;
};

#endif
