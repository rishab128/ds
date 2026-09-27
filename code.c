#include <stdio.h>

#define MAX 50
int stack[MAX]; 
int top = -1;

void push(char item) {
    if (top >= MAX - 1) {
        printf("Stack Overflow");
        return;
    }
    top++;
    stack[top] = item;
}

char pop() {
    if (top < 0) {
        printf("Stack empty");
        return '\0';
    }
    char item = stack[top];
    top--;
    return item;
}

int main() {
    int n = 0;
    int i = 0;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    char a[n];

    printf("Enter a string: \n");
    for(i = 0; i < n; i++) {
        scanf(" %c", &a[i]); 
        
        push(a[i]); 
    }
    
    for(i = 0; i < n; i++) {
        printf("Popped character: %c\n", pop());
    }

    return 0;
}
