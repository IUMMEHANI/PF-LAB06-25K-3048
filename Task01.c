#include <stdio.h>
int main() {
	char color = 0;
	printf("Enter color's first Capital letter, R for red, Y for yellow and G for green: ");
	scanf("%c", &color);
	if (color == 'R' || color == 'Y') {
		if (color == 'R') {
			printf("STOP!");
		}
		else {
			printf("CAUTION!");
		}
	}
	else {
		if (color == 'G') {
			printf("GO!");
		}
		else {
			printf("Enter only color's first Capital letter (R,Y,G)!");
		}
	}
	return 0;
}
