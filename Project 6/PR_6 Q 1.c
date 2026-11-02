#include<stdio.h>
#include<conio.h>

int main() {
    char str[15];
    int length = 0;
    int Palindrome = 1; 

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            Palindrome = 0; 
            break;
        }
        left++;
        right--;
    }

    if (Palindrome == 1) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}
