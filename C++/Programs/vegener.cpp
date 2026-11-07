//vegener cipher in c++

#include <iostream> 
#include <string> 
using namespace std; 
 
string encrypt(string text, string key) { 
string result = ""; 
int textLen = text.length(); 
int keyLen = key.length();

for (int i = 0; i < textLen; i++) {
char c = text[i];
 if (isupper(c)) {
char k = key[i % keyLen];
result += char(((c - 'A') + (k - 'A')) % 26 + 'A'); 
}   
else { 
cout << "error\n"; 
exit(1);
}
return result;
}

\\Decryption

string decrypt(string text, string key) { 
string result = ""; 
int textLen = text.length(); 
int keyLen = key.length(); 

for (int i = 0; i < textLen; i++) { 
char c = text[i]; 
char k = key[i % keyLen]; 
result += char((c - k + 26) % 26 + 'A'); 
} 
return result; 
} 

int main() { 
string text, key; 
cout << "Enter the text (capital letters only): "; 
cin >> text; 
cout << "Enter the key (capital letters only): "; 
cin >> key; 

string encrypted_text = encrypt(text, key); 
string decrypted_text = decrypt(encrypted_text, key); 

cout <<"\n Cipher Text: "<<encrypted_text<<endl;
cout <<"\n Plain Text: "<<decrypted_text;
return 0; 
} 

