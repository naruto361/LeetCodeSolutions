#include<bits/stdc++.h>
using namespace std;
void dfs(int i,int j,vector<vector<char>> &v)
{
    if(i<0 || j<0 || i>=v.size() || j>=v[0].size() || v[i][j]!='.') return;
    v[i][j]='*';
    dfs(i,j+1,v);
    dfs(i+1,j,v);
    dfs(i-1,j,v);
    dfs(i,j-1,v);
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>v[i][j];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='.')
            {
                ans++;
                dfs(i,j,v);
            }
        }
    }
    cout<<ans;
}