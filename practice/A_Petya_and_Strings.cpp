#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if( lexicographical_compare(s1, s1+s1.lenth(), s2, s2+s2.lenth())) 
    { 
        cout << "-1"<<endl; 
          
    } 
    else
    if(!(lexicographical_compare(s1, s1+s1.length(), s2, s2+s2.length()))
    { 
        cout << "1"<<endl; 
          
    } 
    else
    {
        cout<<"0"<<endl;
    }
}