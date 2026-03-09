#include <stdio.h>
#include <limits.h>
#define N 100005
#include <string.h>
#include <stdbool.h>
char stack[N];
int l = 0;


void push (char x){
	stack[l++] = x;
}

char pop (){
	if (l == 0) return '\0';
	
	return stack[--l];
	
}

bool empty(){
	return l == 0;
}

//kiem tra 2 ngoac 1 cap 
bool check_pair(char o, char c){
	if (o == '(' && c == ')') return true;
	if (o == '{' && c == '}') return true;
	if (o == '[' && c == ']') return true;
	return false;
	
}


bool check (char *s){
	l = 0;
	int len = strlen (s);
	
	
	for (int i = 0; i < len; i++){
		// push cai mo vao 
		if (s[i] == '(' || s[i] == '{' || s[i] == '['){
			push(s[i]);
		}
		
		
		//so sanh cai dong voi cai mo
		else if (s[i] == ')' || s[i] == '}' || s[i] == ']'){
			if (empty ()) return false;
			
			char last = pop ();
			if (!check_pair(last, s[i])) return false;
			
		}
		
		
	}
	return empty;
	
}




int main(){
	
	char s[N];
	scanf ("%s", s);
	
	if (check(s)){
		printf("Y");
	}
	else printf("N");
	
	
	
	
	
	
	
	
	
	
	
}
