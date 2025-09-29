#include <stdio.h>

int main(int argc, const char *argv[])
{
	signed int s = 0;
	printf("Number of seconds:");
	scanf("%d", &s);
	if (s < 0 || s >= 86400)
	{
		if (s < 0)
			printf("Error.\n");
		else
			printf("Overflow\n");
	}
	else
	{
		printf("%02d : %02d : %02d \n", (s / 3600), (s % 3600) / 60, s % 60);
	}
	return 0;
}