#include<iostream>
#include<algorithm>

using namespace std;

int n;

int Knapsack(int w[],int v[],int C)
{
    int i,j,V[50][50];
    for(int i=0;i<=n;i++)
        V[i][0]=0;

    for(int j=0;i<=C;i++)
        V[0][j]=0;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=C;j++)
        {
            if((j-w[i])>=0)
                V[i][j]=(V[i-1][j]>(v[i]+V[i-1][j-w[i]]))?V[i-1][j]:(v[i]+V[i-1][j-w[i]]);
            else
                V[i][j]=V[i-1][j];
        }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=C;j++)
            cout<<V[i][j]<<" ";
        cout<<endl;
    }
    return V[n][C];
}

int main()
{
    int C;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<"Enter the capacity: ";
    cin>>C;
    int *w=new int[n+1];
    int *v=new int[n+1];
    w[0]=0;
    v[0]=0;
    cout<<"Enter the weight of the items:"<<endl;
    for(int i=1;i<=n;i++)
        cin>>w[i];

    cout<<"Enter the value of the items:"<<endl;
    for(int i=1;i<=n;i++)
        cin>>v[i];

    int value=Knapsack(w,v,C);
    cout<<"Highest value possible: "<<value;

    return 0;
}
