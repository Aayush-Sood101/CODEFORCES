#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                ll a , b , c;
                cin>>a>>b>>c;
                for(int i = 1 ; i<=5 ; i++){
                        if(a <= b && a <= c)
                        a++;
                        else if(b <= c && b <= a)
                        b++;
                        else
                        c++;
                }
                cout<<(a * b * c)<<endl;
        }
}