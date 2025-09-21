#include <stdio.h>
int main() {
	int age = 0;
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age > 0) {
		if (age <= 12 && age > 0) {
			printf("You are a child.");
	    }
		else {
			if (age > 12 && age <= 19  ) {
				printf("You are a teenager.");
			}
			else {
				if (age <= 59 && age > 19) {
					printf("You are an adult.");
				}
				else {
					printf("RESPECTED SENIOR!");
				}
			}
		}
	}
	else {
		printf("INVALID INPUT!");	
	}
	return 0;
}
