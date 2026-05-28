#include<iostream>
#include<climits>
using namespace std;

int main(){
    // int arr[]={4,2,0,6,3,2,5};
    // int n=sizeof(arr)/sizeof(int);
    
    
    
    // int water=0;
    // for(int i=1;i<n-1;i++){
    //     int leftmax=INT_MIN;
    //     int rightmax=INT_MIN;
    //     int a=i-1;
    //     int b=i+1;
    //     while(a>=0){
    //         leftmax=max(leftmax,arr[a]);
    //         a--;
    //     }
    //     while(b<n){
    //         rightmax=max(rightmax,arr[b]);
    //         b++;
    //     }
    //     if(min(leftmax, rightmax)> arr[i]){
    //         water += min(leftmax, rightmax) - arr[i];

    //     }
        
    // }

    // cout<<"total trapped water= "<<water;

// TRAPPING RAINWATER PROBLEM IN OPTIMISED FORM;

int arr[]={5,4,3,2,5};
int n=sizeof(arr)/sizeof(int);

int left = 0, right = n - 1;
int leftMax = 0, rightMax = 0;
int water = 0;

while(left < right){
    if(arr[left] < arr[right]){
        if(arr[left] >= leftMax){
            leftMax = arr[left];
        } else {
            water += leftMax - arr[left];
        }
        left++;
    } else {
        if(arr[right] >= rightMax){
            rightMax = arr[right];
        } else {
            water += rightMax - arr[right];
        }
        right--;
    }
}

cout << "Total trapped water = " << water;
return 0;

}