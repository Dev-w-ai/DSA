#include<iostream>
using namespace std;

// int power(int n,int pow){
//     if(pow==0){
//         return 1;
//     }
//     return n*power(n,pow-1);

// }
int newpower(int n,int pow){
    if(pow==0){
        return 1;
    }
int half=newpower(n,pow/2);


    if(pow%2==0){
       return half*half;

    }else{
        return n*half*half;
    }
}








int main(){

//    cout<<power(2,5)<<endl;
cout<<newpower(20,5)<<endl;

    cout<<"now the hard recursion begins\n";
    return 0;
}