// 题目：企业发放的奖金根据利润提成。

// 利润(I)低于或等于10万元时，奖金可提10%；
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
// 20万到40万之间时，高于20万元的部分，可提成5%；
// 40万到60万之间时高于40万元的部分，可提成3%；
// 60万到100万之间时，高于60万元的部分，可提成1.5%；
// 高于100万元时，超过100万元的部分按1%提成。
// 从键盘输入当月利润I，求应发放奖金总数？

// 程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成双精度浮点(double)型。

#include<stdio.h>
int main(){
    double i;
    double bonus1,bonus2,bonus3,bonus4,bonus5,bonus6,bonus;

    printf("请输入利润(元):\n");
    scanf("%lf",&i);
    bonus1 = 100000*0.1;
    bonus2 = bonus1 + 100000*0.075;
    bonus3 = bonus2 + 200000*0.05;
    bonus4 = bonus3 + 200000*0.03;
    bonus5 = bonus4 + 400000*0.015;
    if(i<=100000){
        bonus = i*0.1;
    }else if(i<=200000){
        bonus = bonus1+(i-100000)*0.075;
    }else if(i<=400000){
        bonus = bonus2+(i-200000)*0.05;
    }else if(i<=600000){
        bonus = bonus3+(i-400000)*0.03;
    }else if(i<=1000000){
        bonus = bonus4+(i-600000)*0.015;
    }else{
        bonus = bonus5+(i-1000000)*0.01;
    }
    printf("奖金为：bonus = %lf\n",bonus);
    
    return 0;
}