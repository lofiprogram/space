#include<stdio.h>
int main() {
	int n,i=0;
	scanf("%d", &n);
	while (n!=1) {
		if (n % 2 == 0) {
			i++;
			n /= 2;
		}
		else {
			i++;
			n = ((3 * n) + 1) / 2;
		}
	}
	printf("%d", i);
	return 0;
}
