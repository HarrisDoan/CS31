#include <iostream>
#include <string>
#include <cassert>

#include "BloodDonation.h"
#include "VacationAccount.h"

using namespace std;

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

    cout << "All tests passed!" << endl;
    return 0;
}
