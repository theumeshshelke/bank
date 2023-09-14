
#include<stdio.h>

int main(){
	int n,d,w,i,x;
	float b=0;
	
		printf("Hello Dear Customer, ");
	while(n!=0){
	printf("\nDeposit : 1");
	 printf("\nAvailable Balance :2\n");
    
    // Deposite amount should be greater than 0.
   if(b>0){
   printf("Withdraw :3\n");} 
    printf("For Exit Press :0\n");
	printf(" \nEnter your choice :");
	scanf("%d",&n);
    
    //Deposite Section:
		if (n==1){
		printf(" Enter Amount to deposit :");
		scanf("%d",&d);
		b=d+b;	
   }
      //withdraw Section:
	else if(n==3 ){
    printf("\n Enter Amount to Withdraw :");
         scanf(" %d",&w);
        b=b-w;	
	}
    //Balance:
		else if(n==2){
		printf(" Available Balance :%.2f\n",b);
	}
	else if(n==0){
		printf("Thank you, you have a Nice day !!");	
	}
	else{
	printf(" Please Enter choice Correctly !! \a\n");
	}
}
    return 0;
}

