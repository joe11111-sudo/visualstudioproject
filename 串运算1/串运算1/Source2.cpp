#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

int main() {
	string scr, tar;
	int i, j;
	while (cin >> scr >> tar) {
		int cnt = 0;
		for (i = 0; i < scr.size(); i++) {
			int flag = 1;
			for (j = 0; j < tar.size(); j++) {
				if (tar[j] != scr[i + j]) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				cnt++;
				i += tar.size() - 1;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}