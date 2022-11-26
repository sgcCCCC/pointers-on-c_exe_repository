#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch ;
    int line_num ;                                              /*行数*/
    int line_begin ;                                            /*是否处理这行   1=可以    0=不可以*/

    line_num = 0 ;
    line_begin = 1 ;

    while( (ch=getchar()) != EOF )                              /*当这行还没输入完时*/
    {
        if( line_begin == 1 )                                   /*可以处理这行*/
        {
            line_begin = 0 ;                                    /*已经处理了，不要再处理*/
            line_num += 1 ;                                     /*行数+1*/
            printf( "%d" , line_num ) ;
        }

        putchar( ch ) ;                                         /*输出（输入的）*/

        if( ch == '\n' )                                        /*识别到换行符，这一行输入结束*/
        {
            line_begin = 1 ;                                    /*可以来处理这行*/  
        }
    }

    return 0 ;

}