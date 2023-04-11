#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a;
    cin>>a;
    cout<<a<<" ";
flag:

    if(a%2==0){
        a=a/2;
    }
    else
        a=(a*3)+1;
    cout<<a<<" ";
    if(a!=1){
        goto flag;
    }

return 0;
}
