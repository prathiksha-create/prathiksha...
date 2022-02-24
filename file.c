#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp;
char data[10]=("hello");
fp=fopen("prg1.c","w");
if(fp==NULL)
{
printf("\nfile is not open");
}
else
printf("\nfile is open");
return 0;
}
