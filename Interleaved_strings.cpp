#include<iostream>
using namespace std;
class solution
{
public:
    bool isInterleave(string A,string B,string C)
    {
        while(*C!='\0')
        {
            if(*A==*C)
                A++;
            else  if(*B==*C)
                B++;
            else
                false;
            C++;
        }
        if(*A||*B)
            return false;
        return true;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a;
        cin>>b;
        cin>>b;

        solution obj;
        cout<<obj.isInterleave(a,b,c)<<endl;
    }
}
