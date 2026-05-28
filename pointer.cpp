#include<iostream>
using namespace std;

int change(int a){
    a=20;
    return a;
}
int ochange(int &a){
    a=30;
    return a;
}

int main(){
     
//     int *b=&a;
//     int **c=&b;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<" equal to "<<&b<<endl;
// cout<<*b<<endl;
// cout<<*c<<endl;
// *b=465;
//  cout<<a;
// int *ptr = NULL; 
// cout << *ptr; // BOOM! Segfault. You tried to look inside "nothing."
int a=36;
cout<< change(a)<<endl;
cout<<a<<endl;
cout<< ochange(a)<<endl;
cout<<a;


    return 0;
}