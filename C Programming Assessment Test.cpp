//C Programming Assessment Test//

#include<stdio.h>
int main()
{
	int pizza,Burger,Dosa,Idli,Quantity,Amount=0,choose,TotalAmount=0;
	char ans,y,n;
	start :
	
		printf("\n1.Pizza");
		printf("\t\t price = 180rs/pcs");
		printf("\n2.Burger");
		printf("\t price = 100rs/pcs");
		printf("\n3.Dosa");
		printf("\t\t price = 120rs/pcs");
		printf("\n4.Idli");
		printf("\t\t price =50rs/pcs");
		printf("\nPlease Enter the choose := ");
		scanf("%d",&choose);
		
		
		switch(choose)
		{
			case 1 :
				pizza = 180;
				printf("\n you have selected pizza");
				printf("\nEnter the Quantity := ");
				scanf("%d",&Quantity);
				Amount = pizza*Quantity;
				printf("\nAmount = %d",&Amount);
				TotalAmount=TotalAmount+Amount;
				printf("\nTotal Amount = %d",TotalAmount);
			break;
			case 2 :
				Burger = 100;
				printf("\n you have selected Burger");
				printf("\nEnter the Quantity :=");
				scanf("%d",&Quantity);
				Amount = Burger*Quantity;
				printf("\nAmount = %d",&Amount);
				TotalAmount=TotalAmount+Amount;
				printf("\nTotal Amount = %d",TotalAmount);
			break;
			case 3 :
				Dosa = 120;
				printf("\n you have selected Dosa");
				printf("\nEnter the Quantity :=");
				scanf("%d",&Quantity);
				Amount = Dosa*Quantity;
				printf("\nAmount = %d",&Amount);
				TotalAmount=TotalAmount+Amount;
				printf("\nTotal Amount = %d",TotalAmount);
			break;
			case 4 :
				Idli = 50;
				printf("\n you have selected Idli");
				printf("\nEnter the Quantity :=");
				scanf("%d",&Quantity);
				Amount = Idli*Quantity;
				printf("\nAmount = %d",&Amount);
				TotalAmount=TotalAmount+Amount;
				printf("\nTotal Amount = %d",TotalAmount);
			break;
			default : printf("\n invalied input");
		}
		printf("\ndo you want place more orders ? y & n : ");
		scanf(" %c",&ans);
		
		if(ans=='y');
		{
			printf("----------MUNU----------");
			goto start;
		}
		
		{
			if(ans=='n')
			{
				goto end;
			}
		}
		end:
		return 0;
}
