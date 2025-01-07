#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string num;
    cin>>num;
    string ans = "";
    for(int i = 0 ; i<num.length() ; i++){
        char orgCh = num[i];
        int valOrgCh = (int)orgCh - 48;
        int valNewCh = 9 - valOrgCh;
        char newCh = (char)(valNewCh + 48);
        if(i == 0){
            if(valNewCh == 0)
            ans = ans + orgCh;
            else if(valNewCh < valOrgCh)
            ans = ans + newCh;
            else
            ans = ans + orgCh;
        }
        else{
            if(valNewCh < valOrgCh)
            ans = ans + newCh;
            else
            ans = ans + orgCh;
        }
    }

    cout<<ans<<endl;
}