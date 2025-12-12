#include<stdio.h>
int main(){
	int order,qty;
	int totalbill=0;
	
	
	while(1){
		printf("\n---order menu---");
		printf("1.pizza-?150\n");
		printf("2.burger-?80\n");
		printf("3.fried rice-?100\n");
		printf("4.chhiken roll-?100\n");
		printf("5.generate bill&exit\n");
		printf("enetr your order:");
		scanf("%d",&order);
		
		
		switch(order){
			case 1:
				print("enter quantity:");
				scanf("%d",&qty);
				totalbill+=qty*150;
				print("item added!\n");
				break;
				
				case 2:
				print("enter quantity:");
				scanf("%d",&qty);
				totalbill+=qty*80;
				print("item added!\n");
				break;
				
				
				case 3:
				print("enter quantity:");
				scanf("%d",&qty);
				totalbill+=qty*120;
				print("item added!\n");
				break;
				
				
				
				case 4:
				print("enter quantity:");
				scanf("%d",&qty);
				totalbill+=qty*100;
				print("item added!\n");
				break;
				
				case 5:
		           printf("total bill:?%d\n",totalbill);
				   break;
		          
		           
				   default:
				   printf("invaild choice!please enter 1-5.\n");
		
		
	
}
	
	
	
	}
	
return 0;	
}
				
				
				
				
				
				
				
				
				 
		
		

