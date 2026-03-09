// odsetki

void odsetki(void) {
	int64_t amount, rate, sum1, sum, times, temporary1, temporary2;

	amount = 1000;
	times = 1000;
	rate = 35;
	temporary1 = rate * times;
	temporary2 = amount * times;
	sum1 = temporary1 * temporary2;
	sum = sum1 / times;

	printf("Suma = %lld", sum)
	
}

int main(void) {
	odsetki();
return 0;
}