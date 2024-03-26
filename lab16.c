#include <stdio.h>
#include <string.h>

void deleteChar(char *str, int position) {
    int len = strlen(str);
    
    if (position >= 0 && position < len) {
        for (int i = position; i < len - 1; i++) {
            str[i] = str[i + 1];
        }
        str[len - 1] = '\0'; 
    }
}

int main() {
    char str[100]; 
    int position;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Enter the position of the character to delete: ");
    scanf("%d", &position);
    
    printf("Before deletion: %s\n", str);
    deleteChar(str, position);
    printf("After deletion: %s\n", str);
    
    return 0;
}