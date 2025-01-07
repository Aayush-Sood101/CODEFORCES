#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int , int>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        vector<pii> ans;
        for(int i = 0 ; i<str.length() ; i++){
            char ch = str[i];
            if(ch != '0')
            ans.push_back({((int)ch - 48) , i});
        }
        cout<<ans.size()<<endl;

        int len = str.length();

        for(int i = 0 ; i<ans.size() ; i++){
            int val = ans[i].first;
            int multiplier = len - ans[i].second - 1;
            cout<<val;
            for(int j = 0 ; j<multiplier ; j++)
            cout<<"0";
            cout<<" ";
        }
        cout<<endl;
    }
}