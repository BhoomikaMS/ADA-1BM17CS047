#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"Enter the no. of nodes"<<endl;
    cin>>n;
    int adj[n][n];
    cout<<"Enter the matrix "<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>adj[i][j];
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                adj[i][j]=std::min(adj[i][j],adj[i][k]+adj[k][j]);
    cout<<endl<<endl;            
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<adj[i][j]<<"  ";
        cout<<endl;    
    } 
    return 0;                   
}