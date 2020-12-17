#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t; // test cases
cin >> t;

string phonebook [t][2];
string names [t];


int i,j,k,f; //counter


for (i = 0; i <t; i++){ //creating the phonebook

        cin >> phonebook [i][0] >>  phonebook [i][1];
        }

for (k = 0;k<t;k++){
    cin >> names[k];
    int x =0; // for testing
    for (f=0; f<t;f++){
    if(names[k] == phonebook[f][0]){
        cout << phonebook[f][0] << "=" << phonebook[f][1] <<endl;
        x=1;
    }
    }
    if(x!=1){
        cout << "Not found\n";
    }
}
    
     
    return 0;
}
