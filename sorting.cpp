#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    // int arr1[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
//     int arr1[]={10,20,30,40,50,60,70,80,90};
//     int n=sizeof(arr1)/sizeof(int);//9 with index 8;
    
//     int totalswap=0;
//     cout<<"array before sosrting:- ";
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<",";
//     }
//     cout<<endl;
//     int counter=0;
    

// for(int j=0;j<n-1;j++){
//     counter++;
    
//     bool swapped=false;
    
//     for(int i=0;i<n-j-1;i++){
//         if(arr1[i]>arr1[i+1]){
//             swap(arr1[i],arr1[i+1]);
//             totalswap+=1;
//             swapped=true;
//         }
        
//     }
//     if(swapped==false){
//         break;
//     }
    
// }

//     cout<<"array sorted by bubble sort:- ";
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<",";
//     }
//     cout<<"\ntotal swapping needed= "<<totalswap;
//     cout<<"\ntotal times outer loop runs= "<<counter;
// int arr[]={90,80,70,68,56,45,34,23,12};
// int n=sizeof(arr)/sizeof(int);//9 with index 8;

// for(int i=0;i<n;i++){
//     int minpos=i;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[minpos]){
//             minpos=j;
//         }

//     }
//     swap(arr[i],arr[minpos]);
    
// }

// for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
// }
//INSERTION SORT;

// int arr[] = {5, 4, 1, 3, 2};
// int n=sizeof(arr)/sizeof(int);//n=5,index=4
// for(int i=1;i<n;i++){
//     int curr=arr[i];int pre=i-1;
//     while(pre>=0 && arr[pre]>curr){
//         arr[pre+1]=arr[pre];
//         pre--;
//     }
//     arr[pre+1]=curr;
// }

// for(int i=0;i<n;i++){
//          cout<<arr[i]<<",";
// }
// COUNTNG SORT

// int arr[] = {2, 5, 2, 8, 1, 5, 2, 8};
// int n=sizeof(arr)/sizeof(int);//n=8,index=7

// int largest=INT_MIN;
// for(int i=0;i<n;i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
// }
// int freq[largest+1]={0};
// for(int i=0;i<n;i++){
//     freq[arr[i]]++;
// }
// int j=0;
// for(int i=0;i<=largest;i++){
//     while(freq[i]>0){
//         arr[j]=i;
//         j++;
//         freq[i]--;
//     }
    

// }

// for(int i=0;i<n;i++){
//          cout<<arr[i]<<",";

// INBUILT SORTING
int arr[] = {9,8,7,6,5,4,3,2};
int n=sizeof(arr)/sizeof(int);//n=8,index=7

//sort(arr,arr+n);
sort(arr+1,arr+4);

for(int i=0;i<n;i++){
         cout<<arr[i]<<",";
}











return 0;


}