#include<iostream>
using namespace std;

const char* pinyin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

/*

const char* pinyin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
const char str[] = { "ling" };

int main() {
	cout << pinyin[0][2];
	cout << str[0];
	return 0;
}

output:nl

*/

int main() {
	char c;
	int sum = 0;
	while ((c = getchar()) != '\n') {
		//读入字符串单个字符
		sum += c - '0';
	}
	int i = 0, d[5];
	for (; i < 5 && sum != 0; i++) {
		d[i] = sum % 10;
		sum /= 10;
	}
	i--;
	for (; i >= 0; i--) {
		if (i == 0) {
			cout << pinyin[d[i]] << endl;
		}
		else {
			cout << pinyin[d[i]] << " ";
		}
	}
	return 0;
}

	

