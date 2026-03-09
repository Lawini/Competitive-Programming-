#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100005

char stack[MAX];
int top = 0;

void push(char x) {
    stack[top++] = x;
}

char pop() {
    if (top == 0) return '\0';
    return stack[--top];
}

bool is_empty() {
    return top == 0;
}


bool is_pair(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '[' && close == ']') return true;
    if (open == '{' && close == '}') return true;
    return false;
}

bool check_balanced(char* s) {
    top = 0; 
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            push(s[i]);
        } 
        
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (is_empty()) return false; 
            
            char last_open = pop();
            if (!is_pair(last_open, s[i])) return false; 
        }
    }

    return is_empty();
}

int main() {
    char s[MAX];
    printf("Nhap day ngoac: ");
    scanf("%s", s);

    if (check_balanced(s)) {
        printf("DUNG\n");
    } else {
        printf("SAI\n");
    }

    return 0;
}
