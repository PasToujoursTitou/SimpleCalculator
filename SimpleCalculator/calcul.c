void calcul(int *operationPointer, double *first_valuePointer, double *second_valuePointer, double *resultPointer)
{
	switch(*operationPointer)
	{
		case 1:
			*resultPointer = *first_valuePointer + *second_valuePointer;
			break;
		case 2:
			*resultPointer = *first_valuePointer - *second_valuePointer;
			break;
		case 3:
			*resultPointer = *first_valuePointer * *second_valuePointer;
			break;
		case 4:
			*resultPointer = *first_valuePointer / *second_valuePointer;
			break;
		default:
			exit(0);
	}
}
