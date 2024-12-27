#include<stdio.h>
int main()
{
    struct student
    {
        int sno;
        char sname[30];
        char scource[30];
        double sfee;
    };
    struct student s1;
    printf("enter the sno");
    scanf("%d",&s1.sno);
    printf("\nenter the sname");
    scanf("%s",s1.sname);
    printf("\nenter the scourse");
    scanf("%s",s1.scource);
    printf("\n enter the sfee");
    scanf("%1f",&s1.sfee);
    printf("\n%d %s %s %1f",s1.sno,s1.sname,s1.scource,s1.sfee);
    return 0;
}
