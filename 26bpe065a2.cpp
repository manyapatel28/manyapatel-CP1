#include<stdio.h>
#include<conio.h>
int main ()
{
  int a[5], i;
  printf("Enter 5 values:");
  for (i=0;i<5;i++)
  scanf("%d",&a[i]);
  printf("Values are");
  for (i=0;i<5;i++)
  printf("%d",a[i]);
  return 0;
  }
