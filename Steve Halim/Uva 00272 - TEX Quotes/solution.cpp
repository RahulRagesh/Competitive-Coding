//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208

#include <iostream>
using namespace std;

int main() {
	char str[10000000];
    int flag = 1;
	while(scanf ("%[^\n]%*c", str)!=EOF){
	    int i = 0;
	    while(str[i]!='\0'){
	        if (str[i] == '"'){
	            if(flag)
	                printf("``");
	            else
	                printf("''");
	        
	            flag = 1 - flag;
	        }
	        else
	            printf("%c",str[i]);
	        i++;
	    }
	    printf("\n");
	}
	return 0;
}
