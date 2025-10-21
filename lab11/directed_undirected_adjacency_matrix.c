#include<stdio.h>
int main(){
    printf("enter no of vertices");
    int n;
    scanf("%d",&n);
    int adj[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j]=0;
        }
    }
    printf("enter no of edges");
    int e;
    scanf("%d",&e);
    int dir;
    printf("enter 1 for directed graph, 0 for undirected graph");
    scanf("%d",&dir);
    for(int i=0;i<e;i++){
        printf("enter vertices -> ");
        int u,v;
        scanf("%d%d",&u,&v);
        adj[u][v]=1;
        if(!dir){
            adj[v][u]=1;
        }
    }
    printf("Adjacency Matrix for the graph : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",adj[i][j]);
        }
        printf("\n");
    }


}