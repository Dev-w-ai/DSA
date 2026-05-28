#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    // 
    
    ifstream writefile(
        "C:\\Users\\sravi\\Desktop\\cow.txt");
    if (!writefile.is_open()) {
    cout << "Could not find the cow file!" << endl;
    return 1;
}

    // string line;

    // while(getline(writefile,line)){
    //     cout<<line<<endl;
    // }

//     char ch;
// while (writefile.get(ch)) {
//     cout << ch<<endl; // Prints exactly what is in the file, character by character
// }

string word;
int i=0;
while (writefile>> word) {
    cout << i<<" "<<"word " << word << endl; 
    i++;
}

    writefile.close();







return 0;

}