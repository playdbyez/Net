

#include  <stdio.h>
#include <math.h>

int main()
{
 
    // 2⁴⁰ =  1099511627776
    // 40 bit key
    //int k[40] = {1,0,9,9,5,1,1,6,2,7,7,7,6};
    //Key's binnary length is 40 
    //Key's 41 digit binary value
    //"10000000000000000000000000000000000000000";
    
    char *m = "helloworld";
    int k [8]= {1,2,3,4,5,6,7,8};
   int s[256];

 // malloc to one bit per value [TODO] 
    int *ck; 
    printf("%d\n\n", strlen(m));
    // Array S initiallization
    for (int i = 0; i < 256; i++)
    {  s[i] = i; }
    
    // Array S visualization
    
    
    //KSA
    //[OK]
    int j = 0;
    int p = 0;
    int n = 0; // mod keylength
    for (int i = 0; i < 256; i++)
    { 
        j += s[i] + k[n % 8];
        j = j % 256;
        n++;
        
        p = s[i];
        s[i] = s[j];
        s[j] = p;
        
    }
    
    
    //PRGA
    
    
    
    

    for (int i = 0; i < 256; i++)
    { 
        if (i % 16 == 0 && i != 0){printf("\n");} 
        printf("%3X", s[i]); 
    }
    
    
    
}



 /* 
 key = 12345678
 Array S
 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F
 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F
 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F
 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F
 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F
 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F
 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F
 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F
 A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF
 B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF
 C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF
 D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF
 E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF
 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE FF    

 Array S post-KSA
  1 48 B3  C 15 53 2D A6 DD 56 27 66 AB 7E 93 D1
 7B CE E3 51 7D 2B 3A 16 FC 1E  F B4 EA F4 8D 40
 3D 49 86 B5 75 BC 33 65 F0 E5 9A 70 63 5F 6A C0
 73 8E 7F 28 96 5E BE 30 A7 E2 3B 41 5D 89 D2 D8
 74 FB 18 37 BB 50 21 B8 4D E7 58 B2 D6  9 90 67
 C8 54 A1 1F 98 AC 25 34 2E  B 2A 6B 6D 1A  8 9C
 B7 92 C5 6F DB C2 55 B0 47 C1 87  A A3 20 BF D5
 1D 8F 29  E A9 81 A4 88 71 FA 91 44 7A 79 F3 AF
 F2 4E 13 DE 57 DA 31 42 E1 77 AD 2C CD 78 36 BD
 9D CC FD EF D4 97 B1  7 A8 EC E6 EE 52 83 F9 A0
 82 B6 D0 8C  6 FE 3E 2F D9 9F A2 AE E0 F6 94  0
 12 F7 8A 39 10 E4 85 61 D7 F1  5 D3 DC 9E A5 EB
 26 68 17 11 3C DF 7C  3 5B ED 76  4 E8  2 C4 24
 1C AA 4F C9 45 62 F5 14 C3 CA 64 95 4A 19 CF BA
 9B 46 35 CB 5A B9 6C 4C 8B C7 C6 32 3F 84 FF 6E
  D 80 43 22 23 4B 38 E9 5C 99 60 59 72 F8 69 1B
 */


