#include <stdio.h>
//函数原型声明
//指针就是保存地址的变量
void f(int *p);
void g(int k);

int main(void){
    int i = 6;
    printf("&i = %p\n",&i);
    f(&i);
    g(i);

    return 0;
}

void f(int *p){
    printf("p = %p\n",p);
    printf("*p = %d\n",*p);
    *p = 26;
}

void g(int k){
    printf("k = %d\n",k);
}
