#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    short int a, b;
    cin >> a>>b;
 
    if(a == 0 && b == 0){
        cout<<"NO";
    }else if (abs(a-b) == 0 || abs(a-b)==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}