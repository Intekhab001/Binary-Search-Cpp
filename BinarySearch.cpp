#include <iostream>

using namespace std;

int main()
{
    int a[50],size,i;
    cout<<"Enter the the size of array: ";
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    int l=0,r,mid,data,found=0;
    r=size-1;
    cout<<"Enter the element to search: ";
    cin>>data;
   
   while(l<=r)
   {
       mid=(l+r)/2;
       
       if(data== a[mid])
       {
       cout<<"Found at position: "<<mid+1;
       found=1;
       break;
       }
       
       else if(data<a[mid])
       r=mid-1;
       
       else
       l= mid+1;
   }
   
   if(found==0)
   {
       cout<<"Element not found in the array";
   }
return 0;
}