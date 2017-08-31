#include<stdio.h>

int numPrimo(int a);
int main()
{
	int a[50][50];   
	int count,c,fil,col,i,j,sum=0,k,control=0;
    printf("Ingresar el numero filas:");
    scanf("%d",&fil);
    printf("Ingresar el numero columnas:");
    scanf("%d",&col);
    	if(fil <= 0 || col <= 0){
        	printf("Debe indicar numero de filas y columnas mayor a cero.\n");
        	return -1;
    }
    for(i=0;i<fil;i++){
	for(k=0;k<col;k++){
		printf("\nIntroduzca la entrada (%d,%2d) para la primera matriz \n", i, k);
        scanf("%d", &a[i][k]);
    }
	}
    count=0;
    printf("\n prime numbers are:\n");
    	for(i=0;i<fil;i++){
		for(k=0;k<col;k++)
		{
           	control=numPrimo(a[i][k]);
	    	if(control==0)
			{
			
		        printf("\nEl numero %d es primo\n",a[i][k]);
		    	sum=sum+a[i][k];
				count++;
			}
			else
			{
			
			printf("\nEl numero %d no es primo\n",a[i][k]);
	
			}
		   
            }
	}
 	   
    printf("\nLa cantidad de numeros primos es %d",count);
    printf("\nLa suma de los numeros primos es %d",sum);

}



int numPrimo(int a){
	int i,num,swc,b=0;
	num=a;
	swc=0;
	for (i=1;i<=a;i++){
		if (num%i==0)
			b++;
	}
	if (b==2){
	    swc=0;
		return swc; //El numero es primo;
	}
	else {
		swc=1;
		return swc; //El numero no es primo;
}	
}

