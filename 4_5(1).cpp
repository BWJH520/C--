# include <iostream>
using namespace std;

float transition (float x)
{
       float y;
       y=5*(x-32)/9;
       return y;
}
void main()
{
   float c;
   float f;
   cout<<"���뻪���¶�f="<<endl;
   cin>>f;
   c=transition (f);
   cout<<"��Ӧ�������¶�c="<<c<<endl;
}

                       

