#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int Next[1111];
void GetNext(char* s) {
	Next[0] = -1;
	int len = strlen(s);
	int  i = 0;
	int j = -1;
	while (i < len) {
		if (j == -1 | s[i] == s[j])
			Next[++i] = ++j;
		else
			j = Next[j];
	}
}

int kmp(char* s1, char* s2) {
	int ans = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i = 0,j = 0;
	while (i <= len1 && j <= len2) {
		if (j == len2) {
			ans++;
			j = 0;
			continue;
		}
		if (j == -1 || s1[i] == s2[j]) {
			i++;
			j++;
		}
		else
			j = Next[j];
	}
	return ans;
}


int main() {

	char str1[1111];
	char str2[1111];
	while (scanf("%s", str2)) {
		GetNext(str2);
		printf("%d\n", kmp(str1, str2));
	}
	return 0;


}