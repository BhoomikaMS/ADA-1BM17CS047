#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int l,h,mid,N,K,found=0,T,i,j;
    fstream  afile;
    afile.open("testcases.txt",ios::in);
    //cout<<"Enter the number of cases,array size and K, array: "<<endl;
    //cin>>data;


        afile>>T;
        for(i=0;i<T;i++)
        {
             found=0;
        afile>>N;
        afile>>K;
        int arr[N];
        for(j=0;j<N;j++)
            afile>>arr[j];
        l=0;h=N-1;
        while(l<=h)
        {

            mid=(l+h)/2;
            if(arr[mid]==K){
                cout<<1<<endl;
                found=1;
                break;
            }
            else if(K<arr[mid])
                    h=mid-1;
            else
                    l=mid+1;

        }
        if(found==0)
            cout<<-1<<endl;


        }



    return 0;
}
