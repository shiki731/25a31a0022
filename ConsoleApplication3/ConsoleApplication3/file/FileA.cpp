#include <stdio.h>
#include "FileC.h"

static int valueA;

int f(int number, float value)
{
    int answer = number + (int)value;
    printf("ŠÖ” f ‚ªŒÄ‚Ño‚³‚ê‚Ü‚µ‚½Banswer ‚Í [%d] ‚Å‚·\n", answer);

    valueA = 0;

    f2();

    return answer;
}