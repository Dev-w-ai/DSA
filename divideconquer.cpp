#include<iostream>
#include<vector>
using namespace std;

//merge function
 void merge(int arr[],int si,int mid,int ei){
    vector<int>temp;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
        while(i<=mid){
            temp.push_back(arr[i++]);

        }
        while(j<=ei){
            temp.push_back(arr[j++]);

        }
        //copying vector into original array
        for(int idx=si, x=0;idx<=ei;idx++){
            arr[idx]=temp[x++];
        }

    }
 

//starting merge sort
void mergesort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = si + (ei-si)/2;

    mergesort( arr,si,mid);//left half
    mergesort(arr,mid+1,ei);//right half

    //merging the single elemnts to conquer
     merge( arr, si, mid,ei);
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}





int main(){
    int arr[]={3,6,24,89,5,34,2,1};
    mergesort(arr,0,7);
    printarr(arr,8);

  


cout<<"STARTING THE MISSION TO DIVIDE AND CONQUER\n";
    return 0;
}