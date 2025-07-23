#include<stdio.h>
main()
{
	int Totalamount=0,Quantity;     //variables;
	char choice,more;
	
	//*********************Food menu**********************//
	printf("\n===========WELCOME IN MILKMAN================\n");
	printf("\n================OUR MENUCARD=================\n");
	printf("\n 1.Pizza               Price-180rs/pcs");
	printf("\n 2.Burger              Price-100rs/pcs");
	printf("\n 3.Dosa                Price-120rs/pcs");
	printf("\n 4.Idli                Price-50rs/pcs");
	printf("\n 5.Wadapav             Price-40rs/pcs");
	printf("\n 6.Biryani             Price-90rs/pcs");
	printf("\n 7.Pulav               Price-70rs/pcs\n");
	
	do
	{
	//Choose youe item;
    printf("=================================================\n");
	printf("\n Enter the item number you want :");
	scanf("%d",&choice);
	
	
	
	
	switch(choice)  //choose Quantity for your item;
	{
		case 1:
			   printf("\n Enter quantity for pizza :");
			   scanf("%d",&Quantity);
			   Totalamount += 180*Quantity;
			   break;
			   
		case 2:
		       printf("\n Enter quantity for burger :");
			   scanf("%d",&Quantity);
			   Totalamount += 100*Quantity;
			   break;
			   
		case 3:
		       printf("\n Enter quantity for dosa :");
			   scanf("%d",&Quantity);
			   Totalamount += 120*Quantity;
			   break;
			   
		case 4:
		       printf("\n Enter Quantity for idli :");
			   scanf("%d",&Quantity);
			   Totalamount += 50*Quantity;
			   break;
			   
		case 5:
		       printf("\n Enter quentity for wadapav :");
			   scanf("%d",&Quantity);
			   Totalamount += 40*Quantity;
			   break;
			   
		case 6:
		       printf("\n Enter quantity for biryani :");
			   scanf("%d",&Quantity);
			   Totalamount += 90*Quantity;
			   break;
			   
		case 7:
		       printf("\n Enter quantity for pulav :");
			   scanf("%d",&Quantity);
			   Totalamount += 70*Quantity;
			   break;
			   
		default :
		         printf("\n Invalid choice");
				 continue;
    }
    
    printf("\n Do you want to place more order?(y/n):");
    scanf(" %c",&more);
    
	 
    

    }while(more == 'y' || more == 'Y');
	
	
	 //Final bill display;
	 printf("\n\n***********************Final bill**********************\n\n");
	 printf("\nYour Total bill = %d",Totalamount);
	 
	 
	 
	 printf("\n\n********THANK YOU AND VISIT AGAIN*******\n\n");
}
	

