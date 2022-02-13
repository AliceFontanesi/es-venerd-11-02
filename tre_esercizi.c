# include <stdio.h>
int main()
{
	int num;
	do{
	printf("Inserisci un numero: \n");
	scanf("%d", &num);
	}while(num < 0)
	printf("I primi n numeri interi positivi sono: \n");
	for (int i = 0; i < num; i++)
	{
    	printf("%d \n", i + 1);
	}
	return 0;
}

# include <stdio.h>
int main()
{
	int num;
	int n;
	printf("Inserisci un numero \n");
	scanf("%d", &num);
	printf("I primi n numeri dispari inferiori o uguali del numero inserito sono: \n");
	for (int i = 0; i <= num; i++)
	{
    	n = i + 1;
    	if (n % 2 != 0)
    	{
        	printf("%d \n", n);
    	}
	}
	return 0;
}


# include <stdio.h>
int main()
{
	int n1, n2;
	do
	{
    	printf("inserisci il primo numero: ");
    	scanf("%d", &n1);
    	printf("inserisci il secondo numero: ");
    	scanf("%d", &n2);
	} while (n1 > n2);
	printf("I numeri compresi nell'intervallo chiuso tra i due numeri inseriti sono: \n");
	for (int i = n1; i <= n2; i++)
	{
    	printf("%d \n", i);
	}
	return 0;
}
