#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

float divide(float a, float b) {
	return a / b;
}

int main() {
	int num;
	int number1;
	int number2;
	
	printf("give one number: ");
	scanf("%d", &number1);
	printf("give another number: ");
	scanf("%d", &number2);

	printf("-----1, for add\n");
	printf("-----2, for subtract\n");
	printf("-----3, for multiply\n");
	printf("-----4 for divide\n");

	printf("Select your function => ");
	scanf("%d", &num);

	if(num == 1) {
		int ans = add(number1, number2);
		printf("Your answer is: %d", ans);
	}
	else if (num == 2) {
		int ans = subtract(number1, number2);
		printf("Your answer is: %d", ans);
	}
	else if (num == 3) {
		int ans = multiply(number1, number2);
		printf("Your answer is: %d", ans);
	}
	else if (num == 4) {
		float ans = divide(number1, number2);
		printf("Your answer is: %1f", ans);
	}
}	
