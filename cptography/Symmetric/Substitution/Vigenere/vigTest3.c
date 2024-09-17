//Repetitions identifier

#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

int main()
{
    
//Made Simple extract    
char *cip="UTPDHUGNYHUSVKCGMVCEFXLKQIBWXRKUGITZNRLSBBHZLXMSNPKDKSCEBIHHKEWIBAYYMSBRPFRSBSJVUPLOUVADGRHRRWXFJVZTVOOVYHZCQUYUKWGEBPLUQFBPFOUKCGTBFRQVHCFRKPGOUKFTZCQUMAWQKKWZGSYFPPGMQKFTKUQFBDEREZRNMCYEMGUCTFSVAWPKFTZCQUMAWKQIJSLCOVNTHDNVJPNUJVBIHGGVRWXONKCGTHKFLXGVKDZJMVGCCIMVGDJPNUJRLSEWVKJTASGUCSMVGDDDKVGNYHPWUVCCHIIYRDDBQNRWTHPFRWBBIVTTKVCGNTGSFFLIAWUXJDUSHFPVHCFRRLAWEYQDFSRVMEESFZBCHHJRTTMVGZPUBZNFDATIIYRTKWPKFTHIVJCITBFBLDPWPXRWTHULAWTGVYCHXKQLJSUSDCGCWOPPUPRVGKFDNUJKGIJIKKCPLKGCJIAOVKFTRGJFSAWKTZLZESWGRWXWTVWTLWPXPXGGCJFPOSVYCBTZCUWXGZGJQPMHTRAIBJGWMGFGJZQDPBJVYGMZCLEWXRCEBIAOVNYHJIKKCTGCWXFUHFJZKWXVCULDYITKFTKWPKCGVCWIQTPWVYQEBFKKQQNHNZTTWIRFLIASVFRPEODJRXGSPTCEKWPTGEESGMCGTTVVPLTFFJYCWWVNYHTZYRWHLOKUMUAWOKFPMVGBLTPVQNRDDSGGAWKWUKKPLKGCJXYOPPKPGONZTTICUJCHLSFKFTDBQNJTWUGDYNMVCKZTMFWCWHTWFFDJLOPUYAECHLQ!PGRUFYHMWPPRXFCDJCGOSFXMSUZGJQJLSXVPNHBG";

//Vigenere Encryption and Kasiski video extract
//char *cip = "UYEBVGMPFXAVUUAETPARWJCKHMUTBGUUAETPARWQKWECAPQNXLGMZGFPWTBCEGFZTGULUAIPPGOBTNNCZXITP";

//TRIGRAM SEARCH
    
    
    
    int l = 0;
    int d = 1;
    for (int i = 0; i < strlen(cip); i++)
    {
        if (l == 3){d++; i -= 2; l = 0;}
        l++;
    }
    //printf ("%d", d);
    //d is all possible 3 combos
   
   // occurances[d]
   // occurances[2] = 4 
  //means that the second trigram occurred 4 times
   
    char triArray[d][3];
    l = 0;
    int k = 0;
    for (int i = 0; i < strlen(cip); i++)
    {
        if(i == 0){triArray[k][0] = cip[i];
                   triArray[k][1] = cip[i+1];
                   triArray[k][2] = cip[i+2]; k++;}
        if (l == 3){ i -= 2; 
                     triArray[k][0] = cip[i];
                     triArray[k][1] = cip[i+1];
                     triArray[k][2] = cip[i+2]; k++;
                     l = 0;}
        l++;
    }

    
    //Refine repetitions
    k = 0;
    for (int i = 0; i < d; i++)
     {
          for (int j = i; j < d; j++)
          {
              if (triArray[i][0] != '@' && i != j){
              if (triArray[i][0] == triArray[j][0]
                  && triArray[i][1] == triArray[j][1]
                  && triArray[i][2] == triArray[j][2]) 
                    {triArray[j][0] = '@';triArray[j][1] = '@';triArray[j][2] = '@';k++;}}
          }
     }
    
    //printf("%d removed\n", k);
    //printf("%d new total\n", d-k);
    
    
 
    //print table
    /*
     for (int i = 0; i < d; i++)
     {
          for (int j = 0; j < 3; j++)
          {              
                  printf("%c", triArray[i][j]);
          }
             printf("--\n");
     }
     */
    
}
