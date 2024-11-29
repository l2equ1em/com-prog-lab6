#include<iostream>
using namespace std;

int main(){
    int num = 1;
    int evenCount;
    int oddCount;

    while (num != 0){
        cout << "Enter an integer: ";
        cin >> num;
        if (num % 2 == 0 && num > 0) {
            evenCount++;
        } else if( num % 2 != 0 && num > 0) {
            oddCount++;
        }
    }
    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}
