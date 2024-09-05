//Repetitions identifier

#include  <stdio.h>
#include  <string.h>

int main()
{
    char *cip = "UYEBVGMPFXAVUUAETPARWJCKHMUTBGUUAETPARWQKWECAPQNXLGMZGFPWTBCEGFZTGULUAIPPGOBTNNCZXITP";
    
    int l = 0;
    int d = 0;
    
    //trigram search
    for (int i = 0; i < strlen(cip); i++)
    {
        if (l == 3){d++; i -= 2; l = 0;}
        l++;
    }
    
    printf ("%d", d);
}

https://www.youtube.com/watch?v=LsewLHTAmsA
