#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"number of terms you to print:-";
    cin>>n;
    
    int a=0;
    int b=1;
    
    cout<<a<<" ";
    cout<<b<<" ";

    for(int i=1;i<=n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }


}