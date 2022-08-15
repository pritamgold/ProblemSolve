#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q; cin>> n >> q;
    int last_ans=0;
    vector<int> ans;
    vector<vector<int>> v1(n);
    for(int i=0; i<q; i++){
        int q, x, y; cin>> q >> x >> y;
        int idx = (x^last_ans)%n;
        if(q==1){
            v1[idx].push_back(y);
        }
        else{
            last_ans=v1[idx][y%v1[idx].size()];
            ans.push_back(last_ans);
        }
    }
    for(int x: ans)
        cout<< x << endl;
    return 0;
}
