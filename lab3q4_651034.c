#include <stdio.h>
int main() {
	float a,avg,sum,d;

	while(1) {
	scanf("%f",&a);
	if(a<=0) {
	avg = (sum/d);
	break;
	}
	sum += a;
	d++;
	}

	printf("sum = %f,avg =%f\n",sum,avg);

}

