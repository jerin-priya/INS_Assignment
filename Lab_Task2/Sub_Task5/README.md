
# Task-5: Generating message digest

##  Create a Text File:
 This is a sample text for generating message digests.

 ## Generate Message Digests:

 ### MD5 Digest:
 openssl dgst -md5 E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task5\text.txt

 ### SHA-1 Digest:
 openssl dgst -sha1 E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task5\text.txt

 #### This will generate a SHA-1 hash of the same file.

 ### SHA-256 Digest:
 openssl dgst -sha256 E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task5\text.txt

 #### This will generate a SHA-256 hash, providing a longer and more secure hash value compared to MD5 and SHA-1.

## Hash_Output 
MD5(E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task5\text.txt)= 938cb816649ab83ebde09042b09e42ef

SHA1(E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task5\text.txt)= f2ff2c9a133772fc12ba4809723a54f24e822bc1

SHA2-256(E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task5\text.txt)= e25634405cae635ad06f811076c00fe816aace2ff001cd2de5743aa95b2e8535

 ## Observations and Explanations
### Hash Length:
### MD5:
 Produces a 128-bit (16-byte) hash value. This shorter hash length contributes to its faster computation but also to its lower security level.
### SHA-256: 
Outputs a 256-bit (32-byte) hash value. It provides a good balance between speed and security, making it suitable for many security-critical applications.
### SHA-512: 
Generates a 512-bit (64-byte) hash value. This longer hash provides enhanced security, making it ideal for environments where protection against extremely sophisticated attacks is required.

## Security Levels:
### MD5: 
No longer considered secure for cryptographic purposes due to vulnerabilities that allow for practical collision attacks. It is not recommended for new security systems and is primarily used for checksums or less security-critical applications.
### SHA-256: 
Offers strong security properties and is resistant to collision attacks. It is widely used in various security applications and protocols, including SSL/TLS and modern web applications.
### SHA-512: 
Provides even higher security levels than SHA-256 due to its longer hash length and more complex underlying operations. It is particularly advantageous in environments where the highest levels of security are necessary.

##Speed:
### MD5:
 Known for its speed and efficiency in processing data. This makes it suitable for non-security applications like file integrity checks where high speed is crucial.
### SHA-256: 
Slower than MD5 due to its more complex algorithms designed to enhance security. However, it still offers a good speed-to-security ratio, suitable for a wide range of applications.
### SHA-512: 
Generally the slowest among the three due to its longest hash values and more complex calculations. Despite its slower performance, it is preferred when security is more critical than speed.

## Recommendations:
### MD5: 
Should be avoided in any application where security against tampering and forgery is a concern. Best used for quick checksums or legacy applications where security is not the primary focus.
### SHA-256: 
Highly recommended for most new applications requiring cryptographic hash functions. It provides robust security without compromising too much on speed.
### SHA-512: 
Ideal for high-security environments where the potential impact of an attack is significant. Despite its slower operation, its security benefits outweigh the speed disadvantage.

## Conclusion
This analysis of MD5, SHA-256, and SHA-512 reveals significant differences in their suitability for various applications based on their speed, security level, and hash length. Users should select a hash function appropriate for their specific needs, with a clear preference for SHA-256 or SHA-512 in any security-sensitive context.






