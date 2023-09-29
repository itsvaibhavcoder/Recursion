#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(string &s, int l, int r){
     //Base case 
     if(l>=r) return true;
     if(s[l] != s[r]){
        return false;
     }
     isPallindrome(s, l+1, r-1);
}
int main()
{
 string s;
 cin>>s;
 if(isPallindrome(s,0, s.size()-1)){
    cout<<"Is pallindrome"<<endl;
 }
 else{
    cout<<"Not pallindrome"<<endl;
 }
 return 0;
}