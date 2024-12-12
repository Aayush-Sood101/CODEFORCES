#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b , c , d;
        cin>>a>>b>>c>>d;
        if(b < a)
        swap(a , b);
        if(d < c)
        swap(d , c);
        // pattern to be made a , c , b , d in ascending order
        if(a < c && c < b && b  < d || (c < a && a < d && d < b))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}