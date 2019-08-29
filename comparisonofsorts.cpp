#include<iostream>

using namespace std;

int countm=0;

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
        countm++;
    }

    while(i<n1)
    {
        a[k++]=L[i++];
        countm++;
    }

    while(j<n2)
    {
        a[k++]=R[j++];
        countm++;
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
	int n,i,j,k,min_index,temp,countb=0,counts=0;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the array: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<n-1;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
		{
            counts++;
			if(arr[j]<arr[min_index])
			{
				min_index=j;

			}
		}
		temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            countb++;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    Mergesort(arr,0,n-1);
    cout<<"Bubble sort: "<<countb<<endl;
    cout<<"Selection sort: "<<counts<<endl;
    cout<<"Merge sort: "<<countm;


}
