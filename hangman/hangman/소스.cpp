#include<stdio.h>
#include<string.h>
int main(void) {
	char solution[100] = "find a bot";
	char answer[100] = "____ _ ___";
	char ch;
	int i,count = 0;

	while (true) {
		printf("\n���ڿ��� �Է��Ͻÿ�: %s \n",answer);
		printf("���ڸ� �����Ͻÿ�: ");
		scanf_s(" %c", &ch);
		count++;
		for (i = 0; solution[i] != NULL;i++) {
			if (solution[i] == ch) {
				answer[i] = ch;
			}
		}
		if (count == 15) {
			printf("����! ������ :%s �Դϴ�", solution);
			break; 
		}
		if (strcmp(solution, answer) == 0) {
			printf("%s ", answer);
			printf("����!");
			break;
		}

	}
	
	

	return 0;
}