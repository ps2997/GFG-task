#include <iostream>
using namespace std;

int main()
{
   char str[10] = "A string";
   char *ptr = str;

   cout<<str[0]<<" "<<*ptr<<" "<<str[3]<<endl;
   ptr=ptr+2;
   cout<<*ptr<<endl;
   ptr=ptr+2;
   cout<<*ptr<<endl;
   ptr=ptr+3;
   cout<<*ptr<<endl;

return 0;
}