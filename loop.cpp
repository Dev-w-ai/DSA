#include <iostream>
using namespace std;

int main() {
    int num;
    // cout<<"enter your number:-";
    // cin>>num;
    // int temp=num;
    // int sum=0;
    // int a;
    // for(int i=1;temp>0;i++){
    //     a=temp%10;
    //     sum=sum+(a*a*a);
    //     temp=temp/10;
    // }
    // cout<<"the sum of cubes of digits is:-"<<sum<<endl;
    // if(num==sum){
    //     cout<<"the number is armstrong";
    // }
    // else{
    //     cout<<"the number is not armstrong";
    // }
    // 
    int n;
    cout<<"enter the number:-";
    cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     // cout<<i<<endl;
    //     sum=sum+i;
    // }
    cout<<"the sum of first "<<n<<" natural numbers is:-"<<(n*(n+1))/2;
    return 0;
}