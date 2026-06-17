#include<iostream>
#include<string>
using namespace std;

// int power(int n,int pow){
//     if(pow==0){
//         return 1;
//     }
//     return n*power(n,pow-1);

// }
// long long newpower(int n,int pow){
//     if(pow==0){
//         return 1;
//     }
// long long half=newpower(n,pow/2);


//     if(pow%2==0){
//        return half*half;

//     }else{
//         return n*half*half;
//     }
// }
//TILING PROBLEM
// int totarran(int n){
//     if(n==1){
//         return 1;
//     }
//     if(n==2){
//          return 2;
//     }
       
//     return totarran(n-1)+totarran(n-2);

// }
// REMOVE DUPLICATE IN STRONGS THROUGH RECURSION
// void removeDuplicates(string str, string ans, int i, bool map[26]) {
//     if (i == str.size()) {
//         cout << "ans : " << ans << endl;
//         return;
//     }

//     int mapIdx = (int)(str[i] - 'a');

//     if (map[mapIdx]) {   // duplicate
//         removeDuplicates(str, ans, i + 1, map);
//     }
//     else {               // not duplicate
//         map[mapIdx] = true;
//         removeDuplicates(str, ans + str[i], i + 1, map);
//     }
// }
//FRIENDS PAIRING PROBLEM
// int totalways(int n){
//     if(n==1){
//         return 1;
//     }
//     if(n==2){
//         return 2;
//     }
//     return totalways(n-1) + (n-1) * totalways(n-2);;
// }

void binarystring(int n,int lastdig,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lastdig==0){
        binarystring(n-1,0,ans+'0');
         binarystring(n-1,1,ans+'1');

    }else{
         binarystring(n-1,0,ans+'0');
    }
}








int main(){

//    cout<<power(2,5)<<endl;
// cout<<newpower(2645,5)<<endl;
// cout<<totarran(45)<<endl;

// string str="devwratshivwratomvart";
// string ans="";
// bool map[26]={false};
// removeDuplicates(str,ans,0,map);

// cout<<totalways(13);

// cout<<endl;
string ans="";

binarystring(13,0,ans);


    cout<<"now the hard recursion begins\n";
    return 0;
}