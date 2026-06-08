#include<iostream>
#include<vector>
using namespace std;

void run( int arr[],int n){
    if(n<0){
        return;
    }
    cout<<arr[n-1]<<endl;
    run( arr,n-1);
}
long long factorial(int n){
    int a;
    
    if(n<0){
        cout<<"invalid input";
    }
    if(n==0 || n==1){
        return 1;
    }else{
        a= n*factorial(n-1);
    }
    return a;

}
void decreasing(int n){
    if(n==0){
        return ;
    }
        cout<<n<<endl;
        decreasing(n-1);
    
}
int sum(int n){
    if (n==0){
        return 0;
    }
    return n+sum(n-1);
}
int fibonanci(int n){
    //0 1 1 2 3 5 8 13 21 34 56 90
    
    if(n==0 || n==1){
        return n;
    }
    return fibonanci(n-1)+fibonanci(n-2);

}
bool sorted(int arr[],int n,int i){
   
    if(i==n-1){
        return true ;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return sorted(arr,n,i+1);
}
int lastoccurence(vector<int>arr,  int n,int target){
    
    
    if(n<0){
        return -1;
    }
    if(arr[n]==target){
        return n;

    }
    return lastoccurence(arr,n-1,target);
}

int main(){
     int arr[]={4,5,6,7,89,3,43};
    //  int brr[]={ 56 ,46 ,3 ,3,3,3};
     vector<int>brr={1,2,3,3,3,4};
    run(arr,7);
    cout<<factorial(5)<<endl;
decreasing(100);

cout<<sum(100)<<endl;
 cout<<fibonanci(7)<<endl;
if(sorted(arr,7,0)==1){
    cout<<"our array  is sorted\n";

}else{
    cout<<"our array is not sorted\n";
}
cout<<lastoccurence(brr,6,783)<<endl;




    cout<<"now i am starting recursion\n";
   

}