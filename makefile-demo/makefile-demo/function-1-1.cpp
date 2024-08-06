//function to...
int sum_array (int array[], int n) {
	int sum = 0;
	if (n >= 1) {
		for (int i = 0; i < n; i++) {
			sum = sum + array[i];
		}
	}
	return sum;
}