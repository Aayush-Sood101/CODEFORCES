#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i = 0 ; i <n ; i++)
    cin>>v[i];


    ll sum = v[n - 1];
    ll maxVal = v[n - 1];
    for(ll i = n - 2 ; i>=0 ; i--){
        ll val = v[i];
        if(maxVal == 0) break;
        if(val > maxVal){
            sum += (maxVal - 1);
            maxVal = maxVal - 1;
        }
        else if(val == maxVal){
            sum += (val - 1);
            maxVal = val - 1;
        }
        else{
            sum += val;
            maxVal = val;
        }
    }
    cout<<sum<<endl;
}