#include <stdio.h>

int main (void)
{
	int V, H, k, i, n;
	printf("Введите высоту пирамидки от 1 до 10: ");
	scanf("%d", &V);
	i = 1;
	H = V;
	while (i <= V)
	{
		k = 1;
		n = 1;
		H = H - 1;
		while (k <= H)
	{
			printf(" ");
			k = k + 1;
	}
		while (n <= (V + 1 - k))
		{
			printf("#");
			n = n + 1;
		}
		printf("\n");	
		i = i + 1;
	}
	return 0;
}	



