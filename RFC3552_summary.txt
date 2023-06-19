//RFC Security Guidelines (2003)

security can be divided into 2 parts:
Communication Security [COMSEC]
Systems Security [SYSSEC]



//COMSEC

>Confidentiality
(privacy when using data)

>Data Integrity 
(data sent matches the data recieved)

>Peer Entity Authentication
(the recipient of data is the one intended)


		:: A T T A C K S ::

//DENIAL 0F SERVCE
These are attacks designed to consume machine resources or crash systems.
Easy to mount but difficult to stop.


//REPLAY ATTACKS
The attacker records a sequence of messages off of the wire and plays them back to the party which originally received them.


//BLIND ATTACKS
Sending forged packets but not receiving the responses.


//PASSIVE ATTACKS
These are for attackers with limited control and with only read priviledges of a network



//ACTIVE ATTACKS
These are for attackers with write priviledges within the network


//OFFINE CRYPTOGRAPHIC ATTTACKS
These refer to recovering data processed by the victim's secret key and then mounting a cryptanalytic attack on that key.


		-"Foiling the Cracker: A Survey of and Improvements to Password Security", 1990.
		- isaac.cs.berkeley.edu/isaac/wep-draft.pdf
		-"On Internet Authentication", RFC 1704, October 1994.
		-"Intercepting Mobile Communications: The Insecurity of 802.11". 
		-"Telnet Protocol Specification", STD 8, RFC 854, May 1983.
		-"Post Office Protocol - Version 3", STD 53, RFC 1939, May 1996
		-"Network News Transfer Protocol", RFC 977, February 1986.
		-"TCP SYN Flooding and IP Spoofing Attacks", CERT Advisory CA-1996-21,
		-"A Weakness in the 4.2 BSD UNIX TCP/IP Software", AT&T 1985
		-"A One-Time Password System", STD 61, RFC 2289, February 1998.
		-"Domain Name System Security Extensions", RFC 2535, March 1999
		

		:: A U T H E N T I C A TI O N S ::
		

//CHALLENGE RESPONSE
First the host and the user share some secret (shared keys or a password)
This can be done by a trusted third party such as a Key Distribution Center (KDC) like KERBEROS.
Then in order to authenticate the user, the host presents the user with a challenge.
Both the secret and the challenge are then retrieved by the host for verification 

//ONE TIME PASSWORD
Greater security than USERNAME/PASSWORD.
SecureID and DES Gold are variants of this scheme.
The user is provided with a list of passwords, which must be used once and in sequence 

//IPsec
In the case of IPv6 being used both IP Authentication Header and IP Encapsulation Security are mandatory.
Refer to : Bellovin, S., "Guidelines for Mandating the Use of IPsec",Work in Progress.


//SSL & TLS
Provide channel security for a TCP connection at layer 6 (Application)
and they both run over TCP however TLS is susceptible to IP layer attacks that IPsec is not.

