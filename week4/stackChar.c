/*Test kiểu stack bạn đã định nghĩa
trong 1 chương trình mà nhận từ
người sử dụng 1 xâu, và đảo ngược
nó.*/
#include <stdio.h>
#include "stack.h"
int main(){
    StackType s;
    initialize(&s);
    printf("Enter string:\n");
    fflush(stdin);
    char c='\0';
    while(c!='\n')
    {
        scanf("%c",&c);
        push(c,&s);
    }
    while(!empty(s))
    {
        Eltype e = pop(&s);
        if(e!='\n')
            printf("%c",e);
    }
    return 0;
}
