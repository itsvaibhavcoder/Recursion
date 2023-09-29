#include<bits/stdc++.h>
using namespace std;
void sum(int i, int s){
    //Base case
    if(i<1) {
        cout<<s<<endl;
        return;
    }
    sum(i-1, s+i);
}
int main()
{
 int n;
 cin>>n;
 sum(n,0);
 return 0;
}