#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;

        string str;
        cin>>str;

        unordered_map<char , int> mp; // char freq
        for(char ch: str)
        mp[ch]++;

        int cntOdd = 0 , cntEven = 0;

        for(auto p : mp){
            int freq = p.second;
            if(freq % 2 != 0)
            cntOdd++;
            else
            cntEven++;
        }

        bool flag = false;
        if((n - k) == 1 || (n - k) == 0)
        flag = true;
        else if((n - k) % 2 == 0){ // even
            if(k >= cntOdd){
                k -= cntOdd;
                if(k % 2 == 0 && cntEven >= k)
                flag = true;
            }
        }
        else{ // odd
            if(cntOdd != 0){
                k = k - cntOdd + 1;
                if(k % 2 == 0 && cntEven >= k)
                flag = true;
            }
            else{
                if(k % 2 != 0)
                flag = true;
            }
        }

        cout<<((flag) ? "YES" : "NO")<<endl;
    }
}