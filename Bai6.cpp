#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ERR_AGE_CODE 101
#define ERR_GENDER_CODE "errcode"

void throw_error(int code) {
	printf("Loi: %d\n", code);
	exit(code);
}

void throw_error_str(const char *code) {
	printf("Loi: %s\n", code);
	exit(1);
}

int calculate_age(int birth_year, int current_year) {
	return current_year - birth_year;
}

int main() {
	char ho_ten[100], gioi_tinh[10];
	int ngay, thang, nam, tuoi;
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	int current_year = tm.tm_year + 1900;

	printf("Nhap ho ten: ");
	fgets(ho_ten, sizeof(ho_ten), stdin);
	size_t len = strlen(ho_ten);
	if (len > 0 && ho_ten[len - 1] == '\n') {
		ho_ten[len - 1] = '\0';
	}

	printf("Nhap ngay sinh (dd mm yyyy): ");
	if (scanf("%d %d %d", &ngay, &thang, &nam) != 3) {
		printf("Loi: Du lieu ngay sinh khong hop le.\n");
		return 1;
	}

	printf("Nhap gioi tinh (nam/nu): ");
	scanf("%s", gioi_tinh);
	tuoi = calculate_age(nam, current_year);
	if ((strcmp(gioi_tinh, "nam") == 0 && (tuoi < 18 || tuoi > 62)) || (strcmp(gioi_tinh, "nu") == 0 && (tuoi < 18 || tuoi > 60)))
	{
		throw_error(ERR_AGE_CODE);
	}
	if (strcmp(gioi_tinh, "nam") != 0 && strcmp(gioi_tinh, "nu") != 0) 
	{
		throw_error_str(ERR_GENDER_CODE);
	}
	int retirement_year = (strcmp(gioi_tinh, "nam") == 0) ? (nam + 62) : (nam + 60);
	printf("%s, gioi tinh %s, sinh ngay %02d/%02d/%d. Hien tai (nam %d) %s da %d tuoi. Thoi gian %s duoc nghi huu la thang %02d/%d.\n", ho_ten, gioi_tinh, ngay, thang, nam, current_year, ho_ten, tuoi, ho_ten, thang, retirement_year);
	getchar();
	return 0;
}
