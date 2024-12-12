#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int cnt = 0;
        for(int i = 0 ; i<n ; i++){
            if(str[i] == '1')
            cnt++;
        }

        if(cnt % 2 == 0){
            if(cnt == 2){
                bool flag = true;
                for(int i = 1 ; i<n ; i++){
                    if(str[i] == '1' && str[i - 1] == '1'){
                        flag = false;
                        break;
                    }
                }
                if(flag)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}