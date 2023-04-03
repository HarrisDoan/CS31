#include <iostream>
#include <string>
#include <cassert>

#include "BloodDonation.h"
#include "VacationAccount.h"
#include "DonationData.h"
#include "DonationAccount.h"

using namespace std;

bool sixMonthPassed(DonationData data1, DonationData data2)
{
    int month1 = data1.getMonth();
    int day1 = data1.getDay();
    int year1 = data1.getYear();

    int month2 = data2.getMonth();
    int day2 = data2.getDay();
    int year2 = data2.getYear();

    // Same month, same day, same year == bad
    if (month1 == month2 && day1 == day2 && year1 == year2)
    {
        return false;
    }

    // Same month, same day, diff year == as long as nYear < then a year has passed
    if (month1 == month2 && day1 == day2 && year1 != year2)
    {
        if (year1 < year2)
        {
            return true;
        }
    }

    // Same month, diff day, diff year == as long as nDay and nYear < then we good
    if (month1 == month2 && day1 != day2 && year1 != year2)
    {
        if (year1 < year2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // diff month, diff day, diff year == as long as nDay, nMonth, and nYear < then we good
    if (month1 != month2 && day1 != day2 && year1 != year2)
    {
        // The nDay is at least the same or smaller, and the year is larger
        if (year1 + 1 < year2)
        {
            return true;
        }

        if (year1 < year2)
        {
            if (month1 < 6)
            {
                if (month2 >= (month1 + 6) && day2 >= day1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

            if (month1 == 6)
            {
                if (month2 == 12 && day2 >= day1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

            if (month1 > 6)
            {
                if (month2 <= (month1 - 6) && day2 >= day1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }

    if (month1 != month2 && day1 != day2 && year1 == year2)
    {
        if (month1 < 6)
        {
            if (month2 >= month1 + 6 && day2 > day1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        if (month1 == 6)
        {
            if (month1 == 12 && day2 > day1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        if (month1 > 6)
        {
            if (month2 <= month1 - 6 && day2 > day1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    if (month1 != month2 && day1 == day2 && year1 == year2)
    {
        if (month1 < 6)
        {
            if (month2 >= month1 + 6)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        if (month1 == 6)
        {
            if (month2 == 12)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        if (month1 > 6)
        {
            if (month2 <= month1 - 6)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    if (month1 != month2 && day1 == day2 && year1 != year2)
    {
        if (month1 < 6)
        {
            if (month2 >= (month1 + 6))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        if (month1 == 6)
        {
            if (month2 == 12)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        if (month1 > 6)
        {
            if (month2 <= (month1 - 6))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    return false;
}

int main()
{
    BloodDonation doner1(752401, 45, 99.56);
    BloodDonation doner2(889543, 55, 109.50);
    BloodDonation doner3(89643244, 65, 187.55);
    BloodDonation doner4(855565, 17, 127.00);
    VacationAccount account(889543);
    assert(doner1.getID() == 752401);
    assert(doner2.getAge() == 55);
    assert(doner3.getWeight() == 187.550000);
    // account balance starts at zero...
    assert(account.getBalance() == 0.000000);
    assert(account.getID() == 889543);
    // Vacation adds to vacation balance
    assert(account.addVacationToAccount(doner2) == true);
    assert(account.addVacationToAccount(doner1) == false);
    assert(account.getBalance() == 4.000000);

    BloodDonation doner5(707707, 12, 67.38);
    VacationAccount account1(707707);
    assert(doner5.getID() == 707707);
    assert(doner5.getAge() == -1);    // Age is less than 21, should store -1
    assert(doner5.getWeight() == -1); // Weight is less than 101, should store -1
    assert(account1.addVacationToAccount(doner5) == false);
    assert(account1.getBalance() == 0);

    BloodDonation doner6(1111111, 12, 102);
    VacationAccount account2(1111111);
    assert(doner6.getID() == -1);      // Wrong ID, 7 characters, should store -1
    assert(doner6.getAge() == -1);     // Age is less than 21, should store -1
    assert(doner6.getWeight() == 102); // Weight is above 101, should return the value 102
    assert(account2.addVacationToAccount(doner6) == false);

    BloodDonation John_1(626626, 34, 156.40); // John's First Donation
    BloodDonation John_2(626626, 34, 160.80); // John's Second Donation
    assert(John_1.getID() == 626626);
    assert(John_1.getAge() == 34);
    assert(John_1.getWeight() == 156.40);
    assert(John_2.getID() == 626626);
    assert(John_2.getAge() == 34);
    assert(John_2.getWeight() == 160.80);
    VacationAccount John(626626);
    assert(John.addVacationToAccount(John_1) == true); // First valid donation = +4 to balance: Total = 4
    assert(John.getBalance() == 4);
    assert(John.addVacationToAccount(John_2) == true); // Second valid donation = +4 to balance: Total = 8
    assert(John.getBalance() == 8);

    BloodDonation Kanye(10.1010, 34, 156.40);
    assert(Kanye.getID() == -1); // There is a decimal, int will truncate everything after this non valid character. int ID = 10. Length != 6 --> Should store -1
    assert(Kanye.getAge() == 34);
    assert(Kanye.getWeight() == 156.40);

    BloodDonation Ricky(555555, 2.2, 120.12);
    assert(Ricky.getAge() == -1); // int age = 2.2 Truncates the .2 and it simply becomes 2. Not valid. Should store -1

    BloodDonation Yeat(444444, 21.12312, 160.12);
    assert(Yeat.getAge() == 21); // Not sure if cases in which the wrong data type such as a double is inputted into an int are going to be tested.

    // Kendrake email exmaple: Incorrect EmployeeID in VacationAccount account1(10) -> account1.getID() should return -1
    VacationAccount accountK(10);
    assert(accountK.getID() == -1);

    BloodDonation Pizaza(123456, 25, 120.00);
    VacationAccount test(123456);
    assert(test.addVacationToAccount(Pizaza) == true);
    Pizaza.setAge(11);
    assert(test.addVacationToAccount(Pizaza) == false);

    // Proper leap year returns true!
    DonationData Employee1(111111, 2, 29, 2012);
    assert(Employee1.getMonth() == 2);
    assert(Employee1.getDay() == 29);
    assert(Employee1.getYear() == 2012);
    assert(Employee1.validDate(Employee1) == true);

    // Improper leap year should return false! 2011 is not a leap year!
    DonationData Employee2(111111, 2, 29, 2011);
    assert(Employee2.getMonth() == 2);
    assert(Employee2.getDay() == 29);
    assert(Employee2.getYear() == 2011);
    assert(Employee2.validDate(Employee2) == false);

    // Proper date in a month with 31 days
    DonationData Employee3(111111, 1, 31, 2022);
    assert(Employee3.getMonth() == 1);
    assert(Employee3.getDay() == 31);
    assert(Employee3.getYear() == 2022);
    assert(Employee3.validDate(Employee3) == true);

    // Improper date in a month with 30 days
    DonationData Employee4(111111, 4, 31, 2022);
    assert(Employee4.getMonth() == 4);
    assert(Employee4.getDay() == 31);
    assert(Employee4.getYear() == 2022);
    assert(Employee4.validDate(Employee4) == false);

    // Check for valid function to test for 6 months elapsing

    // Same month, same day, same year == false;
    DonationData Data1(707707, 1, 1, 2021);
    DonationData Data2(707707, 1, 1, 2021);
    assert(sixMonthPassed(Data1, Data2) == false);

    // Same month, same day, diff year == true if 2nd is bigger
    DonationData DataA(707707, 1, 1, 2021);
    DonationData DataB(707707, 1, 1, 2022);
    assert(sixMonthPassed(DataA, DataB) == true);

    // All different
    DonationData DataX(707707, 1, 1, 2021);
    DonationData DataY(707707, 7, 4, 2023);
    assert(sixMonthPassed(DataX, DataY) == true);

    // Diff month, day. Same year
    DonationData DataP(707707, 1, 1, 2021);
    DonationData DataD(707707, 6, 4, 2021);
    assert(sixMonthPassed(DataP, DataD) == false);

    // Diff month. Same day, year
    DonationData DataM(707707, 1, 1, 2021);
    DonationData DataN(707707, 7, 1, 2021);
    assert(sixMonthPassed(DataM, DataN) == true);

    //----DONE TESTING FUNCTION---//

    // Begin Testing on Making Sure 6 Months has passed in order to donate

    BloodDonation RealTest(777777, 25, 154.50);
    DonationData RealData1(777777, 1, 1, 2021);
    DonationAccount RealAccount1(777777, 0); // Since we can see that they have no donated before we can use the old function of addVacationToBalance
    VacationAccount RealVacaTest(777777);
    assert(RealVacaTest.addVacationToAccount(RealTest) == true);
    assert(RealVacaTest.getBalance() == 4);

    // Now the company knows he has donated before so +1 on timesDonated in the DonationAccount class

    BloodDonation RealTest2(777777, 25, 154.50);
    DonationData RealData2(777777, 7, 1, 2021); // 6 months has passed so we should have a total balance of 8 at the end
    DonationAccount RealAccount2(777777, 1);
    assert(RealVacaTest.addVacationToAccount(RealTest, RealData1, RealTest2, RealData2) == true);
    assert(RealVacaTest.getBalance() == 8);

    // Now lets test for the opposite case in which the month has not elapsed.
    BloodDonation RealTest3(777777, 25, 154.50);
    DonationData RealData3(777777, 7, 2, 2021); // Hes a bad employee and tries to donate again the next day smh...
    DonationAccount RealAccount3(777777, 2);
    assert(RealVacaTest.addVacationToAccount(RealTest2, RealData2, RealTest3, RealData3) == false);
    assert(RealVacaTest.getBalance() == 8);

    // Test case in which a full year has elapsed
    BloodDonation Johnny(111222, 45, 134.01);
    DonationData JohnnyData(111222, 5, 6, 2022);
    DonationAccount JohnnyAccount(111222, 0);
    VacationAccount JohnnyVaca(111222);
    assert(JohnnyVaca.addVacationToAccount(Johnny) == true);
    assert(JohnnyVaca.getBalance() == 4);

    BloodDonation Johnny2(111222, 46, 156.12); // Hes 1 year older and has put on some pounds
    DonationData JohnnyData2(111222, 5, 6, 2023);
    DonationAccount JohnnyAccount1(111222, 1);
    assert(JohnnyVaca.addVacationToAccount(Johnny, JohnnyData, Johnny2, JohnnyData2) == true);
    assert(JohnnyVaca.getBalance() == 8);

    // Most complicated test case with dates = donated towards the end of one year and rolled into the other

    BloodDonation Jonathan(777999, 21, 165.60);
    DonationData JonathanData(777999, 8, 25, 2021);
    DonationAccount JonathanAccount(777999, 0);
    VacationAccount JonathanVaca(777999);
    assert(JonathanVaca.addVacationToAccount(Jonathan) == true);
    assert(JonathanVaca.getBalance() == 4);

    BloodDonation Jonathan2(777999, 22, 165.60);
    DonationData JonathanData2(777999, 2, 25, 2022);
    DonationAccount JonthanAccount2(777999, 1);
    assert(sixMonthPassed(JonathanData, JonathanData2) == true);
    assert(JonathanVaca.addVacationToAccount(Jonathan, JonathanData, Jonathan2, JonathanData2) == true);
    assert(JonathanVaca.getBalance() == 8);

    cout << "All tests passed!" << endl;
    return 0;
}
