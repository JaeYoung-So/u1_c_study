#include <stdio.h>
#include <windows.h>
#define size 10
int main(void) {

	int i, k;
	int list[size] = { 100,30,20,78,89,12,56,38,99,66 };
	HDC hdc = GetWindowDC(GetForegroundWindow());


	for (k = 0; k < size;k++) {
		Rectangle(hdc, 0, 0, 800, 800);
		for (i = 0; i < size - 1;i++){
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}

		for (i = 0; i < size;i++) {
			Rectangle(hdc, 200 + i * 30, 200, 230 + i * 30, 200 - list[i]);
		}
		Sleep(1000);
	}
	return 0;
}