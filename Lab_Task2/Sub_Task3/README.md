
# Task-3: Encryption mode – corrupted cipher text 

## Practical Experimentation:
To verify those predictions, follow these steps using OpenSSL to encrypt, manually corrupt, and then decrypt the data:

### 1. Create a Text File:
This is a simple text file that needs to be at least 64 bytes long for the encryption exercise.

### 2. Encrypt the File:

#### ECB:  
openssl enc -aes-128-ecb -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task3\text.txt -out encrypted_ecb.bin -K 00112233445566778899aabbccddeeff

#### CBC:
openssl enc -aes-128-cbc -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task3\text.txt -out E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task3\encrypted_cbc.bin -K 00112233445566778899aabbccddeeff -iv 0102030405060708abcdefabcdefabcd


#### CFB:
openssl enc -aes-128-cfb -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task3\text.txt -out encrypted_cfb.bin -K 00112233445566778899aabbccddeeff -iv 0102030405060708abcdefabcdefabcd


#### OFB:
openssl enc -aes-128-ofb -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task3\text.txt -out E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task3\encrypted_ofb.bin -K 00112233445566778899aabbccddeeff -iv 0102030405060708abcdefabcdefabcd


### 3. Corrupt the File:
Using a hex editor, corrupting the 30th byte of each file.

### 4. Decrypt the File:
Decrypt each corrupted file using the same settings:

openssl enc -aes-128-ecb -d -in encrypted_ecb.bin -out decrypted_ecb.txt -K 00112233445566778899aabbccddeeff


