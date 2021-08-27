#include<iostream>
using namespace std;
int main()
{
    int test_case,i;
    cout<<"enter the no. of test case";
    cin>>test_case;
    while(test_case>0)
    {
        cout<<"enter the no. of element in array";
        int n,key;
        cin>>n;

        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"enter the key element";
        cin>>key;
        int cmp=1;
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                flag=1;
                break;

            }
            cmp++;
        }
        if(flag==1)
        {
            cout<<"element is present"<<endl;
        }
        else
        {
            cout<<"element is not found"<<endl;
        }
        cout<<"the no. of compare :"<<cmp;
       test_case--;

    }


    return 0;

}

