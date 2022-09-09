#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*  calcule */

int main() {
	int a,b,S=1,x,i,y;
	start:
	printf(" CALCULATRICE\n ");
	printf("choisire l'operation mathematique : \n");
	printf(" pour la somme choisie 1:\n pour la soustraction choisie 2:\n pour la division  choisie 3:\n pour le produit choisie 4:\n");
	printf(" pour la  puissance choisie 5:\n pour le factorielle choisie 6:\n pour le reste choisie 7:\n ");
    printf("pour les cacluces trigonometrique choisie  8:\n");
	scanf("%d",&x);
	do {
        if (x==1){ 
	    printf("saisire les deux valeurs qui vous voulez le calculer");
    	scanf ("%d%d",&a,&b);
	    	S=a+b;
	    	printf("la somme est %d",S);
	}
		if (x==2){
			printf("saisire les deux valeurs qui vous voulez le calculer");
        	scanf ("%d%d",&a,&b);
			S=a-b;
	    	printf("la soustraction est %d",S);
	}
		if (x==3){
		          printf("saisire les deux valeurs qui vous voulez le calculer");
	              scanf ("%d%d",&a,&b);
			S=a/b;
	    	printf("la divison est %d",S);
	}
		if (x==4){
			printf("saisire les deux valeurs qui vous voulez le calculer");
         	scanf ("%d%d",&a,&b);
			S=a*b;
	    	printf("le produit est %d",S);
	}
		if (x==5){
			printf("saisire les deux valeurs qui vous voulez le calculer");
        	scanf ("%d%d",&a,&b);
			S=pow(a,b);
	    	printf("la %d a la puissance %d  est %d",a,b,S);
	}
	
		if (x==6){
			printf("saisire la valeur qui vous voulez la calculer");
	        scanf ("%d",&a);
	         if (a==0||a==1)
	             {
				 printf("factorielle de %d est 1",a);
				 }
	        else {
	        
			    for(i=2;i<a+1;i++)
	           	{ 
	           	   S*=i;
				   }
				   printf("factorielle de %d est %d:",a,S);
			}
			
	}
        if (x==7){
		printf("saisire les deux valeurs qui vous voulez le calculer");
    	scanf ("%d%d",&a,&b);
	    	S=a%b;
	    	printf("le reste de %d sur %d est: %d",a,b,S);
	} 
           
		
	   if (x==8){
	   		printf(" pour calculer le cos choisie 1:\n pour calculer le sin choisie 2:\n pour calculer le tang choisie 3:\n ");
		    scanf ("%d",&y);
	   		  
	   	       switch(y) 
	   		       { case 1: 
					 printf( "Veuillez saisir un angle en radian : " );
                     scanf( "%d", &a );
                     printf( "Le cosinus de l'angle vaut : %2.f\n", cos(a) ); 
					   break;
					   
				     case 2:
					 printf( "Veuillez saisir un angle en radian : " );
                     scanf( "%d", &a );
                     printf( "Le sinus de l'angle vaut : %2.f\n", sin(a) ); 
                     break;
					  
					  case 3: 
					 printf( "Veuillez saisir un angle en radian : " );
                     scanf( "%d", &a );
                     printf( "Le tangant de l'angle vaut : %2.f\n", tan(a) ); 
                      break;
					}	
						   }
	  
	  }while(x<0||x>9); 
    goto start;
	   }
 

