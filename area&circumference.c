// area and circcumference
#include<stdio.h>
int main() {
	int r;
	printf("Enter value of radius: ");
	scanf("%d",&r);
	float circumference= (2 * 3.14 * r);
	float area= (3.14 * r * r);
	printf("%f \n",circumference);
	printf("%f \n",area);
	return 0;
}
