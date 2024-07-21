#include<stdio.h>

int main()
{
    float s1,s2,s3,s4,s5;
    float per;
    /* s-> subject
    60 - 100 Grade A
    50 - 59  Grade B
    40 - 49  Grade C
    Below 39 Fail */ 
    char fname[30],lname[30];
    int n;
    
    printf("Enter the First name and last name of student  \n");
    scanf("%s%s",fname,lname);
    printf("Enter the roll no of student\n");
    scanf("%d",&n);
    printf("Enter marks of 5 subjects for tracking students grades\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    
    per=(s1+s2+s3+s4+s5)/500.0*100.0;// percentage formulae=subjects marks/total marks*100
    printf("--------------Certificate of student------------------\n");
    printf("Name of student :%s%s\n",fname,lname);
    printf("Roll number of student %d\n",n);
    printf("English: %0.2f\n",s1);
    printf("Hindi: %0.2f\n",s2);
    printf("Marathi: %0.2f\n",s3);
    printf("Science: %0.2f\n",s4);
    printf("Social Science: %0.2f\n",s5);
    printf("Percentage %0.2f\n",per);
   
    
    if(per>=60)
    {
        printf("Grade A\n");
        
    }
    else // nested if
    {
        if(per>=50)
        {
            printf("Grade B\n");
            
        }
        else 
        {
            if(per>=40)
            {
                printf("Grade C\n");
            }
            else 
            {
                printf("You are failed !\n");
                printf("Try your best in next semester\n");
            }
        }
    }
     printf("college name : MIT Arts commerce and Science college\n");
    
    return 0;
}