#include<iostream>

using namespace std;

#include <iostream>
using namespace std;

//FUNCTION OVERLOADING.
class SecuritySystem {
public :
    // Form 1: Takes an integer PIN 🔢
    void bypassLock(int pin) {
        cout << "Bypassing lock using numeric PIN: " << pin << endl;
    }

    // Form 2: Takes a string Password 🔤
    void bypassLock(string password){
        cout << "Bypassing lock using text string: " << password << endl;
    }
};

int main() {
    SecuritySystem hack;

    hack.bypassLock(1234);         // The compiler matches this to Form 1
    hack.bypassLock("admin_pass"); // The compiler matches this to Form 2

    return 0;
}