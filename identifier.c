#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
char a[100];
int i,l,s=0;
printf("\nenter the string:");
gets(a);
l=strlen(a);
if(a[s]==' '||a[s]=='1'||a[s]=='2'||a[s]=='3'|| a[s]=='4'||a[s]=='5' ||a[s]=='6'
||a[s]=='7' ||a[s]=='8'||a[s]=='9'||a[s]=='0')
{
printf("\n invalid identifier");
s++;
}
else
{
printf("\nvalid identifier");
}
}
