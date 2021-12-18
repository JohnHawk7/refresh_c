#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
	char up[] = {65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89};
	char down[] = {98, 100, 102, 104, 106, 108, 110, 112, 114,116, 118, 120, 122};
	for (int i = 0; i <= 12; i++) {
	       mx_printchar(up[i]);
	       mx_printchar(down[i]);
	}
	mx_printchar('\n');
}
//int main() {
//	mx_print_alphabet();
//	return 0;
//}

