#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    cout << "The factors of " << n << " are: " << endl;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            cout << i << ", ";
        }
    }
    
}