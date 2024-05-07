
# Task 2: Encryption mode - ECB vs CBC


## 1. ECB Model
openssl enc -aes-256-ecb -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task2\image.bmp -out E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task2\encrypted.bmp -K 00112233445566778899aabbccddeeff00112233445566778899aabbccddeeff

### View the Encrypted Image
Try to open the resulting encrypted.bmp using any standard image viewer. You should see an image that looks visually corrupted but still opens, displaying the inherent weaknesses of ECB encryption.



## 2. CBC Model
openssl enc -aes-256-cbc -e -in E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task2\image.bmp -out E:\7th_Semester\INS\INS_Assignment\Lab_Task2\Sub_Task2\encrypted.bmp -K 00112233445566778899aabbccddeeff00112233445566778899aabbccddeeff -iv 0123456789abcdef0123456789abcdef

### View the Encrypted Image
Try to open the resulting encrypted.bmp using any standard image viewer. You should see an image that looks visually corrupted but still opens, displaying the inherent weaknesses of ECB encryption.





