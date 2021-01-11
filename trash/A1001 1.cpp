#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<vector>
#include <algorithm>
#include<set>
#include<string>
#include<unordered_map>
#include<queue>
using namespace std;


int main() {
	int a, b, sum;
	int s[10] = {};
	scanf("%d %d", &a, &b);
		sum = a + b;
		if (sum < 0) {
			printf("-");
			sum = -sum;
		}
		int i = 0;
		for (; sum != 0; i++) {
			s[i] = sum % 10;
			sum /= 10;
		}
		int l = i;
		i--;
		if (l == 0) { printf("0"); }
		if (l > 0 && l < 4) {
			for (int j = i; j >= 0; j--) {
				printf("%d", s[j]);
			}
		}
		if (l >= 4 && l < 7) {
			for (int j = i; j >= 0; j--) {
				printf("%d", s[j]);
				if ((j - 3) == 0)printf(",");
			}
		}
		if (l >= 7) {
			for (int j = i; j >= 0; j--) {
				printf("%d", s[j]);
				if ((j - 6) == 0)printf(",");
				if ((j - 3) == 0)printf(",");
			}
		}
	return 0;
}

//相减为零的情况时，l=0，i=-1，直接结束而没有输出
//需单独处理


