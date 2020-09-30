// Find the bug (only 1 bug)
// And tell what does this program does
// Which Data Structure is implemented in this Code???

#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
#define limit 10000
 
template <typename T>
void print(T x){cout<<x<<"\n";}
template <typename T1, typename T2>
void print2(T1 x,T2 y){cout<<x<<" "<<y<<"\n";}
template <typename T1, typename T2,typename T3>
void print3(T1 x, T2 y,T3 z){cout<<x<<" "<<y<<" "<<z<<"\n";}
 
int arr[N+1];
struct store
{
    int low;
    int high;
    int index;
    int value;
};
store node[N+1];
 
void build(int start,int end,int x)
{
    if(start==end)
    {
        node[x].low=start;
        node[x].high=start;
        node[x].index=start;
        node[x].value=arr[start];
        //cout<<node[x].value<<"\n";
        return;
    }
    int mid=(start+end)/2;
    build(start,mid,2*x+1);
    build(mid+1,end,2*x+2);
 
    node[x].value=max(node[2*x+1].value,node[2*x+2].value);
    if(node[x].value==node[2*x+1].value)
    node[x].index=node[2*x+1].index;
    else
    node[x].index=node[2*x+2].index;
 
    node[x].low=node[2*x+1].low;
    node[x].high=node[2*x+2].high;
}
 
void update(int start,int end,int x,int i,int v)
{
    if(start==end)
    {
        arr[start]=v;
        node[x].low=start;
        node[x].high=start;
        node[x].index=start;
        node[x].value=v;
        //cout<<"im here\n";
        return ;
    }
    int mid=(start+end)/2;
    if(i<=mid)
    update(start,mid,2*x+1,i,v);
    else
    update(mid+1,end,2*x+2,i,v);
 
    node[x].value=max(node[2*x+1].value,node[2*x+2].value);
    if(node[x].value==node[2*x+1].value)
    node[x].index=node[2*x+1].index;
    else
    node[x].index=node[2*x+2].index;
 
    node[x].low=node[2*x+1].low;
    node[x].high=node[2*x+2].high;
}
 
int query(int k,int x)
{
    if(node[x].low==node[x].high) return node[x].index;
    if(node[2*x+1].value<k)
    return query(k,2*x+2);
    else
    return query(k,2*x+1);
}
 
int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
        ll n,q,t;
        cin>>n>>q;
        for(int i=0;i<n;i++) cin>>arr[i];
 
        build(0,n-1,0);
        /*for(int i=0;i<4*n;i++)
        {
            cout<<node[i].low<<" "<<node[i].high<<" "<<node[i].value<<" "<<node[i].index<<"\n";
        }*/
        for(int i=0;i<q;i++)
        {
            cin>>t;
            if(t==1)
            {
                int i,v;
                cin>>i>>v;
                update(0,n-1,0,i,v);
            }
            else
            {
                int k;
                cin>>k;
                if(k>node[0].value)
                print(-1);
                else
                print(query(k,0));
            }
        }
    }
}
