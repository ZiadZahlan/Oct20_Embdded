#include <stdio.h>
#include <stdlib.h>
#define NO_OF_STUDENTS   5

struct student
{
    char name[30];
    int id ;
    float grade ;
    int age ;
};

int main()
{
    struct student class[NO_OF_STUDENTS];
    int i = 1,j=0,k=0;

    for (i=1;i<6;i++)
    {
        printf("enter info of st %d\n",i);

        scanf("%s",&class[j].name);
        scanf("%d",&class[j].id);
        scanf("%f",&class[j].grade);
        scanf("%d",&class[j].age);

        j++;
    }

    for (i=1;i<6;i++)
    {

        printf("info of student %d\n",i);

        printf("%s\n",class[k].name);
        printf("%d\n",class[k].id);
        printf("%f\n",class[k].grade);
        printf("%d\n",class[k].age);

        k++;
    }
    return 0;
}
