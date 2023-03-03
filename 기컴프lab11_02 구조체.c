#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct st_point {
	double x;
	double y;
} tpoint;

enum TRI_POINTS {A, B, C};
typedef struct st_triangle {
	tpoint point_[C+1];
	double angle_[C+1];
	double area;
} ttriangle;

void print_triangle(ttriangle *ptri);

ttriangle * new_triangle(double ax, double ay, double bx, double by, double cx, double cy)
{
    ttriangle *p = (ttriangle *) malloc(sizeof(ttriangle));
      
    double AB,BC,CA;
	AB=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
	BC=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
	CA=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));

	(p->point_[0].x)=ax;
	(p->point_[0].y)=ay;
	(p->point_[1].x)=bx;
	(p->point_[1].y)=by;
	(p->point_[2].x)=cx;
	(p->point_[2].y)=cy;
	(p->angle_[0])=acos((-(BC*BC)+(AB*AB)+(CA*CA))/(2*AB*CA));
	(p->angle_[1])=acos((-(CA*CA)+(BC*BC)+(AB*AB))/(2*BC*AB));
	(p->angle_[2])=acos((-(AB*AB)+(CA*CA)+(BC*BC))/(2*CA*BC));

	(p->area)=AB*CA*sin(p->angle_[0])/2;

    return p;
}
int main(void) 
{
    ttriangle *ptriangle1 = new_triangle(2,2,8,2,8,8);
    print_triangle(ptriangle1);
    free(ptriangle1);
    return 1;
}
void print_triangle(ttriangle *ptri)
{
	char *pline1 = "+---+---+---+---+---+---+---+---+---+---+";
	char *pline2 = "|   |   |   |   |   |   |   |   |   |   |";
	char *pline3 = "0   1   2   3   4   5   6   7   8   9  10";
	char lines[4*10+2];
	int  ny;

	for (ny=10; ny >= 0; ny--) {
		if( (int)(ptri->point_[A].y) != ny && 
			(int)(ptri->point_[B].y) != ny && (int)(ptri->point_[C].y) != ny )
			printf("%2d  %s\n",ny,pline1);
		else {
			strcpy(lines, pline1);
			if ((int)(ptri->point_[A].y) == ny)
				lines[4*(int)(ptri->point_[A].x)] = 'A';
			if ((int)(ptri->point_[B].y) == ny)
				lines[4*(int)(ptri->point_[B].x)] = 'B';
			if ((int)(ptri->point_[C].y) == ny)
				lines[4*(int)(ptri->point_[C].x)] = 'C';
			printf("%2d  %s\n",ny,lines);
		}
		if (ny != 0)
			printf("    %s\n",pline2);
	}
	printf("    %s\n\n", pline3);
	printf("Angles (measured in radian) : A-%4.2lf*pi, B-%4.2lf*pi,C-%4.2lf*pi\n",
		ptri->angle_[A]/M_PI,ptri->angle_[B]/M_PI, ptri->angle_[C]/M_PI);
	printf("Area : %.2lf\n", ptri->area);
}
