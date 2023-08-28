#include<bits/stdc++.h>
using namespace std;
void fun(int x){
    if(x<0) return;
    else{
        cout<<x<<" ";
        fun(x-1);
    }
}
int main()
{
 int x;
 cin>>x;
 fun(x);
 return 0;
}