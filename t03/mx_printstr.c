#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
	write(1, s, mx_strlen(s));
}
//int main() {
//	const char *s = "do it\n";
//	mx_printstr(s);
//	return 0;
//}

