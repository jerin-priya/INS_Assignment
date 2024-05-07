
# Task-6: Keyed hash and HMAC 

## Create a Text File
This is a sample text for HMAC generation.

## Generate HMACs
## 1. HMAC-MD5:
openssl dgst -md5 -hmac "MySecretKey" E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task6\
text.txt

## 2. HMAC-SHA256:
openssl dgst -sha256 -hmac "AnotherSecretKey123" E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task6\text.txt

## 3. HMAC-SHA1:
openssl dgst -sha1 -hmac "Key123" E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task6\text.txt

## Key Size in HMAC
### Fixed Size Requirement: 
No, HMAC does not require a fixed-size key. The key can be of any length, and if it is longer than the block size of the underlying hash function, it is first hashed using that hash function.
### Why Variable Size Works:
 HMAC processes the key by padding it to the right with zeros to fit the block size of the hash function or hashing it if it's too long. Therefore, keys of any length are valid, and their security implications depend on the effectiveness and vulnerabilities of the hash function used.

