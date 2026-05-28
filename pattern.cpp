#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the times: ";
    cin >>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
            
        }
         cout<<endl;
    }
//     int factorail=1;
//    if( n==1){
//     cout<<"factorial of "<<n<<" is 1"<<endl;
//     return 0;
//    }
//     for(int i=1;i<=n;i++){
//         factorail*=i;
//     }
//     cout<<"factorial of "<<n<<" is "<<factorail<<endl;



//     // // 1. Handle 0 and 1
//     // if (n <= 1) {
//     //     cout << n << " is not a prime number." << endl;
//     //     return 0;
//     // }

//     // // 2. The Optimized Loop (n/2)
//     // for (int i = 2; i <= n / 2; i++) {
//     //     if (n % i == 0) {
//     //         cout << n << " is not a prime number." << endl;
//     //         return 0; // 💎 If we find a factor, we exit the whole program immediately
//     //     }
//     // }

//     // // 3. If the loop finishes without returning, it MUST be prime
//     // cout << n << " is a prime number." << endl;
    return 0;
}
