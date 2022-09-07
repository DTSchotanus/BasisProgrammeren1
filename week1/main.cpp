#include <stdio.h>


int main(void) {

	int a;
	int b;
	int c;

	a = 10;

	printf("Voer een geheel getal in..");
	scanf_s("%d", &b);

	c = (a * b)*b/a+3;


	if (b > 9) {
	
		printf("het ingevoerde getal was groter dan 9\n");
	
	}
	else {
	
		printf("het ingevoerde getal was kleiner dan (of gelijk aan) 9\n");
	
	}

	printf("Programmeren is %d leuk! %d \n", a, b);
	printf("A keer B is: %d", c);

	return 0;
}


