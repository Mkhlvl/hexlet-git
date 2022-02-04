#include <stdio.h>

int main (void)
{
	int V, H, k, i;
	printf("Введите высоту пирамидки от 1 до 10: ");
	scanf("%d", &V);
	i = 1;
	H = V;
	while (i <= V)
	{
		k = 1;
		H = H - 1;
		while (k <= H)
	{
			printf(" ");
			k = k + 1;
	}
		printf("#\n");
		i = i + 1;
	}
	return 0;
}	



