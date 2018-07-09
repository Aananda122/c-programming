# c-programming#include<stdio.h>
int main()
{
  int num;
  printf("\n enter any number");
  scanf("%d",&num);
  int sum = 0;
  int digit;
  
  while(num > 0)
  {
    digit = num%10;// 3
    sum = sum + digit; // 0 + 5  + 2  + 3
    num = num/10;// 3/10 = 0
  }
  printf("sum = %d", sum);
  return (0);
}
