/*枚举学习例程 根据输入对应枚举内容以显示输出 2022.12.6 作者：孙庚辰*/

#include <stdio.h>
enum color { red = 1 , oreange = 2 , yellow = 3 , green = 4 , ching = 5 , blue = 6 , purple = 7} ;
enum month { january , faburary , march , april , may , june , july , augst , september , october } ;
int main()
{
    int k ;
    enum week { su = 7 , mo = 1 , tu , we , th , fr , sa } day , days ;
    while (1)
    {
        printf("请输入数字1-7");
        scanf ( "%d" , &k ) ;
        day =  ( enum week )  k ;
        switch ( day )
        {
            case su :
            printf ( "sunday \n" ) ; break ;
            case mo :
            printf ( "monday \n" ) ; break ;
            case tu :
            printf ( "tuesday \n" ) ; break ;
            case we :
            printf ( "wednesday \n" ) ; break ;
            case th :
            printf ( "thursday \n" ) ; break ;
            case fr :
            printf ( "friday \n" ) ; break ;
            case sa :
            printf ( "satday \n" ) ; break ;
            default : printf ( "输入错误  \n" ) ; break ;
        }
    }        
}