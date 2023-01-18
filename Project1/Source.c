//arnstrong number in a range
#include <stdio.h>
int main() {
	int  orig, sum = 0, rem, n1, n2, i;
	printf("enter the range");
	scanf_s("%d%d", &n1, &n2);
	for (i = n1; i <= n2; i++) {
		orig = i;
		while (orig != 0) {
			rem = orig % 10;
			sum = sum + (rem * rem * rem);
			orig = orig / 10;
		}
		if (i == sum) {
			printf("%d\n", i);
		}
		sum = 0;
	}
	return 0;
}

