#include <stdio.h>

int	main(void)
{
	int		N;
	double	sub[1001];
	int		i;
	double	max;
	double	res;

	scanf("%d", &N);

	max = 0;
	i = 0;
	while (i < N)
	{
		scanf("%lf", &sub[i]);
		if (max < sub[i])
			max = sub[i];	
		i++;
	}

	res = 0;
	i = 0;
	while (i < N)
	{
		res += sub[i] / max * 100;
		i++;
	}

	printf("%lf\n", res / N);

	return (0);
}