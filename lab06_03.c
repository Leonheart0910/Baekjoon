#include <stdio.h> 
double my_abs(double f) {
	if (f<0) f=-f;
	return f;
}

int main() {
	double x = 25;
	double epsilon = 0.01;
	double step = epsilon * epsilon;
	double ans = 0.0;
	int numGuesses = 0;
	double l,h;
	
	double diff = my_abs(ans*ans - x);
	
	l=0.0;
	h=x;
	
	if(x<1.0) h=1.0;
	else l=1.0;

	for(numGuesses=0;diff>epsilon;numGuesses++){
		ans=(l+h)/2.0;
		
		if(ans*ans<x)
			l=ans;
		else
			h=ans;
		diff = my_abs(ans*ans - x);
	}
	
	printf("# of Guesses = %d\n", numGuesses);
	
	if (diff >= epsilon)
		printf("Failed on square root of %f\n", x);
	else
		printf("%.20f is close to square root of %f", ans, x);
	
	return 0;
}
