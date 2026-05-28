#include<iostream>


using namespace std;

int main(){
    // int a=3;
    // int b=5;
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;

    // cout<<(~b)<<endl;//ones compliment

    // cout<<(b>>3)<<endl;//right shift
    // cout<<(b<<3)<<endl;//left shift
     //ODD EVEN CHECK
    int a;
    cout<<"enter the number:";
    cin>>a;
    if(a&1==1){
        cout<<a<<"is odd";

    }else{
        cout<<a<<"is even";

    }
    


    
    





    return 0;
}