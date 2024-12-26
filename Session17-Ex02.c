#include <stdio.h>
#include <string.h>
#define MAX 100
void inputString(char *str) {
    printf("Nhap vao chuoi: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
}
void printString(const char *str) {
    printf("Chuoi da nhap: %s\n", str);
}
void countLetters(const char *str) {
    int count = 0;
    while (*str) {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            count++;
        }
        str++;
    }
    printf("So luong chu cai: %d\n", count);
}
void countDigits(const char *str) {
    int count = 0;
    while (*str) {
        if (*str >= '0' && *str <= '9') {
            count++;
        }
        str++;
    }
    printf("So luong chu so: %d\n", count);
}
void countSpecialCharacters(const char *str) {
    int count = 0;
    while (*str) {
        if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9') || *str == ' ')) {
            count++;
        }
        str++;
    }
    printf("So luong ky tu dac biet: %d\n", count);
}
int main() {
    char str[MAX] = "";
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi và in ra\n");
        printf("4. Dem so luong chu so trong chuoi và in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi và in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                inputString(str);
                break;
            case 2:
                printString(str);
                break;
            case 3:
                countLetters(str);
                break;
            case 4:
                countDigits(str);
                break;
            case 5:
                countSpecialCharacters(str);
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 6);

    return 0;
}
