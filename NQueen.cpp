#include<iostream>
#include<cstdlib>

using namespace std;

int x[20],n;

bool place(int k,int i)
{
    for(int j=0;j<k;j++)
    {
        if((x[j]== i) || (abs(x[j]-i) == abs(j-k)))
            return false;
    }
return true;
}

void display(int x[])
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(j==x[i])
                cout<<1<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }

}

void NQueens(int k,int n)
{
    for(int i=0;i<n;i++) {
        if (place(k,i))
        {
            x[k]=i;

            if(k==n-1){
                display(x);
                cout<<endl;
            }
            else
                NQueens(k+1,n);

        }

    }
}

int main()
{

    cout<<"Enter the number of queens: ";
    cin>>n;
    cout<<"Output: "<<endl;
    NQueens(0,n);

    return 0;
}
