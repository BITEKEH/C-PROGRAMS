#include <stdio.h>
int main(){
	int age;
	float class;
	double numbers;
	char alphabet;
	printf("Enter input values:");
	scanf("%d %f %lf %c", &age, &class, &numbers, &alphabet);
	printf("age =%d", age);
		printf("\nclass = %f", class);
		printf("\nnumbers =%lf", numbers);
		printf("\nalphabet =%c", alphabet);
		return 0;
}