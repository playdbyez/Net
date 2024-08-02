
[] Basic Symmetric Cipher []

Cipher is a means of turning plaintext into ciphertext under the control of a key.  
Within a symmetric scheme the key must be known by both communicating parties only. 

Security of the cipher depends on how hard it is to perfrom an exhaustive key search against it.  
Symmetric schemes usually try to hide the underlying statistics of the language used within them.  
Since it is possible to turn one plaintext into two ciphers or more, the ammount of ciphers present must be bigger or  equal to the mount of plaintext characters.  
Because it is possible to have used a different key per character, the key length must be bigger or equal to the ammount of ciphers  

.Encryption  
m = plainText  
e = function  
k = key  
c = cipherText  
 
c = e^k(m)  
 
 
.Decryption  
c = cipherText   
e = function  
k = key  
m = plainText   
 
m = d^k(c)  



 ############::Chosen Plaintext Attack::##############  
Consists of the attacker obtaining a cipher equivalent
of his own message directly from the admin.



############::Implementation Attacks ::##############
A Side channel attack would consist of employing an osciloscope against a microprocessor's pins
and recording the ondulation  or observe  the timing behaviour in hope to decode the key being used within the chip.


############::KeySearch::############## 
Within symmetric ciphers we consider its size in bits.

I.E.
cipher key size = 64b its
solution = 2^64 bits
roughly = 2^88

If the key manages a lookup table, we compare its character to 
its possibility of being said character from the alphabet (26 letters) granting us a 26! factorial.
cipher[0] = 1 out of 26 letters of the alphabet
cipher[1] = 1 out of 25 letters of the alphabet
cipher[2] = 1 out of 24 letters of the alphabet ...


https://www.youtube.com/watch?v=wlSG3pEiQdc
