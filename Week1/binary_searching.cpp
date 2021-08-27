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
        int left=0,right=n;
        int flag=0,cmp=1;
        while(left<=right)
        {
            cmp++;
            int mid=(left+right)/2;
            if(a[mid]==key)
            {
                flag=1;
                break;

            }
            else if(a[mid]>key)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        if(flag==0)
        {
            cout<<"not present "<<cmp<<endl;
        }
        else
        cout<<"present"<<cmp<<endl;
        test_case--;

    }
    return 0;
}