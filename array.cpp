#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;



int main(){
    
// int arr[]={2,-3,6,-5,4,2};
// int n=sizeof(arr)/sizeof(int);
// int sum=0;
// int max=INT_MIN;
//this is the brute force approach

// for(int i=0;i<n;i++){
//     for( int j=i;j<n;j++){

//         for(int a=i;a<=j;a++){
//             sum+=arr[a];
            
            

//         }
//         cout<<sum;
//         if (sum>max){
//             max=sum;
//         }
//         sum=0;
//         cout<<",";
        
//     }

    
//      cout<<endl;
   
// }
// cout<<"maximum sum from given array arr is: "<<max;
// int arr[]={2,-3,6,-5,4,2};
// int n=sizeof(arr)/sizeof(int);

// int maximum=INT_MIN; 
//     for(int i=0;i<n;i++){
//         int sum=0;
//        for( int j=i;j<n;j++){
//         sum+=arr[j];

//        }
//        maximum=max(maximum,sum);
//     }
//     cout<<"maximum sum from given array arr is: "<<maximum;
    
// return 0;
// int arr[]={-2,3,-6,5,14,-12};
// int n=sizeof(arr)/sizeof(int);

// int maximum=INT_MIN; 
// int currsum=0;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         maximum=max(maximum,currsum);
//         if(currsum<0){
//             currsum=0;
//         }
        
        
        
//     }  
//     cout<<"maximum sum from given array arr is: "<<maximum;
    
// return 0;
// int arr[]={-2,3,-6,5,14,-12};
// int n=sizeof(arr)/sizeof(int);
// int maximum=INT_MIN; 
// int currsum=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//           currsum+=arr[i];

//         }
        

//         // maximum=max(maximum,currsum);
//         // if(currsum<maximum){
//         //     currsum-arr[i];
//         // }
//         // currsum=maximum;
//         // if(currsum<0){
//         //     currsum=0;
//         // }
        
        
        
//     }  
//     cout<<"maximum sum from given array arr is: "<<currsum;
    
// return 0;

//BUY AND SELL PROBLEM.
// int arr[]={7,1,5,3,6,4};
// int n=sizeof(arr)/sizeof(int);
// int maxProfit = 0;
// int bestBuy = arr[0];

// for(int i = 1; i < n; i++) {
//     if(arr[i] > bestBuy) {
//         maxProfit = max(maxProfit, arr[i] - bestBuy);
//     }
//     bestBuy = min(bestBuy, arr[i]);
// }
// cout << "Maximum Profit: " << maxProfit;
int arr[]={7,1,5,3,6,4};
int n=sizeof(arr)/sizeof(int);
int profit = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            profit += (arr[i] - arr[i - 1]);
        }
    }

    cout << "Maximum Profit: " << profit;
return 0;

}


   