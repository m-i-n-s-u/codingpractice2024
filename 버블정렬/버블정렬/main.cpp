#include<iostream>


int a[10001];
int n, i, j, temp;
int main() {
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		scanf_s("%d", &a[i]);

	for (i = 1; i < n ; i++) {

		for(j = 0 ; j < n ; j++){

		if (a[j] > a[j + 1])
		{

		temp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = temp;

		}
		}
}

for (i = 1; i <= n; i++)
printf("%d\n", a[i]);
return 0;
}