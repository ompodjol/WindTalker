/*
   Sorting: Merge Sort - size is a power of 2
   0(n log n) efficient
   Sally Coder March 18, 2018
*/

#include <stdio.h>

#define SIZE 8
int a[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};

int pause() {
	int anykey;
	printf("\n enter any digit to continue \n");
	scanf("%d", &anykey);
	return 0;
}

void print_array(int how_many, int data[], char *str)
{
	int i;
	printf("%s", str);
	
	for (i = 0; i < how_many; i++) {
		printf("%d\t", data[i]);
	}
}

void merge(int a[], int b[], int c[], int how_many) /* a and b same size  */
{
	int i = 0, j = 0, k = 0;

	while (i < how_many && j < how_many) {
		if (a[i] < b[i]) {
			c[k++] = a[i++];
			print_array(SIZE, a, "My grades in c[k++] = a[i++]\n");
			pause();
		}
		else {
			c[k++] = b[j++];
			print_array(SIZE, a, "My grades in c[k++] = b[j++]\n");
			pause();
		}
	}
	while (i < how_many) {
		c[k++] = a[i++];
		print_array(SIZE, a, "My grades in c[k++] = a[i++]\n");
		pause();
	}
	while (j < how_many) {
		c[k++] = b[j++];
		print_array(SIZE, a, "My grades in c[k++] = a[i++]\n");
		pause();
	}
}

void mergesort(int key[], int how_many) /* a power of 2 */
{
	int j, k;
	int w[how_many];

	for (k = 1; k < how_many; k *= 2) {
		for (j = 0; j < how_many -k; j += 2 *k) {
			merge(key + j, key + j + k, w + j, k);
			print_array(SIZE, a, "My sorted grades in k < how_many mergesort\n");
			pause();
		}
		for (j = 0; j < how_many; j++) {
			key[j] = w[j];
			print_array(SIZE, a, "My sorted grades in j < how_many mergesort\n");
			pause();
		}
	}
}

int main()
{
	//const int SIZE = 8;
//	int a[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};
	print_array(SIZE, a, "My grades\n");
	printf("\n\n");
	mergesort(a, SIZE);
	print_array(SIZE, a, "My sorted grades\n");
	printf("\n\n");
	return 0;
}
