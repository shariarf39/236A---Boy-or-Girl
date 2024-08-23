
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    sort(input.begin(),input.end());
    int l=input.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(input[i]!=input[i-1])
            ans++;
    }

    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
