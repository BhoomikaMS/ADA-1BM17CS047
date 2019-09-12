#include<iostream>
#include<queue>

using namespace std;
int N,adj[50][50],visited[50];

void BFS(int k)
{
    visited[k]=1;
    queue<int> q;
    q.push(k);
    cout<<k+1;
    while(!q.empty())
    {
        int w=q.front();
        q.pop();
        for(int i=0;i<N;i++)
        {
            if(adj[w][i]==1 && visited[i]==0)
            {
                q.push(i);
                visited[i]=1;
                cout<<i+1;
            }
        }
    }
}

int main()
{
    //int N,k,adj[50][50],visited[50];
    int k;
    cout<<"Enter the no. of vertices: ";
    cin>>N;
    for(int i=0;i<N;i++)
        visited[i]=0;
    cout<<"Enter the source vertex: ";
    cin>>k;
    cout<<"Enter the adjacency matrix: "<<endl;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>adj[i][j];
    BFS(k-1);
    return 0;
}
