#include <stdio.h>

int main (void)
{
	float Sda;
	int S, m25, m10, m5, m1;
	printf("Сколько нужно дать сдачи?: ");
	scanf("%f", &Sda);
	S = Sda * 100;
	m25 = S / 25;
	m10 = (S - m25 * 25) / 10;
	m5 = (S - m25 * 25 - m10 * 10) / 5;
	m1 = (S - m25 * 25 - m10 * 10 - m5 * 5);
	
        if (m25 > 0)
		       { 
	printf("%d ", m25);
	printf("монет по 25 центов\n");
		       }
	if (m10 > 0)
	{
		printf("%d ", m10);
		printf("монет по 10 центов\n");
	}
	if (m5 > 0)
		{
		printf("%d ", m5);
		printf("монет по 5 центов\n");
		}
	if (m1 > 0)
	{
		printf("%d ", m1);
		printf("монет по 1 центу\n");
	}

	return 0;
}

