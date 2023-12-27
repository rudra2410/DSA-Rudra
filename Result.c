#include <stdio.h>


int main()
{
	int Eng[5],Hin[5],Guj[5],total[5],per[5],grade[5];
	int i;

	for(i=0; i<5; i++)
	{
		printf("Enter %d Student Marks ?\n",i+1);

		printf("Enter English Marks = ");
		scanf("\n%d",&Eng[i]);
		
		printf("Enter Hindi Marks =");
		scanf("\n%d",&Hin[i]);


		printf("Enter Gujarati Marks =");
		scanf("\n%d",&Guj[i]);

		total[i]=Eng[i] + Hin[i] + Guj[i];
	
		per[i]=(total[i] * 100 )/ 300; 

		printf("\n --------------------------------------------------- \n");

	}

	printf("\n No.\tEng\tHin\tGuj\ttotal\tper\tgrade\n");

	for(i=0; i<5; i++)
	{
		printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",i+1,Eng[i],Hin[i],Guj[i],total[i],per[i],grade[i]);
	
	if(per[i]<=35)
	{
		printf("Student Fail");
	}

	else if(per[i]>=90)
	{
		printf("Grade A");	
	}

	else if(per[i]>=80 && per[i]<90)
	{
		printf("Grade B");
	}

	else if(per[i]>=70 && per[i]<80)
	{
		printf("Grade C");
	}

	else if(per[i]>=50 && per[i]<70)
	{
		printf("Grade D ");
	}
	
	else
	{
		printf("Grade E");
		}
	}

	return 0;
}