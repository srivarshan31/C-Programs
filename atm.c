#include<stdio.h>
 int main(){
 	int pin,option;
 	float balance=10000.00;
 	float amount;
 	printf("enter ATM:");
 	scanf("%d",&pin);
 	
 	
 	if(pin !=1234){
 		printf("invaild pin!Acess denied.\n");
 		return 0;
	 }
	 while(1){
	 	printf("\n---atm menu----\n");
	 	printf("1.check balance\n");
	 	printf("2.deposit amount\n");
	 	printf("3.withdraw amount\n");
	 	printf("4.exit\n");
	 	printf("enter your choice:");
	 	scanf("%d",&option);
	 
	 
	    switch(option){
	    	case 1:
	    		printf("current  balance:?%2f\n",balance);
	    		break;
	    		
	        case 2:
	        	printf("enter amount to deposit:");
	        	scanf("%f",&amount);
	        	balance+=amount;
	        	printf("amount deposit succesfully!\n");
	            break;
	            
	            case 3:
	        	printf("enter amount to withdraw:");
	        	scanf("%f",&amount);
				if(amount>balance){
				
	        	  printf("insufficient balance!\n");
	        }
	        	else{
	        			balance-=amount;
	        	printf("withdraw succesfully!\n");
	       }
			    break;
	            case 4:
	            	printf("thank you for using atm!:\n");
	            	return 0;
	            	default:
	            		printf("invalid option! try again.\n");
	            	}
	    	
	    	
		}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 	
	 }
	 
 
