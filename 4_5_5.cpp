# include <iostream>
using namespace std;
int fac(int x)
{
int t;
 if (x==1)
   t=1;
 else
   t=x*fac(x-1);
return t;
}

int main()
{
   int n;
   int m;
   int Cmn;
   cout<<"ÊäÈëm,n "<<endl;
   cin>>m>>n;
   Cmn=fac(m) /(fac(n)*fac(m-n));
   cout<<"Cmn="<<Cmn<<endl;
   return 0;
}
