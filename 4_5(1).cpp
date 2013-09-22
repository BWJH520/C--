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
   cout<<"输入华氏温度f="<<endl;
   cin>>f;
   c=transition (f);
   cout<<"对应的摄氏温度c="<<c<<endl;
}

                       

