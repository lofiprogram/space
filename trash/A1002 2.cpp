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
#include <iomanip>
using namespace std;

double a[1001];
int main() {
	int m, count = 0;
	int x;
	double y;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		a[x] += y;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		a[x] += y;
	}
	for (int i = 0; i < 1001; i++) {
		if (a[i] != 0)count++;
	}
	cout << count;
	for (int i = 1001; i >= 0; i--) {
		if (a[i] != 0) {
			cout << " " << i << " " << setiosflags(ios::fixed) << setprecision(1) << a[i];
		}
	}
	return 0;
}

	
/*
https://blog.csdn.net/I_HOPE_SOAR/article/details/83064733?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.control&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.control
*/

