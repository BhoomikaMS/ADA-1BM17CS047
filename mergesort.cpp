#include<iostream>

using namespace std;


void combine(int *a,int p,int q,int r)
{
    int n1,n2,i,j,k;

    n1=q-p+1;
    n2=r-q;
    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i]=a[p+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j]=a[q+j+1];
    }
    i=0,j=0;

    for(k=p;i<n1&&j<n2;k++)
    {
        if(L[i]<R[j])
        {
            a[k]=L[i++];
        }
        else
        {
            a[k]=R[j++];
        }
    }

    while(i<n1)
    {
        a[k++]=L[i++];
    }

    while(j<n2)
    {
        a[k++]=R[j++];
    }
}

void Mergesort(int *a,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        Mergesort(a,low,mid);
        Mergesort(a,mid+1,high);
        combine(a,low,mid,high);
    }
}

int main()
{
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Mergesort(a,0,n-1);
    cout<<"After Merge Sort the array is:\n";
    for(int i=0;i<n;i++)
      {
    	 cout<<a[i]<<" ";
      }
    return 0;

}
