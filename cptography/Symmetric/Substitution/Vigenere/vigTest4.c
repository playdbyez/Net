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
    
    
    // all possible 3 combos [ int d]
    int l = 0;
    int d = 1;
    for (int i = 0; i < strlen(cip); i++)
    {
        if (l == 3){d++; i -= 2; l = 0;}
        l++;
    }
    //printf ("%d", d);
    
   
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

    
    //Assert repetitions
    k = 0;
    l = 0;
    int t = 1;
    
    for (int i = 0; i < d; i++)
     {
          for (int j = i; j < d; j++)
          {
              if (triArray[i][0] != '@' && i != j){  if (triArray[i][0] == triArray[j][0] && triArray[i][1] == triArray[j][1] && triArray[i][2] == triArray[j][2]) 
                                                                                    { triArray[j][0] = '@';triArray[j][1] = '@';triArray[j][2] = '@';k++; t++; } } 
          }
        if(l < t) {l = t;}
        t = 1;
     }
    
    //printf("%d removed\n", k);
    //printf("%d new total\n", d-k);
    //printf("%d max repetition", l);
    
    
    int posar[d-k][l];
    char trios[d-k][3];
    t = 0;
     
    // non-repeating trios
    for (int i =0; i < d; i++){ if (triArray[i][0] != '@') {
                                                            trios[t][0] = triArray[i][0];
                                                            trios[t][1] = triArray[i][1];
                                                            trios[t][2] = triArray[i][2];
                                                            t++;
                                                           }  }
    
    t = 0;
    // positions of repeats
    //something off heree ( ﹁﹁) 
    for (int i =0; i <  sizeof(trios) / sizeof(trios[0]); i++){
    for (int j =0; j < strlen(cip); j++){ 
                                    if (i != j){
                                               if (trios[i][0] == cip[j] && trios[i][1] == cip[j+1] && trios[i][2] == cip[j+2]){
                                                   posar[i][t] = j; printf("%d [%d]", posar[i][t], t); t++; 
                                                                                                                               }
                                               }
    
      }
        printf("\n");
        t = 0;
    }
 
    //print table
    /*
     for (int i = 0; i < sizeof(trios) / sizeof(trios[0]); i++)
     {
          for (int j = 0; j < 3; j++)
          {              
                  printf("%c", trios[i][j]);
          }
             printf("--\n");
     }
     
     
     for (int i = 0; i < sizeof(posar) / sizeof(posar[0]); i++)
     {
          for (int j = 0; j < sizeof(posar[0]); j++)
          {              
                  printf("%d", posar[i][j]);
          }
             printf("\n");
     }
     */
    
}
