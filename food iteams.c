#include<stdio.h>
 main()
 {
 	printf("pick an iteam:\n1.pizza\n2.burger\n3.pasta\n4.french fries\n5.sandwich");
 	int choice=0;
 	scanf ("%d",&choice);
 	switch(choice)
 	{
	case 1: 
 	printf("food iteam picked by you pizza && its price is Rs 239 ");
 	break;
 	case 2:
 	printf("food iteam picked by you burger && its price is Rs129 ");
 	break;
 	case 3:
 	printf("food iteam picked by you pasta && its price is Rs179 ");
 	break;
 	case 4:
 	printf("food iteam picked by you French fries && its price is Rs99 ");
 	break;
 	case 5:
 	printf("food iteam picked by you sandwich && its price is Rs149 ");
 	break;
 	default : printf("Invalid choice");
 }
 	
 	return 0;

 }
