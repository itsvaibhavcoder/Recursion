#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(string &s, int i, int n){
     //Base case 
     if(i>=n/2) return true;
     if(s[i] != s[n-i-1]){
        return false;
     }
     isPallindrome(s, i+1, n);
}
int main()
{
 string s;
 cin>>s;
 if(isPallindrome(s,0, s.size())){
    cout<<"Is pallindrome"<<endl;
 }
 else{
    cout<<"Not pallindrome"<<endl;
 }
 return 0;
}