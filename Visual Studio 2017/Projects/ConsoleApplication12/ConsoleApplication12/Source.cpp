#include <iostream>
#include <string>


class Crypto {
private: 
	std::string ctext;

public:
	std::string getctext(std::string ctext) {
		return ctext;
	}
	//XOR Encrypt
	std::string XOREncrypt(std::string ptext, char key) {
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += ptext[i] ^ key;
		}
		return ctext;
	}

	//XOR DEcrypt
	std::string XORDecrypt(char key) {
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			ptext += ctext[i] ^ key;
		}
		return ptext;
	}

	//Caesarian Encrypt Bounded
	std::string CaesarianEncrypt(std::string ptext, int key) {
		const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += alphabet[(alphabet.find(ptext[i] + key) % 26)];
		}
		return ctext;
	}

	//Caesarian Decrypt Bounded
	std::string CaesarianDecrypt(int key) {
		const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		std::string ptext = "";
		for (int i = 0; i < ptext.length(); i++) {
			int newindex = alphabet.find(ctext[i] - key);
			if (newindex < 0) {
				newindex = newindex + 26;
			}
			ptext += alphabet.find(newindex);
		}
		return ptext;
	}

	//Rot13 Encrypt&Decrypt
	std::string Rot13Encrypt(std::string ptext) {
		const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += alphabet[(alphabet.find(ptext[i] + 13) % 26)];
		}
		return ctext;
	}

	//Atbash Encrypt
	std::string AtbashEcrypt(std::string ptext) {
		const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			ctext += 'a' + 'z' - ptext[i];
		}
		return ctext;		
	}

	//AtbashDecrypt
	std::string AtbachDecrypt(std::string ctext) {
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			ptext += 'a' + 'z' - ctext[i];
		}
		return ptext;
	}

	//Vigenere Encrypt
	std::string VigenereEncrypt(std::string ptext, std::string key) {
		const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		ctext = "";
		for (int i = 0; i < ptext.length(); i++) {
			char ptextltr = ptext[i % 26];
			int ptextltrpos = alphabet.find(ptextltr);

			char keyltr = key[i%key.length()];
			int keyltrpos = alphabet.find(keyltr);

			int newpos = ptextltrpos + keyltrpos;
			ctext += alphabet[newpos];
		}
		return ctext;
	}

	//Vigenere Decrypt
	std::string VigenereDecrypt(std::string ctext, std::string key) {
		const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
		std::string ptext = "";
		for (int i = 0; i < ctext.length(); i++) {
			
			char ctextltr = ctext[i % 26];
			int ctextltrpos = alphabet.find(ctextltr);

			char keyltr = key[i%key.length()];
			int keyltrpos = alphabet.find(keyltr);

			int oldpos = ctextltrpos - keyltrpos;
			ptext += alphabet.find(oldpos);
		}
		return ptext;
	}

};

