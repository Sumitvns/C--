#include<iostream>
using namespace std;
 
int main()
{
    int a[50];
    int n,i,small,s_small;
     
    cout<<"\n Enter number of elements: ";
    cin>>n;
     
    cout<<"\n Enter "<<n<< " elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     
    small=s_small=a[0];
     
    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            s_small=small;
            small=a[i];
        }
        else if(s_small>a[i] && a[i]!=small)
        {
            s_small=a[i];
        }
    }
     
    cout<<"\n The Second Smallest Element in the given Array: "<<s_small;
    return 0;
}