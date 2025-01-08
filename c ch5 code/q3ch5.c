//ques3 chapter5 solved by dev varshney
/*Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
− After the person picks, the computer does its picking.
− Whoever is forced to pick up the last matchstick loses the 
game*/
#include <stdio.h>

int main(){
    printf("welcome to the game!!\n");
    int m=21,comp,n;
    while (m>1){
        printf("\npick 1,2,3 or 4matchstick\n");
        scanf("%d",&n);
        m-=n;
        printf("now its my turn!\n"); 
        comp=5-n;
        printf("\ni pick %d ",comp);
        printf("\n%d matchstick are left",m);}
    printf("\ngameover you lose");




    


}