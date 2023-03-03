#include <stdio.h> 

typedef struct st_point {
	double x;
	double y;
} tpoint;


void point_swap(tpoint *pp1, tpoint *pp2) {
    double temp;
    temp=pp1->x;
    pp1->x=pp2->x;
    pp2->x=temp;
    temp=pp1->y;
    pp1->y=pp2->y;
    pp2->y=temp;
    
}

int main(void) 
{
	tpoint p1 = {1.0, 2.0}, p2 = {3.0, 4.0};

	printf("P1 = <%.2lf,%.2lf>, P2 = <%.2lf,%.2lf>\n",
		p1.x, p1.y, p2.x, p2.y);

	point_swap(&p1, &p2);

	printf("P1 = <%.2lf,%.2lf>, P2 = <%.2lf,%.2lf>\n",
		p1.x, p1.y, p2.x, p2.y);

	return 0;
}
