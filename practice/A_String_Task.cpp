#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
string s;
getline(cin, s);
while (s.length()==0 ) 
    getline(cin, s); 
// gets(s);
transform(s.begin(), s.end(), s.begin(), ::tolower); 
ll i=0;
while(s[i]!='\0')
{
if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u')
{
    i++;
}
else
{
    cout<<'.'<<s[i++];
}
}

}