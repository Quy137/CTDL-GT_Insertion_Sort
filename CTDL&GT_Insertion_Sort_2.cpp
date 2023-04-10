// nguon https://viblo.asia/p/sap-xep-chen-sap-xep-chon-va-sap-xep-tron-Do754zX4ZM6
// cai dat
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
void nhapMang(int a[], int &n) {
	n = 0;
	int x;
	do {
		printf("Nhap 1 so nguyen cua mang . Nhap so 0 de ket thuc : ");
		scanf("%d", &x);
		if (x != 0)
			a[n++] = x;
	} while(x != 0);
}
void xuatMang(int a[], int n) {
	for(int i = 0; i<n;i++)
		printf("%4d", a[i]);
}
int main(){
	int n,a[100];
	nhapMang(a,n);
	printf("Mang vua nhap :");
	xuatMang(a,n);
	Insertion_sort(a,n);
	printf("\nMang tang dan : ");
	xuatMang(a,n);
}
