//#include <stdio.h>

int mx_strlen(const char *s) {
	int count_dooku = 0;
	while (s[++count_dooku]);
	return count_dooku;
}
//int main() {
//	const char *s = "dooku";
//	printf("%d", mx_strlen(s));
//	return 0;
//}

