#include<cstdio>
#include<iostream>
using namespace std;
#define ll long long 
void exgcd(ll a,ll b,ll &x,ll &y)
{
	if(b==0)
	{
		x=1,y=0;
		return;
	}
	else
	{
		exgcd(b,a%b,y,x);
		y-=a/b*x;
	}
}
void exgcd(ll a,ll b,ll &x,ll &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return ;
	}
	exgcd(b,a%b,x,y)
	ll tmp=x;
	x=y;
	y=tmp-a/b*y;
}

//----------------
//快速幂算法求逆元
/*
若p为素数，a为正整数，且a,p互质。
则有

a^(p-1)≡1(modp)

以上为费马小定理的内容 
*/
ll ksm(ll x,ll mod,ll p)
{
	x%=mod;
	ll ans=1;
	
	while(p){
		if(p&1)ans=(ans*x)%mod;
		x=(x*x)%mod;
		p>>=1;
	}
	return ans;
}

//O(n)复杂度求逆元
const int maxn=3*1e6+10;
ll a[maxn];
void algo()
{
	for(int i=1;i<=n;i++)
	{
		a[i]=-(p/i)*a[p%i];
		a[i]=(a[i]%p+p)%p;
	}
}
//阶乘方法递推求逆元
ll inv[maxn];
void ditui()
{
	inv[n]=ksm(n,p-2,p);
	for(int i=n-1;i>=1;i++)
	{
		inv[i]=inv[i+1]*(i+1);
	}
 } 
int main()
{
	ll n,p;
	cin>>n>>p;
	for(int i=1;i<=n;i++)
	{
		ll x,y;
		exgcd(i,p,x,y);
		cout<<(x+p)%p<<endl;
	}
	return 0;
 } 
