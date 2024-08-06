double average (int array[], int n) {
	double ave = 0.0;
	double sum = 0.0;

	if (n >= 1) {
		for (int i = 0; i < n; i++) {
			sum = sum + array[i];
		}
		ave = sum/n;
		return ave;
	}
	else{
		return 0.0;
	}
}