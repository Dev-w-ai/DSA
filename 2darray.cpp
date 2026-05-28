#include<iostream>

using namespace std;

int main(){
//     int arr[5][4]={{1,2,3,4},
//                    {5,6,7,8},
//                    {9,10,11,12},
//                    {13,14,15,16},
//                     {17,18,19,20}};
//     int n=5;int m=4;               
//     int srow=0;int scol=0;
//     int erow=n-1;int ecol=m-1;
//     while(srow<=erow && scol<=ecol){
//         // TOP
//         for(int i=scol;i<=ecol;i++){
//         cout<<arr[srow][i]<<' ';
//     }
//     // RIGHT
//     for(int i=srow+1;i<=erow;i++){
//         cout<<arr[i][ecol]<<' ';
//     }
//     // BOTTOM
//     for(int i=ecol-1;i>=scol;i--){
//          if(ecol==scol) break;
//         cout<<arr[erow][i]<<" ";
//     }
//     // LEFT
//     for(int i=erow-1;i>=srow+1;i--){
//          if(erow==srow) break;

//         cout<<arr[i][scol]<<" ";
//     }
//     srow++;scol++;erow--;ecol--;
// }
//DIAGONAL
// cout<<"DIAGONAL SUM\n";
//     int arr[3][3]={{1,2,3,},
//                    {5,6,7,},
//                    {9,10,11,},
//                   };
// int totalSum = 0;
// int n=3;
// for(int i = 0; i < n; i++) {
//     // Primary Diagonal (i == j)
//     totalSum += arr[i][i]; 
    
//     // Secondary Diagonal (i + j == n - 1)
//     // Avoid adding the center element twice if n is odd
//     if(i != n - 1 - i) {
//         totalSum += arr[i][n - 1 - i];
//     }
// }
// cout << "Total Diagonal Sum: " << totalSum << endl;

//STAIR CASE SEARCH

cout<<"STAIRCASE SEARCH\n";
int arr[4][4]={{1 ,  4 ,  7 ,  11},
                {2,  5,   8,   12},
                {3 ,  6,   9,   16},
                {10,  13,  14,  17}
            };
        
// int n=4;int m=4;
// int key=103;
// int row=0;int col=m-1;
// bool found=false;

// while(row<n && col>=0){

//     if(key==arr[row][col]){
//         cout<<"we get the value at index at row "<<row<<" and column "<<col;
//         found=true;
//         break;
//     }else if(key>arr[row][col]){
//         row++;
//     }else{
//         col--;
//     }
// }
// if(!found){

//  cout<<"element is not in the matrix";
// }
int mat[3]={1,2,3};
cout<<mat<<endl;
 
cout<<sizeof(mat)<<endl;
cout<<sizeof(arr)<<endl;

cout<<arr;
return 0;
}