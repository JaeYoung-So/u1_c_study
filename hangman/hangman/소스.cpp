#include<stdio.h>
#include<string.h>
int main(void) {
	char solution[100] = "find a bot";
	char answer[100] = "____ _ ___";
	char ch;
	int i,count = 0;

	while (true) {
		printf("\n문자열을 입력하시오: %s \n",answer);
		printf("문자를 추측하시오: ");
		scanf_s(" %c", &ch);
		count++;
		for (i = 0; solution[i] != NULL;i++) {
			if (solution[i] == ch) {
				answer[i] = ch;
			}
		}
		if (count == 15) {
			printf("실패! 정답은 :%s 입니다", solution);
			break; 
		}
		if (strcmp(solution, answer) == 0) {
			printf("%s ", answer);
			printf("정답!");
			break;
		}

	}
	
	

	return 0;
}