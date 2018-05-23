#include <iostream>
#include<string>
using namespace std;

int main()
{
   string a;
   int i,temp,c=0;
   cin>>a;
   for(i=0;a[i]!='\0';i++)
   {
       c++;
   }
      for(i=0;i<c;i=i+2)
      
      {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
      }
      
cout<<a;
    return 0;
}
