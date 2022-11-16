#include<stdio.h>
int main(void)
{
	int a1;
	int b1;
	int c1;
	scanf("%d%d%d" , &a1 , &b1 , &c1);
	if (a1+b1+c1==180 && a1 > 0 && b1 > 0 && c1 > 0) {
	  printf("Yes");
	}
    else {
      printf("No");
	}
	return 0;
}

