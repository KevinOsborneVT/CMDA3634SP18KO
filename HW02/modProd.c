#include <stdio.h>

int main(){
int za, p, a, n, i, ab = 0;

printf("Enter a: ");
scanf("%d", &a);

printf("Enter p: ");
scanf("%d", &p);

printf("The code requires an input of a b-vector that contains the coefficients for the binary representation of b with base 2. b(0) represents the binary coefficient in front of 2^0, b(1) represents the coefficient in front of 2^1, ...., b(n) represents the coefficient in front of 2^n.  Enter the length of the b-vector please: ");
scanf("%d", &n);

int b[n];
za = a;

for (i = 0; i < n; ++i){
printf("\nThank you! Now Enter b(%d): ", i);
scanf("%d", &b[i]);
}

for (i = 0; i < n; ++i){

	if (b[i] == 1){
		
		ab  = (za + ab)%p;
	}
	
	za = (2*za)%p;
	
	}


	printf("\n%d is the remainder\n", ab);

return 0;
}
