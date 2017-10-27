#include<iostream>
#include <string>




class Crypt {
private:
	std::string ctext;


public:
	std::string xorCrypt(std::string ptext, char key) {
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += ptext[i] ^ key;
		}
		return ctext;
	}

	std::string xorDecrypt(char key) {
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			ptext += ctext[i] ^ key;
		}
		return 0;
	}

	std::string CaesarianCrypt(std::string ptext, int key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += alphabet[(alphabet.find(ptext[i] + key) % 26)];
		}
		return ctext;
	}

	std::string CaesarianDecrypt(int key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			int index = alphabet.find(ctext[i] - key);
			while (index < 0) {
				index = index + 26;
			}
			ptext += alphabet[index];
		}
		return 0;

	}
	std::string AtbashCrypt(std::string ptext) {
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += 'a' + 'z' - ptext[i];
		}
		return ctext;
	}

	std::string VigenereCrypt(std::string ptext, std::string key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			char keyltr = key[i % key.length()];
			int keypos = alphabet.find(keyltr);

			char ptextltr = ptext[i % ptext.length()];
			int ptextpos = alphabet.find(ptextltr);

			int newpos = (keypos + ptextpos) % 26;
			ctext += alphabet[newpos];
		}
	}

	std::string VigenereDecrypt(std::string key) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			char keyltr = key[i%key.length()];
			int keypos = alphabet.find[keyltr];

			char ctextltr = ctext[i%ctext.length()];
			int ctextpos = alphabet.find(ctextltr);

			int oldpos = (ctextpos - keypos);
			while (oldpos < 0) {
				oldpos = oldpos + alphabet.length();
			}
			ptext += alphabet[oldpos];

		}
		return ptext;
	}

		

	

};