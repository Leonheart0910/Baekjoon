
#include <stdio.h>

// print a Square Matrix M of order n

void print_nxn(int n, double M[n][n]) {

	int row, col;

	for (row=0; row<n; row++) {

		printf(" [ ");

		for (col=0; col<n; col++)

			printf("%6.2lf ", M[row][col]);

		printf("]\n");

	}

}

 

// Compute the determinant of a Square Matrix M of order n

 

double determinant(int n, double M[n][n]) {

 

	int i,j,k,a=0,b=0;

	double s=0.0;

	if(n==2){

		return (M[0][0]*M[1][1]-M[1][0]*M[0][1]);

	}

	else {

		double N[n-1][n-1];

 

		for(i=0;i<n;i++) {

			for(j=1;j<n;j++)

				for(k=0;k<n;k++) {	

					if(k!=i)

						N[b][a++] = M[j][k];

					if(a>=n-1) {

						b++;

						a=0;

					}

				}

			a=0;

			b=0;

			if(i%2==0)

				s += M[0][i]*determinant(n-1,N);

			else

				s -= M[0][i]*determinant(n-1,N);

		}

	}

	return s;

 

 

}

 

int main(void) {

 

	double M1[3][3] = { {1.7, 3.2, 2.5},

						{2.3, 4.1, 0.7},

						{1.0, 2.0, 3.0} };

	double M2[4][4] = { {2.0, 1.0, 2.0, 1.0},

						{1.7, 3.2, 2.5, 3.0},

						{2.3, 4.1, 0.7, 2.0},

						{1.0, 2.0, 3.0, 4.0} };

 	

 	

	printf("Matrix M1 = \n");

	print_nxn(3, M1);

	printf("det(M1) = %lf\n", determinant(3, M1));

	

	printf("Matrix M2 = \n");

	print_nxn(4, M2);

	printf("det(M2) = %lf\n", determinant(4, M2));

 

	return 0;

}

