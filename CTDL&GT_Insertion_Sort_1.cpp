// nguon https://viblo.asia/p/sap-xep-chen-sap-xep-chon-va-sap-xep-tron-Do754zX4ZM6
// vi du

#include<stdio.h>

void Insertion_sort(int a[], int n) {
	int index, new_number;
	for (int i = 1; i < n; i++){
		index = i;
		new_number = a[i];
		while (index > 0 && a[index - 1] > new_number){
			a[index] = a[index - 1];
			index--;
		}
		a[index] = new_number;
	}
}

