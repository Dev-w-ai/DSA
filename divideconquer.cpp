#include<iostream>
#include<vector>
using namespace std;

//merge function
//  void merge(int arr[],int si,int mid,int ei){
//     vector<int>temp;
//     int i=si;
//     int j=mid+1;
//     while(i<=mid && j<=ei){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i++]);
//         }else{
//             temp.push_back(arr[j++]);
//         }
//     }
//         while(i<=mid){
//             temp.push_back(arr[i++]);

//         }
//         while(j<=ei){
//             temp.push_back(arr[j++]);

//         }
//         //copying vector into original array
//         for(int idx=si, x=0;idx<=ei;idx++){
//             arr[idx]=temp[x++];
//         }

//     }
 

// //starting merge sort
// void mergesort(int arr[],int si,int ei){
//     if(si>=ei){
//         return;
//     }
//     int mid = si + (ei-si)/2;

//     mergesort( arr,si,mid);//left half
//     mergesort(arr,mid+1,ei);//right half

//     //merging the single elemnts to conquer
//      merge( arr, si, mid,ei);
// }
// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int partition(int arr[],int si,int ei){
//     int i=si-1;
//     int pivel=arr[ei];

//     for(int j=si;j<ei;j++){
//         if(arr[j]<=pivel){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     i++;
//     swap(arr[i],arr[ei]);

//     return i;
    

// }

// //now doing the quicksort
// void quicksort(int arr[],int si,int ei){
//     if(si >= ei){
//     return;
// }

//       int pivotidx=partition( arr, si,ei);
//     quicksort(arr,si,pivotidx-1);
//     quicksort(arr,pivotidx+1,ei);
// }

//SEARCH IN ROTATES SORTED ARRAY
int rotatedsearch(int arr[],int si,int ei,int tar){
    if(si>ei){
        return -1;
    }
    int mid=si+(ei-si)/2;
    if(arr[mid]==tar){
        return mid;
    }
    if(arr[si]<=arr[mid]){
        if(arr[si] <= tar && tar <= arr[mid]){
             return rotatedsearch(arr,si,mid-1,tar);
        }else{
             return rotatedsearch(arr,mid+1,ei,tar);
        }
    }else{
        if(arr[mid]<=tar && tar<=arr[ei]){
            return rotatedsearch(arr,mid+1,ei,tar);
            
        }else{
            return rotatedsearch(arr,si,mid-1,tar);
        }
    }

}




int main(){
    // int arr[]={3,6,24,89,5,34,2,1};
    // mergesort(arr,0,7);
    // printarr(arr,8);
// int arr[]={3,6,24,89,5,34,2,1};
// quicksort(arr,0,7);
// printarr(arr,8);
  
int ram[]={4,5,6,7,0,1,2};
 cout<<"required index of target is : "<<rotatedsearch(ram,0,6,6)<<endl;

cout<<"STARTING THE MISSION TO DIVIDE AND CONQUER\n";
    return 0;
}