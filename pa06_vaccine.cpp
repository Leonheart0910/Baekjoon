#include <iostream>
#include <stdlib.h>


typedef struct vaccine
{
    int id;
    int age;
    char sex;
}Temp;

typedef struct vaccine_old
{
    int id;
    int age;
    char sex;
}old;

typedef struct vaccine_child
{
    int id;
    int age;
    char sex;
}child;

typedef struct vaccine_adult
{
    int id;
    int age;
    char sex;
}adult;

int main()
{
    int person;
    int old_num=0, child_num=0, adult_num=0;
    Temp temp;
    old * Old;
    child * Child;
    adult * Adult;

    scanf("%d",&person);
    Old = (old*)malloc(sizeof(old)*person);
    Child = (child*)malloc(sizeof(child)*person);
    Adult = (adult*)malloc(sizeof(adult)*person);

    for(int i=0;i<person;i++) {

        scanf("%d %d %c", &temp.id, &temp.age, &temp.sex);
        if(temp.age<=15)
        {
            Child[child_num].age = temp.age;
            Child[child_num].id = temp.id;
            Child[child_num].sex = temp.sex;
            child_num++;
        }
        else if(temp.age>=61)
        {
            Old[old_num].age = temp.age;
            Old[old_num].id = temp.id;
            Old[old_num].sex = temp.sex;
            old_num++;
        }
        else
        {
            Adult[adult_num].age = temp.age;
            Adult[adult_num].id = temp.id;
            Adult[adult_num].sex = temp.sex;
            adult_num++;
        }
    }

    for(int i=0;i<old_num;i++)
    {
        if(Old[i].sex=='M') printf("%d\n",Old[i].id);
    }
    for(int i=0;i<old_num;i++)
    {
        if(Old[i].sex=='F') printf("%d\n",Old[i].id);
    }
    for(int j=0;j<child_num;j++)
    {
        printf("%d\n",Child[j].id);
    }
    for(int k=0;k<adult_num;k++)
    {
        if(Adult[k].sex=='F') printf("%d\n",Adult[k].id);
    }
    for(int k=0;k<adult_num;k++)
    {
        if(Adult[k].sex=='M') printf("%d\n",Adult[k].id);
    }


    return 0;

}