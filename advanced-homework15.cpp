#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
char slogan1[]="Taiwan,Touch,Your,Heart";
char slogan2[50];

int i,  j=0 ,length;
length=strlen(slogan1);

 for(i=0;i<length;i++)
  {
  if(isalpha(slogan1[i])!=0||isspace(slogan1[i])!=0)
 
     {slogan2[j]=slogan1[i];
     j++;
     }
  }
puts(slogan2);

system("PAUSE");
return 0;	
}
