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
    
    int l = 0;
    int d = 1;
    int n = 0;
    
    
    //trigram search
    int *po;
    po = malloc (sizeof(int)*3);
    
    
    printf ("Trigram\t\tOccurs\t\tGap(s)\n");
    
     for (int i = 0; i < strlen(cip); i++)
    {
          for (int j = i+1; j < strlen(cip); j++)
          {
              if (cip[i] == cip[j] && cip[i+1] == cip[j+1] && cip[i+2] == cip[j+2] )
              { d++;
               
               
               //Positions array 
               // Retains repeat values that occur sparsely but no consecutive repetitions
               if (n >2) {po = realloc (po, sizeof(int) * n);} 
               if (n == 0 ){ po[n] = (j+2) - (i+2);}
               if (n > 0 && po[n-1] != ((j+2) - (i+2))){po[n] = (j+2) - (i+2);}
                n++;
              }
          
          }
         
         
         if (d>1){printf ("%c%c%c\t\t%d",cip[i],cip[i+1],cip[i+2],d);
                  printf("\t\t");
                  for ( int k = 0; k < n; k++){ printf("%d ", po[k]);}
                  printf("\n");
                  }
         n = 0;
         
     d =1;
    }
    free(po);
    
    
    

    
    
    
    //Porcamente feito
    //Need one array for trigrams
    //one array for occurs
    
}
