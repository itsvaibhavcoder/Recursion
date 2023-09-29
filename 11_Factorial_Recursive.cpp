#include<bits/stdc++.h>
using namespace std;
void fact(int i, int f){
    //Base case
    if(i<=1){
        cout<<f<<endl;
        return;
    } 
   fact(i-1, f*i);
    
}
int main()
{
 int n;
 cin>>n;
 fact(n, 1);
 return 0;
}