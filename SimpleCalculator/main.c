#include "include.h"
#include "headers.h"
#include "calcul.c"

int main()
{
	int loop = 1;
	while(loop == 1)
	{	
		double first_value = 0.0;
		double second_value = 0.0;
		double result = 0.0;
		int operation = 0;
		int input_loop = 1;
		int input = 2;
		printf("Enter operation : (addition : 1, substraction : 2, multiplication : 3, division : 4) :\n");
		scanf("%d", &operation);
		printf("Enter first value :\n");
		scanf("%lf", &first_value);
		printf("Enter second value :\n");
		scanf("%lf", &second_value);
		calcul(&operation, &first_value, &second_value, &result);
		if(operation == 1)
		{
		printf("Result of %f additioned with %f equal %f \n", first_value, second_value, result);
		}
		else if(operation == 2)
		{
			printf("Result of %f substracted with %f equal %f \n", first_value, second_value, result);
		}
		else if(operation == 3)
		{
			printf("Result of %f multiplied with %f equal %f \n", first_value, second_value, result);
		}
		else if(operation == 4)
		{
			printf("Result of %f divided with %f equal %f \n", first_value, second_value, result);	
		}
		else
		{
			printf("Error: try again!\n");
		}
		while(input_loop == 1)
		{	
			printf("Want to do another operation ?(yes : 1/no : 0)\n");
			scanf("%d", &input);
			switch(input)
			{
				case 1:
					printf("You choosed to do another operation\n");
					printf("---------------------------------------\n");
					input_loop = 0;
					break;
				case 0:
					printf("You choosed to exit the program\n");
					input_loop = 0;
					loop = 0;
					break;
			}
		}
	}
	return 0;
}

