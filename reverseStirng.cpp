#include<bits/stdc++.h>
using namespace std;
class String
{
public:
    string s;
    string reverse()
        {
            string k="";
            for(int i=s.size()-1,j=0;i>=0;i--,j++)
            {
                k+=s[i];
            }
            return k;
        }
};
int main()
{
    String t;
    cin>>t.s;
    cout<<t.reverse();

}

