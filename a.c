__c__ {#include <stdio.h>}
__c__ {int X=123;}
__c__ {struct sData { int a; }; struct sData data;}
__c__ {int XXX[123];}
__c__ {enum { X1, Y1, Z1 };}

int main(int argc, char** argv)
{
    printf("HELLO WORLD %d %d %d %d %d\n", X, data.a, XXX[0], X1, data.a.b);
    a.method();
    return 0;
}
