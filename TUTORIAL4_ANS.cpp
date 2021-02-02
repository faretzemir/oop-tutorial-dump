#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    string user, usercopy;
    int spaces = 0;

    cout << "\nPlease enter a string to capture." << endl;
    getline(cin, user);

    cout << "\nThe string you just entered is: '" << user << "'" << endl;
    cout << "The length of the string is: " << user.length() << endl;
 
    for (int i = 0; i < user.length(); i++){
        if(user.at(i) == ' '){
            spaces++;
        }
    }

    cout << "The number of spaces in the string is: " << spaces << endl;

    cout << "The string backwards is: '";
    for(int i = user.length() - 1; i >= 0; i-- ){
        cout << user.at(i);
    }
    cout << "'" << endl;

    return 0;

}