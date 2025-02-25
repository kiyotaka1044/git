#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"rus");
int x;
float y;
printf(" Введите целое число ");
scanf("%d,&x");
y=log (x);
printf("y=%f",y);
getchar();
}


