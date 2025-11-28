# FileEncryptionProject
File Encryption–Decryption Tool (C Project)
A simple and efficient file encryption and decryption tool written in C language.
This program demonstrates file handling, loops, character manipulation, and a basic Caesar Cipher
encryption algorithm.
Features:
- Encrypt any text file using Caesar shift (+3)
- Decrypt encrypted text files
- Works with any .txt file
- Fully written in C
- Works on Windows, Linux, & macOS
Encryption Logic:
encrypted_char = original_char + 3
original_char = encrypted_char - 3
How to Run:
1. Compile: gcc file_crypto.c -o file_crypto
2. Run (Windows): file_crypto.exe
3. Run (Linux/macOS): ./file_crypto
Example Workflow:
1. message.txt → "Hello this is my encryption project!"
2. secret.txt → encrypted output
3. original.txt → decrypted and restored text
License: MIT License
Author: Bhoumik Kumar D
