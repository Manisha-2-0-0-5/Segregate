#include<iostream>
using namespace std;
class segregate
{
    int a[10],i,count;
    public:
    segregate(int n)
    {
        for(i=0;i<n;i++)
    {
        cout<<"enter array no (0 or1):";
        cin>>a[i];
       
    }
    }
    void display(int n)
    {
     for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
          count++;
        }
    }
     for(i=0;i<count;i++)
     {
        a[i]=0;
        cout<<a[i];
     }
    for(i=count;i<n;i++)
    {
       a[i]=1;
       cout<<a[i];
    }
    }
};
int main()
{

    int n;
    cout<<"enter the count of number you want to give as input:";
    cin>>n;
    segregate s(n);
    s.display(n);
    return 0;
}
