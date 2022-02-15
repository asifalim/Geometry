#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define dbg(a,b,c) cerr<<a<<"  "<<b<<"  "<<c<<endl;
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define INF 1e18
#define w(t) cin>>t;while(t--)
#define kill(a) {cout<<a<<endl;continue;}
#define pi  2 * acos(0.0)
int t,ans=0,tot=0,kk=0;
const int mxn=1e5+3,mod=1e9+7;
struct point
{
    int x,y;
};
int orientation(point a,point b,point c)
{
    int val=(b.y-a.y)*(c.x-b.x)-(c.y-b.y)*(b.x-a.x);
    if(!val)return 0;
    return val>0?1:2;
}
bool validcolinear(int a,int b,int c,int d)
{
    if(a>b)swap(a,b);
    if(c>d)swap(c,d);
    return (max(a,c)<=min(b,d));
}
bool intersect(point x1,point y1,point x2,point y2)
{
    int a=orientation(x1,y1,x2);
    int b=orientation(x1,y1,y2);
    int c=orientation(x2,y2,x1);
    int d=orientation(x2,y2,y1);
    if(a!=b and c!=d)return true;
    if(!a and !c and validcolinear(x1.x,y1.x,x2.x,y2.x) and validcolinear(x1.y,y1.y,x2.y,y2.y))return true;
    return false;

}
signed main()
{
    //fast;
    w(t)
    {
        ll n,m,a,b,c,d,e,i,j,k,sm=0,sm1=0,cn=0,cn1=0,mx=-1e9,mn=1e9;
        string s,ss,sr;
        bool f=false;
        point p1,p2,p3,p4;
        cin>>p1.x>>p1.y>>p2.x>>p2.y;
        cin>>p3.x>>p3.y>>p4.x>>p4.y;
        cout<<(intersect(p1,p2,p3,p4)?"YES":"NO")<<endl;
    }
}
