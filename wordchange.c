#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int p,q,i;
  char arr[100];
  printf("Enter the character:");
  scanf("%s",arr);
  n=strlen(arr);
  if(n%2!=0)
  {
    q=p-1;
    arr[q]='O';
    arr[q-1]='O';
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]=='a')
    arr[i]='u';
    if(arr[i]=='i')
    arr[i]='e';
  }
   printf("After changing %s",arr);
   getch();
}
