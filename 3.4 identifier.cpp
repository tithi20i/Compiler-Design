#include <iostream>
using namespace std;

int main()

{

string str;
int t=0,ok;

cout<<"Enter a string: ";
cin>>str;

if( (str[0]>='A'&&str[0]<='Z')
    ||
    (str[0]>='a'&&str[0]<='z')
    ||
    (str[0]=='_') )
 {
   for(int i=1;i<str.length();i++)
   {

     if((str[i]>='A'&& str[i]<='Z')
     ||
       (str[i]>='a' && str[i]<='z')
     ||
      (str[i]=='_')
     ||
     (str[i]>='0'&& str[i]<='9'))

     {
 t++;

     }  }

    if(t==str.length())

    {

      ok=0;

    }
 }

 else

 {

  ok=1;

 }


if(ok==1)

 cout<<str<<"is not valid identifier";

else

 cout<<str<<" is valid identifier";

return 0;
}
