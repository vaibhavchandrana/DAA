#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cout<<"enter the no. of testcase";
    cin>>test_case;
    while(test_case>0)
    {
        int n,i,key;
        cout<<"enter the no. of elements";
        cin>>n;
        int a[n];
        cout<<"enter the numbers";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool flag=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(a[i]+a[j]==a[k])
                    {
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                        flag=1;
                    }
                }
            }
            if(flag==0)
            {
                cout<<"Sequence not found"<<endl;
            }
        }
        test_case--;

    }
    return 0;
}