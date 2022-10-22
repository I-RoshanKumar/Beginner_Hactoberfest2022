


//Dynamic memory allocation for strings
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char  name[20];
  	char *p;//char pointer 
  	int  l,i;
 		  	
       cout<<"\n enter string :";
       cin>> name;
       l=strlen(name);
       p = new char[l+1]; //dynamic memory allocation (Base address of memory)
  	
  	for(i=0;name[i]!='\0';i++)
  	{
  	   p[i]=name[i];
  	   //*(p+i)= name[i];
  	   
  	 }//end of for
  	 
  	 p[i]='\0';//end of string 
  	 
  	 cout<<"\n Copied Sring :"<<p;
  	return 0;
}
/*  Rough work 

name[0]= i , name[1]= t ,name[2]=\0    ,  l=2

p = new char[l+1];     ( 3 bytes )(p will store base  address )(100,101,102)
p=100  (p will store base  address :100)

_____________________________________

name[]="it"    l=2  
p = new char[l];     (only 2 bytes )
p[0]= i  p[1]=  t    ????where \0(end ofstring)
__________________________________
 
  name[]="it"    l=2 
p = new char[l+1];     (only 3 bytes )

p[0]= i  p[1]=  t    p[2]=  \0;

*/ 
  
  
  
  



