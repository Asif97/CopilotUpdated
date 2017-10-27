#include<iostream>
#include<string>

class Crypt {
private:
	std::string ctext;
public:
	Crypt() {};
	//XOR Encrypt
	std::string xorCrypt(std::string ptext, char key) {
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += ptext[i] ^ key;
		}
		return 0;
	}
	//XOR Decrypt
	std::string xorDecrypt(char key) {
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			ptext += ctext[i] ^ key;
		}
		return ptext;
	}

	//Caesarian Encrypt
	std::string CaesarianCrypt(std::string ptext, int key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += alphabet[(alphabet.find(ptext[i] + key) % alphabet.length())];
		}
		return ctext;
	}
	//Caesarian Decrypt
	std::string CaesarianDecrypt(std::string ctext,int key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		std::string ptext = "";
		for (int i = 0; i < ptext.length(); i++) {
			int newindex = alphabet.find(ctext[i] - key);
			while (newindex < 0) {
				newindex = newindex + 26;
			}
			ptext += alphabet[newindex];
		}
		return ptext;
	}

	//ROT13 Encryption & Decryption
	std::string ROT13Crypt(std::string ptext) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += alphabet[alphabet.find(ptext[i] + 13) % 26];
		}
		return ctext;
	}

	//Atbash Encryption & Decryption
	std::string AtbashCrypt(std::string ptext) {
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext = 'a' + 'z' - ptext[i];
		}
		return ctext;
	}

   //Vigenere Encryption
	std::string VigenereEncrypt(std::string ptext, std::string key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			char ptextltr = ptext[i%ptext.length()];
			int ptextpos = alphabet.find[ptextltr];

			char keyltr = key[i%key.length()];
			int keypos = alphabet.find[keyltr];

			int newpos = keypos + ptextpos;
			ctext += alphabet[newpos];
		}
	}
	//Vigenere Decryption
	std::string VigenereDecrypt(std::string key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			char ctextltr = ctext[i % 26];
			int ctextpos = alphabet.find(ctextltr);

			char keyltr = key[i % 26];
			int keypos = alphabet.find(keyltr);

			int oldpos = (ctextpos - keypos);
			if (oldpos < 0) {
				oldpos = oldpos + 26;
			}
			ptext += alphabet[oldpos];

		}


	}


	

};


int main() {
	Crypt myobj;
	myobj.CaesarianCrypt("ab", 2);
	std::cout << myobj.CaesarianCrypt("ab", 2) << "---->" << myobj.CaesarianDecrypt(myobj.CaesarianCrypt("ab", 2), 2) << std::endl;


	return 0;
}