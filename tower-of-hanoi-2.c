#include <stdio.h>
void towers(int, char, char, char);

int main(void){
    int num;
    scanf("%d", &num);
    towers(num, 'A', 'C', 'B');
}

void towers(int num, char frompeg, char topeg, char auxpeg){
    if(num == 1){
        printf("Move disk 1 from peg %c to peg %c\n", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("Move disk %d from peg %c to peg %c\n", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
