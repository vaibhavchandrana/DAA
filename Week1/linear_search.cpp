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
        cout<<"enter the key element";
        cin>>key;
        int flag=0,cmp=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                cmp++;
                flag=1;
                break;
            }
            else 
            {
                cmp++;;
            }
        }
        if(flag==0)
        {
            cout<<"not present "<<cmp<<endl;
        }
        else
        cout<<"present  "<<cmp<<endl;
        test_case--;

    }
    return 0;
}