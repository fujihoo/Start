#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("좋아하는 동물의 이름이 뭐야?\n");
    printf("내가 좋아하는 동물은 %s이야\n", answer);
}

