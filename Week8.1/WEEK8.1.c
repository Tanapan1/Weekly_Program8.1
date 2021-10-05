#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int Upper = 0, Lower = 0;
	char input[100];
	printf("Enter string : ");
	gets(input);
	for (int i = 0; i < strlen(input); i++) {
		if (isupper(input[i]) != 0) {
			Upper++;
		}
		else if (islower(input[i]) != 0) {
			Lower++;
		}
	}
	printf("Upper : %d\nLower : %d", Upper, Lower);
	return 0;
}