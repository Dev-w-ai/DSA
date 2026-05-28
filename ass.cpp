#include<iostream>
using namespace std;

// void palin(int n){
//     int a=n;
//     long long  temp=0;
//     for(int i=1;a>0;i++){
//         temp=(temp*10)+(a%10);
//         a=a/10;
//     }
//     if(temp==n){
//         cout<<n<<"is a palindrome";
//     }else{
//         cout<<n<<"is not a palindrome";
//     }
// }
// int sumodigit(int n){
//     n=abs(n);//it makes the negative to positive
//     int sum=0;
//     while(n!=0){
        
//         sum+=(n%10);
//         n=n/10;

//     }
//     return sum;
//}
char next(char a){
    return a+1;

}






int main(){
    cout<<next('c');
    return 0;
    
    

}