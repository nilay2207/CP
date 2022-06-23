#include<bits/stdc++.h>
using namespace std;


const int N= 1e5+10;

bool visited[N];
vector<int> graph[N];
void dfs(int vertex){

    /*
    Take action on vertex after entering the vertex
    */
   visited[vertex]=true;
   for(int child:graph[vertex]){
    cout<<"par"<<" "<<vertex<<" "<<"child"<<" "<<child<<endl;
    if(visited[child]){
        continue;
    }

    /*
    take action on child before entering the child node
    */
    dfs(child);
    /*
    take action on child before exiting the child node
    */
   }

   /*
   take action on vertex before exiting the vertex
   */

}


int main(){
    int n,m;
    cin>>n;
    vector<int> v[n];



    for(int i=0;i<n-1;i++){
        int v1,v2;
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }



    dfs(1);





}