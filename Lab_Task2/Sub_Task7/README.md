
# Task – 7: Keyed hash and HMAC

## Create a Text File
In today's rapidly evolving world, the future of technology holds immense possibilities. As we stand on the brink of the next technological revolution, several emerging trends are set to redefine the way we live, work, and interact.

## Generate the Hash Value H1
1. Using OpenSSL to generate the hash for this file using both MD5 and SHA-256. Here are the commands:

openssl dgst -md5 E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task7\text.txt

openssl dgst -sha256 E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task7\text.txt

2. Recording the output of these commands as H1 for MD5 and H1 for SHA-256.

## Modify the File by Flipping One Bit
Using a HxD (if on Windows) to flip a bit in the file. Open text.txt, change one bit in the file, and save it as modified.txt

## Generate the Hash Value H2
1. Generating the hash for the modified file using the same commands:

openssl dgst -md5 E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task7\modified

openssl dgst -sha256  E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task7\modified

2. Recording the output as H2 for MD5 and H2 for SHA-256.

## Observe the Changes
Compare H1 and H2 for both hash algorithms. Notice how a small change (one bit) affects the entire hash value, illustrating the avalanche effect.

## Write a Short Program to Count How Many Bits are the Same Between H1 and H2
I used a simple c++ script to count the number of bits that are the same between the two hash values and find the output which i attached in the Sub_Task7 portion



