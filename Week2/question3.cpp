#include<iostream>
using namespace std;
difference(int a[],int n,int key)
{
    int count =0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==key)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int test_case;
    cout<<"enter the no. of test case";
    cin>>test_case;
    while(test_case>0)
    {
        int n;
        cout<<"enter no. of element";
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int key;
        cout<<"enter the key element ";
        cin>>key;
        cout<<difference(a,n,key)<<endl;
        test_case;
    }
    return 0;
}