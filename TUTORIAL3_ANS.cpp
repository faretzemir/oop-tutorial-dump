#include <iostream>
using namespace std;

void base10tobase5(int base10Num){

    int digit;
    string stringDigit, answer;
    unsigned int convertFromCopy;

    convertFromCopy = base10Num;

    while(base10Num != 0){
        if (digit < 10){
            digit = base10Num % 5;
            stringDigit = '0' + digit;
        }
        else
            stringDigit = digit - 10 + 'A';

        answer = stringDigit + answer;

        base10Num /= 5;
    }   

    cout << convertFromCopy << " written in base 5 is: " << answer << endl;

}


int main() {
    int convertFromCopy;
    unsigned int convertFrom;
    string res;

    cout << "Num (base 10): ";
    cin >> convertFrom;

    base10tobase5(convertFrom);

    return 0;
}