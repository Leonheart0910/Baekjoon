#include <stdio.h>
#include <time.h>

long total(int y, int m, int d);
int main(void)
{
	//오늘 날짜와 시간 입력하기 
	time_t t = time(NULL);
	struct tm *t_m = localtime(&t);
	printf("오늘의 날짜!!! %d.%d.%d and it\'s ",t_m->tm_year+1900, t_m->tm_mon+1, t_m->tm_mday);
	switch (t_m->tm_wday){
	case 0 : puts("Sunday"); break;
	case 1 : puts("Monday"); break;
	case 2 : puts("Tuesday"); break;
	case 3 : puts("Wednesday"); break;
	case 4 : puts("Thursday"); break;
	case 5 : puts("Friday"); break;
	case 6 : puts("Saturday"); break;
	default: break;
	}
	
	int n;
	scanf("%d",&n);
	t= time(NULL) + (24*60*60*n);
	t_m = localtime(&t);
	printf("그 날짜는 !!! %d.%d.%d and it\'s ",t_m->tm_year+1900, t_m->tm_mon+1, t_m->tm_mday);
	t= time(NULL);
	t_m = localtime(&t);
	switch ((t_m->tm_wday+n)%7){
	case 0 : puts("Sunday"); break;
	case 1 : puts("Monday"); break;
	case 2 : puts("Tuesday"); break;
	case 3 : puts("Wednesday"); break;
	case 4 : puts("Thursday"); break;
	case 5 : puts("Friday"); break;
	case 6 : puts("Saturday"); break;
	default: break;
}
	
	// 입력하는 시간과 현재 사이의 일수 차이 계산하기
	
	int ny,nm,nd,fy,fm,fd,relative;
	printf("오늘의 날짜를 MM DD YYYY 형식으로 입력하여 주시오. : ");
	scanf("%d %d %d",&nm,&nd,&ny);
	printf("비교하려는 날짜를 MM DD YYYY 형식으로 입력하여 주시오. : ");
	scanf("%d %d %d",&fm,&fd,&fy);
	relative= total(ny,nm,nd)-total(fy,fm,fd);
	printf("%d년 %d월 %d일과 오늘과의 일수 차이는 %ld입니다.",fy,fm,fd,relative);
		
	return 0;
}
long total(int y, int m, int d)
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,dday;
	dday=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400;
	if(!(y%4) && y%100 || !(y%400))
		month[1]++;
	dday=(y-1)*365;
	for (i=0;i<m-1;i++)
		dday+=month[i];
	dday+=d;
	return dday;
}
