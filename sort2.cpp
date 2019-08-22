#include<iostream>

using namespace std;

int main()
{
	int n,i,j,k,min_index,temp;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the array: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of k: ";
	cin>>k;
	for(i=0;i<k;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[min_index])
			{
				min_index=j;
			}
		}
		temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
		cout<<arr[i]<<" ";

	}

	return 0;
}
/*Output:
Enter the number of elements in the array: 8
Enter the array: 4 8 5 9 6 7 3 48
Enter the value of k: 5
48 9 8 7 6 */

