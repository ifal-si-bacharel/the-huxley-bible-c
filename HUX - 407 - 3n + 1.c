#include <stdio.h>

int function(int n[2]);

int main(void)
{
	int i = 0, j = 0, n[2], maior, init1, init2;

	while (scanf("%d %d", &i, &j) != EOF) {
		init1 = i;
		init2 = j;
		if (i > j) {
			int x = i;
			i = j;
			j = x;
		}

		for (int x = i; x <= j; x++) {
			n[0] = x;
			n[1] = 0;

			function(n);

			if (x == i) {
				maior = n[1];
			} else {
				if (n[1] > maior) maior = n[1];
			}
		}
		printf("%d %d %d\n", init1, init2, maior);
	}
	return 0;
}

int function(int n[2]) 
{
	n[1]++;	
	if (n[0] == 1) {
		return 1;
	} if (n[0]%2 == 0) { 
		n[0] = n[0]/2;
		return function(n);
	} else {
		n[0] = 3*n[0] + 1;
		return function(n);
	}
}