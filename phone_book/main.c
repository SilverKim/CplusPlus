// *************************************************************
//*****************C++ Programming *****************************
// ******************Daeun Sarah Kim****************************
// *************************************************************
#include <stdio.h>
#include <string.h>

struct user {
	char name[20];
	char phone[20];
	char birth[20];
	char nickname[20];
};

void insert();
void deleted_number();
void deleted_name();
void deleted_nickname();
void name_search();
void number_search();
void birth_search();
void ending();
void display();
void name_change();
void number_change();
void nickname_change();
void birth_change();
void remove_all();
void nickname_search();

int x;
int size;
int i;
struct user a[100] = { 0 };

int main(void) {

	size = 0;

	while (1)
	{
		printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");

		printf("<Select number.>\n\n");
		printf(" [add = 1]\n [remove by phone number = 2]\n [remove by name = 3]\n [remove by nickname = 4] \n [exit = 5]\n [search nickname by realname = 6]\n");
		printf(" [search number by name = 7]\n [search name by number = 8]\n [search birthday by name = 9] \n [modify name = 10] \n [modify number = 11] \n [modify nickname = 12] \n");
		printf(" [modify birthday = 13] \n\ [initialization = 14] \n [show list = 15] \n\n");
		printf("write number: ");
		scanf("%d", &x);

		if (x == 1)
			insert();
		else if (x == 2)
			deleted_number();
		else if (x == 3)
			deleted_name();
		else if (x == 4)
			deleted_nickname();
		else if (x == 5)
			ending();
		else if (x == 6)
			nickname_search();
		else if (x == 7)
			name_search();
		else if (x == 8)
			number_search();
		else if (x == 9)
			birth_search();
		else if (x == 10)
			name_change();
		else if (x == 11)
			number_change();
		else if (x == 12)
			nickname_change();
		else if (x == 13)
			birth_change();
		else if (x == 14)
			remove_all();
		else if (x == 15)
			display();
		else
			printf("select number between 1 and 15");

	}
	return 0;
}

void insert() {

	int i;
	char y1[20] = { 0 };
	char y2[20] = { 0 };
	char y3[20] = { 0 };
	char y4[20] = { 0 };

	printf("write name: ");
	scanf("%s", y1);

	printf("write number: ");
	scanf("%s", y2);

	printf("write birthday: ");
	scanf("%s", y3);

	printf("write nickname: ");
	scanf("%s", y4);

	for (i = 0; i < size; i++) {
		if (strcmp(a[i].phone, y2) == 0)
		{
			printf("The user already exists. \n");
			return;
		}
	}

	strcpy(a[size].name, y1);
	strcpy(a[size].phone, y2);
	strcpy(a[size].birth, y3);
	strcpy(a[size].nickname, y4);
	size++;
}

void deleted_number() {
	
	char y[20] = { 0 };
	char zero[20] = { 0 };

	printf("삭제할 번호를 입력하시오: ");
	scanf("%s", y);

	for (i = 0; i < size; i++) {
		if (strcmp(y,a[i].phone)== 0) {
			strcpy(a[size].name, zero);
			strcpy(a[size].phone, zero);
			strcpy(a[size].birth, zero);
			strcpy(a[size].nickname, zero);
			size--;
			return;
		}
	}
	printf("저장되어있지 않는 번호입니다. \n");
	return;
}

//이름으로 번호 삭제
void deleted_name() {

	char y[20] = { 0 };
	char zero[20] = { 0 };

	printf("삭제할 이름를 입력하시오: ");
	scanf("%s", y);

	for (i = 0; i < size; i++) {
		if (strcmp(y, a[i].name) == 0) {
			strcpy(a[size].name, zero);
			strcpy(a[size].phone, zero);
			strcpy(a[size].birth, zero);
			strcpy(a[size].nickname, zero);
			size--;
			return;
		}
	}
	printf("저장되어있지 않는 이름입니다. \n");
}

//닉네임으로 번호 삭제 
void deleted_nickname() {

	char y[20] = { 0 };
	char zero[20] = { 0 };

	printf("삭제할 별명를 입력하시오: ");
	scanf("%s", y);

	for (i = 0; i < size; i++) {
		if (strcmp(y, a[i].nickname) == 0) {
			strcpy(a[size].name, zero);
			strcpy(a[size].phone, zero);
			strcpy(a[size].birth, zero);
			strcpy(a[size].nickname, zero);
			size--;
			return;
		}
	}
	printf("저장되어있지 않는 별명입니다. \n");
}

//이름으로 번호 조회 
void name_search() {

	int i;
	char y[20] = { 0 };

	printf("찾으실번호의 '이름'을 입력하시오: ");
	scanf("%s", y);

	for (i = 0; i < 100; i++) {
		if (strcmp(a[i].name, y) == 0) {
			printf("%s 이름의 번호는 %s입니다.\n\n", y, a[i].phone);
			return;
		}
	}
	printf("해당 이름이 없습니다. \n\n");
}

//번호로 이름 조회
void number_search() {

	int i;
	char y[20] = { 0 };

	printf("찾으실 이름의 '번호'를 입력하시오: ");
	scanf("%s", y);

	for (i = 0; i < 100; i++) {
		if (strcmp(a[i].phone, y) == 0) {
			printf("%s 번호에 해당하는 이름은 %s입니다.\n\n", y, a[i].name);
			return;
		}
	}
	printf("해당 번호가 없습니다. \n\n");
}

//이름으로 생일 조회 
void birth_search() {

	int i;
	char y[20] = { 0 };

	printf("생일을 알고 싶은 사람의 '이름'을 입력하시오: ");
	scanf("%s", y);

	for (i = 0; i < 100; i++) {
		if (strcmp(y,a[i].name) == 0) {
			printf("%s의 생일은 %s입니다.\n\n", y, a[i].birth);
			return;
		}
	}
	printf("해당 이름이 없습니다. \n\n");
}

//이름으로 별명 조회 
void nickname_search() {

	int i;
	char y[20] = { 0 };

	printf("별명을 알고 싶은 사람의 '이름'을 입력하시오: ");
	scanf("%s", y);

	for (i = 0; i < 100; i++) {
		if (strcmp(a[i].name, y) == 0) {
			printf("%s의 별명은 %s입니다.\n\n", y, a[i].nickname);
			return;
		}
	}
	printf("해당 이름이 없습니다. \n\n");
}

//종료하기->관리 program 자체를 종료 시키기 
void ending() {

	exit();

}

//현재까지 입력된 목록 보기->현재까지의 목록안에 어떤 data들이 들어 있는지 보여주는 함수 
void display() {

	if (size == 0) {

		printf("****Error: No data \n");
		printf("****Please Input data first \n");
	}

	printf("***************************************************\n");
	printf("             <이름>  <번호>      <생일> <별명> \n\n");
	for (i = 0; i < size; i++)
	{
		printf("%d번째 입력: <%s> <%s> <%s> <%s> \n\n", i + 1, a[i].name, a[i].phone, a[i].birth, a[i].nickname);
	}
	printf("***************************************************\n\n");

}

//이름 수정
void name_change() {

	char y[20] = { 0 };
	char z[20] = { 0 };
	char x[20] = { 0 };

	printf("변경하고 싶은 이름을 입력하시오: ");
	scanf("%s", y);

	printf("어떤 이름으로 바꾸시겠습니까?: ");
	scanf("%s", z);

	for (i = 0; i < 100; i++) {
		if (strcmp(y, a[i].name) == 0) {
			strcpy(a[i].name, z);
			printf("변경되었습니다. \n\n");
			return;
		}
	}
	printf("********Error:해당 이름이 번호 목록에 없습니다. \n\n");   
}

//번호 수정
void number_change() {

	char y[20] = { 0 };
	char z[20] = { 0 };
	char x[20] = { 0 };

	printf("변경하고 싶은 번호을 입력하시오: ");
	scanf("%s", y);

	printf("어떤 번호으로 바꾸시겠습니까?: ");
	scanf("%s", z);

	for (i = 0; i < 100; i++) {
		if (strcmp(y, a[i].phone) == 0) {
			strcpy(a[i].phone, z);
			printf("변경되었습니다. \n\n");
			return;
		}
	}
	printf("********Error:해당 번호가 번호 목록에 없습니다. \n\n");  
}

//별명 수정
void nickname_change() {

	char y[20] = { 0 };
	char z[20] = { 0 };
	char x[20] = { 0 };

	printf("변경하고 싶은 별명을 입력하시오: ");
	scanf("%s", y);

	printf("어떤 별명으로 바꾸시겠습니까?: ");
	scanf("%s", z);

	for (i = 0; i < 100; i++) {
		if (strcmp(y, a[i].nickname) == 0) {
			strcpy(a[i].nickname, z);
			printf("변경되었습니다. \n\n");
			return;
		}
	}
	printf("********Error:해당 별명을 가진 번호가 번호 목록에 없습니다. \n\n");
}

//생일 수정 
void birth_change() {

	char y[20] = { 0 };
	char z[20] = { 0 };
	char x[20] = { 0 };

	printf("변경하고 싶은 생일을 입력하시오: ");
	scanf("%s", y);

	printf("정확한 생일은 언제입니까?: ");
	scanf("%s", z);

	for (i = 0; i < 100; i++) {
		if (strcmp(y, a[i].birth) == 0) {
			strcpy(a[i].birth, z);
			printf("변경되었습니다. \n\n");
			return;
		}
	}
	printf("********Error:해당 생일을 가진 번호가 번호 목록에 없습니다. \n\n");
}

//전체 초기화 시키기 
void remove_all() {

	char y[20] = { 0 };
	char zero[20] = { 0 };

	for (i = 0; i < size; i++) {
			strcpy(a[i].name, zero);
			strcpy(a[i].phone, zero);
			strcpy(a[i].birth, zero);
			strcpy(a[i].nickname, zero);
			size--;
	}
	size = 0;
	printf("초기화 되었습니다 \n\n");
	return;
}

