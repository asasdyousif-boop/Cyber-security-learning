\\Caesar cipher in c++

#include <iostream>
#include <string>
using namespace std;

\\Encryption 

string encrypt(string text, int shift) {
   string result = "";
   for (int i = 0; i < text.length(); i++) {
       char c = text[i];
       if (isupper(c)) {
           result += char(int(c + shift - 65) % 26 + 65);
       }
       else {
cout << "error.\n";
           exit(1);
       }
   }
   return result;
}
\\Decryption

string decrypt(string text, int shift) {
   return encrypt(text, 26 - shift);
}
int main() {
   string text;
   int shift;
cout << "Enter the text: ";
cin >> text;
cout << "Enter the (shift): ";
cin >> shift;
   string encrypted = encrypt(text, shift);
   string decrypted = decrypt(encrypted, shift);
cout << "\nCipher Text:  " << encrypted;
cout << "\nPlain Text: " << decrypted << endl;
}

