#include <stdio.h>
#include <stdlib.h>


struct STUDENT
{
    unsigned int Roll_no;
    char name[25];
    int marks[6];
};

void display(struct STUDENT s)
{
    printf("DETAILS OF STUDENT \n");
    printf("ROLL no: %d \n", s.Roll_no);
    printf("NAME: %d \n", s.name);
    for(int i = 0; i < 6; i++)
    {
        printf("MARKS: %d \n", s.marks[i]);
    }

}

int Total_marks(struct STUDENT s)
{
    int sum = 0;
    for(int i = 0; i < 6; i++)
    {
       sum += s.marks[i];
    }
    printf("Total_marks: %d \n", sum);
    return 0;

}
int main()
{
    struct STUDENT s={1, "Anuv", 82, 56, 99, 90, 88, 59};
    display(s);
    Total_marks(s);
    return 0;
}
/*void getStudent(struct STUDENT *sptr)
{
    //accessing members using point to an object, using the -> operator
    //pointer->member
    printf("Enter details of the student\n");
    printf("Roll No:");
    scanf("%d", &(sptr->rollno));
    printf("Name:");
    scanf("%s", sptr->name);
    printf("Marks: ");
    for (int i = 0; i < 6; i++)
    {
        printf("[%d]:  ", i+1);
        scanf("%d", &(sptr->marks[i]));
    }
}*/

