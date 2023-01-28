#include <iostream>

using namespace std;

int main(){
    
    int num1, num2, num3, num4, sum;
    
    cout << "Enter 4 integers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;
    
    if ( num1 % 2 == 0){
        num1 = num1;
    }
    else {
        num1 = 0;
    }
    
    if ( num2 % 2 == 0){
        num2 = num2;
    }
    else {
        num2 = 0;
    }
    
    if ( num3 % 2 == 0){
        num3 = num3;
    }
    else {
        num3 = 0;
    }
    
    if ( num4 % 2 == 0){
        num4 = num4;
    }
    else {
        num4 = 0;
    }
    
    sum = num1 + num2 + num3 + num4;
    
    cout << sum << endl;
    
    return 0;
    

}
