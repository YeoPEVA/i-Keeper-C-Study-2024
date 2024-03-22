#include <stdio.h>

int main()
{
	int num = 100;
    int num2 = 100; 

	printf("%d\n", num++);
	printf("%d\n", num);

    num2 += 10;
    printf("%d\n", num);

	return 0;
}