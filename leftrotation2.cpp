#include<bits/stdc++.h>
using namespace std;

void Rotate(int ar[], int n, int d)
{
    while(d--){
        int temp=ar[0];
        for(int i=0; i<n-1; i++) ar[i]=ar[i+1];
        ar[n-1]=temp;
    }
}

int main()
{
    int n, d; cin>> n >> d;
    int ar[n];
    for(int i=0; i<n; i++) cin>> ar[i];
    Rotate(ar, n, d);

    for(int i=0; i<n; i++){
        cout<< ar[i] <<" ";
    }
    cout<< endl;
    return 0;
}
