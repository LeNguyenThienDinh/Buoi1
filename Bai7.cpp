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
	int arr[MAX_SIZE];
	int kc, chon, x;

	printf("Nhap kich thuoc cua mang: ");
	scanf("%d", &kc);
	if (kc > MAX_SIZE) {
		printf("Kich thuoc mang khong duoc vuot qua %d\n", MAX_SIZE);
		return 1;
	}

	printf("Nhap cac phan tu cua mang:\n");
	for (int i = 0; i < kc; i++) {
		scanf("%d", &arr[i]);
	}

	while (1) {
		printf("\nChon thao tac:\n");
		printf("1. Tim phan tu lon nhat va dia chi cua no\n");
		printf("2. Tim dia chi cua phan tu chan lon nhat va phan tu le nho nhat\n");
		printf("3. Xoa phan tu co gia tri 0\n");
		printf("4. Them phan tu vao sau phan tu dau tien\n");
		printf("5. Tinh tong cac phan tu la so chinh phuong\n");
		printf("6. Xuat cac so cuc dai trong mang\n");
		printf("0. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			tim_max(arr, kc);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			exit(0);
		default:
			break;
		}
	}
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