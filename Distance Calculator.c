// Hello peeps! :-) It's my first code which include float values.It's a distance calculator First you have to put the speed and then the time. So enjoy the programme .


/*NOTE: YOU HAVE TO PUT ALL THE
VALUES IN S.I. UNIT ONLY.*/

/*PROGRAMME MADE BY 
SUNSTAR© INC.*/





#include <stdio.h>

int main()

{
	
	double speed;

	  double time;
	
	   printf("Please provide the SPEED(IN S.I. UNIT)\n");
	   
	   /*it will ask the user to enter a speed*/
	   
        	scanf("%lf", &speed); // it will take a input (speed) from the user
	
	
	                
	                    printf("The given SPEED is %fm/s\n",speed);
	     
	     
	     printf("OK Please provide the TIME(IN S.I. UNIT)\n");
	     
	     /*it will ask the user to enter a time*/
	     
              	scanf("%lf", &time);//it will also take an input (time) from the user
	
	               printf("The given TIME is %fs\n",time);
	
	
             	double distance=(double) speed * time;
	
	printf("The DISTANCE is %f m\n",distance);
	
	/* it will output the distance*/
	return 0;
}