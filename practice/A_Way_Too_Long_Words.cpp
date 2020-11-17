// https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
string s;
ll n;
cin>>n;
while(n--)
{
getline(cin, s);
while (s.length()==0 ) 
    getline(cin, s); 
// gets(s);



if (s.length()<=10)
{
       cout<<s;
}
else
{
    cout<<s[0]<<s.length()-2<<s[s.length()-1];
}
cout<<endl;
}
}