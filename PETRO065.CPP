#include<stdio.h>
#include<conio.h>

void main()
{
     int a,b,c,h,s;
     clrscr();
     printf("Enter 3 values:");
     scanf("%d %d %d" ,&a,&b,&c);
     if (a > b)
     {
	h = a; s = b;
     }

     else

     {
	h = b; s = a;
     };

     if (c > h)
	 h = c;
     else
     if (c > s)
	 s = c;

     if (h == s)
	 printf("All Values are same.\n");
     else
	 printf("Highest Values: %d Lowest value: %d\n",h,s);
     getch();
}
