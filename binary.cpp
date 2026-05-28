#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter your binary number:- ";
    cin>>n;
    int na=n;
    int decnum=0;
    int i=0;
    while(na!=0){
        decnum=decnum+(pow(2,i)*(na% 10));
        na=na/10;
        i++;

    }
    cout<<"your decimal form of bianry num"<<n << "is"<< decnum;
    
cout<<sizeof(int)<<endl;
cout<<sizeof(long long int)<<endl; 
int numb;
cout<<"enter the decimal number:-";
cin>>numb;
 int num=numb;
int pow=1;
int binnum=0;
while(num>0){
    binnum+=((num%2)*pow);
    pow*=10;
    num=num/2;

}
cout<<"Binary forn of your decimal number "<<numb<<" is "<<binnum;
return 0;

}