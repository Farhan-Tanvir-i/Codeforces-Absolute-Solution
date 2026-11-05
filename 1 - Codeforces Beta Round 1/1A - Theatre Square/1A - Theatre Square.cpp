#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n , m, a;
    cin>>n>>m>>a;
    long long numbers = ((ceil((double)n/a))*(ceil((double)m/a)));
    cout<<numbers<<endl;
    return 0;
}
