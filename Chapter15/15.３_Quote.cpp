#include<stdio.h>
#include<iostream>
#include</home/ysing/codeblock Projects/CPP_prime/Chapter15/15.３_Quote.h>
using std::cin;
using std::cout;using std::endl;

int main(){
    //Bulk_quote*bq = new Quote("ISNO-10",10.0);
    Quote *qt = new Bulk_quote("ISNO-8",10,5,10,0.5);//这样子是可以构造的
    cout<<qt->net_price(20)<<endl;
    delete(qt);


    Quote qt2 =Bulk_quote("ISNO-8",10,5,10,0.5);
    cout<<qt2.net_price(20)<<endl;

    /***
        上面两种情况
        qt1 打印50，qt2打印100诠释了动态绑定的两个要求
        1.虚函数
        2.调用的函数传入的是指针/引用

    ***/
    //cout<<qt.net_price(5)<<endl;
}
