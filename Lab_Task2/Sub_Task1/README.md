
# Task 1: AES Encryption Using Different Modes

## Text File
Miles to go, but we're almost home

## 1. CBC Model
openssl enc -aes-256-cbc -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task1\text.txt -out encrypted.txt

### Encrypted Text
Salted__g>ç*³ç>l!‡Ã×sËqŠSÁìV‘äQ²^”ÎjŒ\ÀßóS yo:µ¿ÆÄjô’‰c½‰‘²

## 2. ECB Model
openssl enc -aes-256-ecb -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task1\text.txt -out E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task1\encrypted.txt -K 00112233445566778899aabbccddeeff00112233445566778899aabbccddeeff

### Encrypted Text 
çŸ¼ñ³º6Q€Îk “
NÉÍN¬Ìáô˜Ï ®";†ýÉŒv§×˜’€O—ôŠb

## 3. CFB Model
openssl enc -aes-256-cfb -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task1\text.txt -out E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task1\encrypted.txt -K 00112233445566778899aabbccddeeff00112233445566778899aabbccddeeff -iv 0123456789abcdef0123456789abcdef

### Encrypted Text
mt”ûÒ•L'p†Õ|MUž5ÑLÆ‡ø•¶4Ø”^Ø



