void calcul(int *operationPointer, double *firstValuePointer, double *secondValuePointer, double *resultPointer)
{
	switch(*operationPointer)
	{
		case 1:
			*resultPointer = *firstValuePointer + *secondValuePointer;
		case 2:
			*resultPointer = *firstValuePointer - *secondValuePointer;
		case 3:
			*resultPointer = *firstValuePointer * *secondValuePointer;
		case 4:
			*resultPointer = *firstValuePointer / *secondValuePointer;
		default:
			printf("Error!\n");
	}
}

