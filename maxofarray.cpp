#include<iostream>
using namespace std;

int main()
{
	int i=0,N,max;
	cout<<"Enter the size of array: ";
	cin>>N;
	int arr[N];
	cout<<"Enter the array"<<endl;
	for(i=0;i<N-1;i++)
		cin>>arr[i];
	max=arr[0];
	for(i=1;i<N-1;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"Largest number: "<<max;	
}
