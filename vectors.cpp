#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    // cout<<"going to learn NEW keyword \n";
    // int* p= new int(100);
    // cout<<*p<<endl;
    // int n;
    // cin >> n; 
    // int *arr=new int[n];
    // int x=1;
    //  for(int i=0;i<n;i++){
    //     arr[i]=x;
    //     x++;
    //     cout<<arr[i]<<" ";

    //  }   
    //  delete p;       
    // delete[] arr;  
    // int rows;
    // cout<<"enter the rows";
    // cin>>rows;

    // int columns;
    // cout<<"enter the columns";
    // cin>>columns;
    // int** matrix=new int*[rows];

    // for(int i=0;i<rows;i++){
    //     matrix[i]=new int[columns];
    // }
    // for(int i=0;i<rows;i++){
       
    //     for(int j=0;j<columns;j++){
            
    //         cin>>matrix[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<"our current matrix is:-\n";
    // for(int i=0;i<rows;i++){
        
    //     for(int j=0;j<columns;j++){
            
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // int i=0;
    // while(i<rows){
    //     delete[] matrix[i];
    //     i++;
    // }

    // delete[] matrix;


    // vector<int> a = {3,4,5,6,7,8,9};

    // cout << a.capacity() << endl;
    // cout << a.size() << endl;

    // a.push_back(34);

    // cout << a.capacity() << endl;
    // cout << a.size() << endl;

    // for(int i = 0; i < a.size(); i++){
    //     cout << a[i] << " ";
    // }

    // cout << endl;

    // while(!a.empty()){
    //     a.pop_back();
    // }

    // cout << "Size after deletion: " << a.size() << endl;
//      vector<int> v = {1, 4, 5, 3, 2};
     
// int target = 6;

// for(int i = 0; i < v.size(); i++){

//     for(int j = i + 1; j < v.size(); j++){

//         if(v[i] + v[j] == target){

//             cout << "Target found at indices: "
//                  << i << " and " << j << endl;
//         }
//     }
// }

// vector<int> v = {1, 4, 5, 3, 2};
// int target = 6; 

// sort(v.begin(), v.end()); // v becomes {1, 2, 3, 4, 5}

// int i = 0; 
// int j = v.size() - 1;

// while(i < j) {
//     int currentSum = v[i] + v[j];

//     if(currentSum == target) {
//         cout << "Found target " << target << " at indices " << i << " and " << j << endl;
//         i++; // Move both to find other pairs
//         j--;
//     }
//     else if(currentSum > target) {
//         j--; // Sum is too high, move the right pointer left to decrease it
//     }
//     else {
//         i++; // Sum is too low, move the left pointer right to increase it
//     }
// }

cout<<"NOW GOING TO LEARN 2D VECTORS\n";

vector<vector<int>>matrix={{4,5,6,5,6,7},{6,4,7,5,3},{9,4,2,7},{2,4,8},{8,5},{6}};

// Inputting data
for(int i = 0; i < matrix.size(); i++) {
    for(int j = 0; j < matrix[i].size(); j++) {
        cout<< matrix[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
    
         



    

