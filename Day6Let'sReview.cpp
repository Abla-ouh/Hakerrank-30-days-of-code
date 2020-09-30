#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    for(int i=0 ; i<N ; i++){
        string s;
        string s1,s2;
         cin>>s;
        for(int j=0 ;j < s.size() ; j++){
        if(j%2 == 0){
            s1 += s[j];
            }
        else{
            s2 += s[j];
            }
    }
        cout<< s1 << " " << s2 << endl;
    }
    return 0;
}
