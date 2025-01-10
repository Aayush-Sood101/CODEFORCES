#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);

        for(int i = 0 ; i<n ; i++){
            cin>>v1[i];
        }

        for(int i = 0 ; i<n ; i++){
            cin>>v2[i];
        }

        vector<int> arr(n);
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0 ; i<n-1 ; i++){
            int val = v1[i] - v2[i + 1];
            if(val > 0){
                sum1 += v1[i];
                sum2 += v2[i + 1];
            }
        }

        sum1 += v1[n - 1];
        cout<<(sum1 - sum2)<<endl;


    }
}