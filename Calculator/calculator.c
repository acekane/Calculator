#include<stdio.h>
#include<conio.h>
int addition(int a,int b)
{
	return a+b;
}
int minus(int a,int b)
{
	return a-b;
}
int multiply(int a,int b){
	return a*b;
}
float divide(int a,int b){
	return a/b;
}
float modulo(int a,int b){
	return a%b;
}


void main()
{
int a,b;
	int number;
	printf("Enter a first number:- ");
	scanf("%d",&a);
	printf("Enter a second number:- ");
	scanf("%d",&b);
	
	printf("Press 1 for addition.\n");
	printf("Press 2 for minus.\n");
	printf("Press 3 for multiply.\n");
	printf("Press 4 for divide.\n");
	printf("Pree 5 for modulo.\n");
	printf("Pree 0 for the exit.\n");
	
	printf("Enter your Number:- \n");
	scanf("%d",&number);
	
	switch(number){
	  case 1 :{
	  	      addition(a,b);
	  	      printf("Addition of %d and %d is %d",a,b,addition(a,b));
	  	      break;
	  }
	  case 2 :{
	  	      minus(a,b);
	  	      printf("minus of %d and %d is %d",a,b,minus(a,b));
		      break;
	  }
	  case 3 :{
	  	      multiply(a,b);
	  	      printf("multiply of %d and %d is %d",a,b,multiply(a,b));
		      break;
	  }
	  case 4 :{
	  	       divide(a,b);
	  	       printf("divide of %d and %d is %f",a,b,divide(a,b));
		       break;
	  }
	  case 5 :{
	           modulo(a,b);
			   printf("modulo of %d and %d is %f",a,b,modulo(a,b));   
		       break;
	  }
	  case 0 :{
	  	       printf("thank You.");
		       break;
	  }
		
	  }
	
	
	
	getch();
}
