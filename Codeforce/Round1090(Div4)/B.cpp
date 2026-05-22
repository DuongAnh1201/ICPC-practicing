#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i<t; i++)
    {
        int arr[7];
        int max = 0;
        for (int j = 0; j<7; j++)
        {
            int a;
            cin>>a;
            arr[j] = a;
            if (arr[j]>arr[max])
            {
                max = j;
            }
        }
        int total = 0;
        for (int j = 0; j<7; j++)
        {
            if (j!=max)
            {
                total -=arr[j];
            }
            else
            {
                total +=arr[j];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}