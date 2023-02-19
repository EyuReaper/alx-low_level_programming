/**
 * main ~ prints the last digits a randomly generated number
 * and weather greater than 5, less than 6 or 0
 * Return : always 0.
 */
int main(void){
{
	int n;
	srand(time(0));
	n= rand() - Rand_max / 2
		if((n % 10) > 5)
		{
			printf("last digit %d is %d is greater than 5\n", n % 10);
		}
		else if ((n%10) < 6 && (n % 10) ! = 0)
		{
			printf("Last digit %d is %d its less than 6 and not 0\n", n , n % 10)
		}
		else
		{
			printf("last digit %d is %d and is  0\n", n , n % 10);
		}
	return (0);
}
