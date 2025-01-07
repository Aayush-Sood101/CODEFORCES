#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(string str){
    if(str == "X++" || str == "++X")
    return true;
    else
    return false;
}

int main(){
    int n;
    cin>>n;
    int x = 0;
    for(int i = 0  ;i<n ; i++){
        string str;
        cin>>str;
        if(check(str))
        x++;
        else
        x--;
    }
    cout<<x<<endl;
}