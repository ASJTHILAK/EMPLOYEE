#include <stdio.h>
struct employee
{
    char name[30];
    int age,phone,salary;
}; 
int main()
{
    struct employee emp[100];
    int i,n;
    printf("Enter The No. Of Employees\n");
    scanf("%d",&n);
    printf("\nEnter details :\n");
    for(i=0;i<n;i++)
    {
    	printf("Name :");          
		scanf("%s",&emp[i].name);
   		printf("Age :");            
		scanf("%d",&emp[i].age);
		printf("Phone Number:");        
		scanf("%d",&emp[i].phone);
    	printf("Salary ?:");        
		scanf("%d",&emp[i].salary);
	}
    printf("\nEntered detail is:\n");
    printf("Name\tAge\tPhone Number\tSalary\t");
    for(i=0;i<n;i++)
    {   
    	printf("\n%s",emp[i].name);
    	printf("\t%d",emp[i].age);
    	printf("\t%d",emp[i].phone);
    	printf("\t%d",emp[i].salary);
    }
    return 0;
}
