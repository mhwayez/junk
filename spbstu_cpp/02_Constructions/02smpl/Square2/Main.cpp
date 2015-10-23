#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
// ��������� ����� ax2+bx+c=0
int main(void)
{
   double a, b, c;
   setlocale(LC_ALL, "Russian");
   cout<<"������ ��������� ax^2+bx+c=0, ������� a, b, c: ";
   cin>>a>>b>>c;
   if (a==0.0)
   {
      cout<<"��������� ���������"<<endl;
      return 0;
   }
   double x1, x2, d;
   d=b*b-4*a*c; // ������������
   if (d<0.0)
      cout<<"������ ���!"<<endl;
   else if (d==0.0)
      cout<<"x="<<-b/(2*a)<<endl;
   else
   {
      d=sqrt(d); // ������ �� ������������
      x1=(-b+d)/(2*a); // ������� ������ ���������
      x2=(-b-d)/(2*a); // ������� ������ ���������
      cout<<"x1="<<x1<<" x2="<<x2<<endl;
   }
   return 0;
}
