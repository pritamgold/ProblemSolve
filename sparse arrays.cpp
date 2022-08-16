#include<bits/stdc++.h>
using namespace std;

int occurance(vector<string> str, string s)
{
    int Count=0;
    for(string s1: str){
        if(s1==s) Count++;
    }
    return Count;
}


int main()
{
    int n; cin>>n;
    vector<string> str;

    for(int i=0; i<n; i++){
        string s; cin>> s;
        str.push_back(s);
    }
    int q; cin>> q;
    vector<int> ans;
    while(q--){
        string s; cin>>s;
        int x = occurance(str, s);
        ans.push_back(x);
    }
    for(int x: ans)
        cout<< x << endl;

    return 0;
}
