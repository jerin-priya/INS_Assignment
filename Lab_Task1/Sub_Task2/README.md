
# Substitution Cipher Decryption Tool
## Project Overview
This repository contains a C++ program designed to analyze and possibly decrypt messages encrypted with a simple substitution cipher. The program employs frequency analysis, comparing letter frequencies in the ciphertext with those typical in the English language to suggest potential decryptions.

## Description
A substitution cipher is a method of encryption by which units of plaintext are replaced with ciphertext according to a regular system; each unit of plaintext (e.g., a letter) is replaced with another unit. The challenge of breaking this type of cipher without a key involves analyzing the frequency of each letter in the encrypted message and comparing it with the known frequency of letters in the language of the original message.

## Features
Frequency Analysis: Calculates and displays the frequency of each letter in the given ciphertexts.
Comparison with English Frequencies: Assists in identifying possible plaintext letters by comparing calculated frequencies with typical English letter frequencies.

## Results
### Example Output
When provided with two sample ciphertexts, the tool outputs the following frequency analysis:

Frequencies for Cipher-1:
a: 7.58%
b: 0.52%
c: 2.62%
...
z: 0.42%

Frequencies for Cipher-2:
a: 8.33%
b: 1.45%
c: 3.10%
...
z: 0.15%

## Analysis
Cipher-1 and Cipher-2 display distinct frequency patterns which can be mapped against standard English frequency distributions to hypothesize the possible plaintext characters. The results demonstrate that some ciphers, depending on their construction and the length of the text, might align more closely with English frequency distributions, making them easier to hypothetically decrypt.

