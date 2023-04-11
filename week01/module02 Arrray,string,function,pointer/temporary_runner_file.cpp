#include<bits/stdc++.h>
using namespace std;
string erase_first_last(string s){
    s.erase(s.begin());
    s.pop_back();
    return s;
}
void erase_first_last2(stirng s)
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"pritn in function"<<s<<"\n";

}
int main()
{
    string s;
    cin>>s;
    // string ans = erase_first_last(s);
    // cout<<s<<"\n";
    // cout<<ans<<"\n";
    string ans = erase_first_last2(s);
    cout<<s<<"\n";
    cout<<ans<<"\n";

}