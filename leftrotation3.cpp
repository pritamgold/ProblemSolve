#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

void Rotate(int ar[], int n, int d)
{
    d = d%n;
    int g_c_d = gcd(n,d);
    for(int i=0; i<g_c_d; i++){
        int temp = ar[i];
        int j=i;
        while(1){
            int k = j+d;
            if(k>=n) k=k-n;
            if(k==i) break;
            ar[j]=ar[k];
            j=k;
        }
        ar[j]=temp;
    }
}

int main()
{
    int n ,d; cin>> n >> d;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>> ar[i];

    Rotate(ar, n, d);

    for(int i=0; i<n; i++) cout<< ar[i] << " ";
    cout<< endl;

    return 0;
}
