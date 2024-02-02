#include<iostream>

int a[10001];
int n, i, j, temp, min;

int main() {

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	for (i = 0; i < n - 1; i++) {

		min = i;

		for (j = i + 1; j < n; j++) {

			if (a[min] > a[j]) {
				min = j;
			}
		}

		temp = a[i];
		a[i] = a[min];
		a[min] = temp;

		}


		for (i = 0; i < n; i++)
			printf("%d\n", a[i]);

		return 0;
}