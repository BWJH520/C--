# include <iostream>
using namespace std;
float fun(float x, float y)
{
float z;
 if (y==1)
   z=x;
 else
   z=x*fun(x,y-1);
  return z;
}
void main()
{
   float x;
   float y;
   float z;

   cout<<"ÊäÈëx,y "<<endl;
   cin>>x>>y;
   z=fun(x,y);
   cout<<z<<endl;
}
