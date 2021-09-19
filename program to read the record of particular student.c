#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    typedef struct student
    {
        int roll_no;
        char name[50];
        int marks;
    }STUDENT;
    STUDENT stud;
    int found = 0, rno;
    system("cls");
    fp = fopen("student_details3.txt","r");
    if(fp == NULL)
    {
        printf("\n File opening error.");
        return 0;
    }
    printf("\n Enter the roll number of student whose record has to be read: ");
    scanf("%d",&rno);

    while(1)
    {
        fscanf(fp,"%d %s %d",&stud.roll_no ,stud.name ,&stud.marks);

        if(stud.roll_no == -1)
        break;
        if(stud.roll_no == rno)
        {
            found = 1;
            printf("\n The details of student are");
            printf(" %d %s %d",stud.roll_no , stud.name ,stud.marks);
            break;
        }
    }

    if(found == 0)
    printf("\n Record not found in the file");
    fclose(fp);
}
