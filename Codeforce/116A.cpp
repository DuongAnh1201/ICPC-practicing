#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = 0;
    int inside = 0;
    for (int i = 0; i < n; i++)
    {
        int b, a;
        cin>>b>>a;
        inside = inside - b + a;
        m = max(m, inside);
    }
    cout<<m<<endl;
    return 0;
}