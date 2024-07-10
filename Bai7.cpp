#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 100

void tim_max(int *arr, int size);
void tim_chan_lon_nhat(int *arr, int size);
void Xoa_Phan_Tu_La_0(int *arr, int *size);
void Them_Vao_Sau(int *arr, int *size, int x);
int Ktra_So_CP(int n);
int Tong_So_CP(int *arr, int size);
void Tim_So_Cuc_Dai(int *arr, int size);

int main()
{

}
void tim_max(int *arr, int size) {
	int *max = arr;
	for (int i = 1; i < size; i++) {
		if (*(arr + i) > *max) {
			max = arr + i;
		}
	}
	printf("Phan tu lon nhat: %d, dia chi: %p\n", *max, (void*)max);
}