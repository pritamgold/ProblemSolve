#include<bits/stdc++.h>
using namespace std;

vector<int> Rotate(vector<int> v1, int n, int d)
{
    vector<int> temp;
    for(int i=d; i<n; i++){
        temp.push_back(v1[i]);
    }
    for(int i=0; i<d; i++){
        temp.push_back(v1[i]);
    }
    return temp;
}

int main()
{
    int n, d; cin>> n >> d;
    vector<int> v1;
    for(int i=0; i<n; i++){
        int x; cin>> x;
        v1.push_back(x);
    }
    v1 = Rotate(v1, n, d);
    for(int x: v1)
        cout<< x << " ";
    cout<< endl;

    return 0;
}
