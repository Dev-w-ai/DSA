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
//OPERATOR OVERLOADING
class Complex {

public:

    int real;
    int imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex obj) {

        Complex temp(0,0);

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};
//FUNCTION OVERRIDING


class Parent {

public:

   virtual void show() {
        cout << "Parent Function";
    }
};

class Child : public Parent {

public:

    void show() {
        cout << "Child Function";
    }
};
//ABSTRACTION AND PURE VIRTUSL FUNCTION
class Animal {

public:

    virtual void makeSound() = 0;

};

class Dog : public Animal {

public:

    void makeSound() {
        cout << "Bark";
    }

};

class Cat : public Animal {

public:

    void makeSound() {
        cout << "Meow";
    }

};




int main() {
    // SecuritySystem hack;

    // hack.bypassLock(1234);         // The compiler matches this to Form 1
    // hack.bypassLock("admin_pass"); // The compiler matches this to Form 2
// Complex c1(3,4);
//     Complex c2(5,2);

//     Complex c3 = c1 + c2;

//     c3.display();
// Parent* ptr;

//     Child c;

//     ptr = &c;

//     ptr->show();
//     return 0;
Dog d;
    Cat c;

    d.makeSound();
    cout << endl;

    c.makeSound();

}