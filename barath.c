#include <stdio.h>
int main() 
{
    int choice,i,n,roll[100],marks[100],search_rollno,found=0;;
    char name[100][50];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i=0;i<n;i++) 
	{
        printf("\nEnter details of student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    while (1) 
	{
        printf("\n1. View All Students\n2. Search Student\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("\nStudent Details:\n");
                for (i=0;i<n;i++) 
				{
                    printf("\nRoll Number: %d\nName: %s\nMarks: %d\n", roll[i], name[i], marks[i]);
                }
                break;

            case 2:
                printf("\nEnter the roll number to search: ");
                scanf("%d", &search_rollno);

                for (i=0;i<n;i++) 
				{
                    if (roll[i]==search_rollno) 
					{
                        printf("\nStudent Details:\nRoll Number: %d\nName: %s\nMarks: %d\n", roll[i], name[i], marks[i]);
                        found=1;
                        break;
                    }
                    else
                    {
                    	 printf("\nStudent not found.\n");
					}
                }
            case 3:
                return 0;

            default:
                printf("\nInvalid choice. Try again.\n");
        }
    }

    return 0;
}
