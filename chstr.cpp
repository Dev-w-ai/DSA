#include<iostream>
#include<string>
#include<cstring>
#include<cctype>


using namespace std;

int main(){
//     char ch='f';
//     char b='F';
//     char num='5';
//     // cout<<"postion of f is  "<<ch-'a'<<endl;
// cout<<ch-b<<endl;
// // cout<<ch+32<<endl;
// ch-=32;
// cout<<ch;
// //CONVERSION TO UPPERCASE.

// char arr[]="devwrat";
// int n=strlen(arr);
// cout<<n<<endl;
// cout<<arr<<endl;
// for(int i=0;i<n;i++){
//     arr[i]=toupper(arr[i]);
// }

// cout<<arr<<endl;
// char ar[]="shivwrat";
// int a=strlen(ar);

// for(int i = 0; i < a; i++){
//         if(ar[i] >= 'a' && ar[i] <= 'z'){
//             ar[i] = ar[i] - 'a' + 'A';
//         }
//     }
// cout<<ar<<endl;

// char arr[]="nana";
// int n=strlen(arr);
// int a=0;
// int b=n-1;
// while( b>a){
//     swap(arr[a],arr[b]);
//     a++;b--;
// }
// char arr[]="naman";
//  int n=strlen(arr);
// cout<<arr<<endl;
// int a=0;int b=n-1;
//  bool ispalindrome=true;
// while(b>a){
//     if(arr[a]!=arr[b]){
//         ispalindrome=false;
//         break;
//     }
//     a++;b--;

// }
// if(ispalindrome){
//     cout<<arr<<"is a palindrome";
// }else{
//     cout<<arr<<"is not a palindrome";
// }

// 
// char arr[100];
// strcpy(arr,"my name is ajju bhai");
// cout<<arr<<endl;
// char ram[]="ram is the greatest archer ";
// strcpy(arr,ram);
// cout<<arr<<endl;

// string a="ram";
// string b="shyam";
// cout<<a<<" "<<b<<endl;
// string c="my name is devwrat";
// // cin>>c;
// // cout<<c<<endl;
// // getline(cin,c);
// // cout<<c<<endl;
// for(char a:c){
//     cout<<a<<"\n";

// }
//VALID ANAGRAM
// string a, b;
// cin >> a >> b;

// int arr[26] = {0};

// // Step 1: Length check (The "Best Developer" shortcut)
// if(a.length() != b.length()) {
//     cout << "Not an anagram (Length mismatch!)" << endl;
//     return 0; 
// }

// // Step 2: Map to buckets
// for(int i = 0; i < a.length(); i++) {
//     arr[a[i] - 'a']++;
//     arr[b[i] - 'a']--; // You can even do both in one loop if lengths are same!
// }

// // Step 3: The Verdict
// bool isAnagram = true;
// for(int i = 0; i < 26; i++) {
//     if(arr[i] != 0) {
//         isAnagram = false;
//         break; // Efficiency: Stop immediately!
//     }
// }

// if(isAnagram) {
//     cout << a << " and " << b << " are valid anagrams! 🛡️" << endl;
// } else {
//     cout << a << " and " << b << " are NOT anagrams! 🚫" << endl;
// }
     return 0;
}
