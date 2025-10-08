//sha-256 using openSSL
#include<iostream>
// #include<openssl/sha.h>
#include<iomanip>
#include<sstream>
#include<string>
#include<openssl/evp.h>
#include<openssl/err.h>
using namespace std;

string sha256(const string& input){
    EVP_MD_CTX *context = EVP_MD_CTX_new();
    if (!context) {
        throw runtime_error("Failed to create EVP_MD_CTX");
    }

    //this part is for selecting the algorithm (in our case sha-256)
    if (EVP_DigestInit_ex(context, EVP_sha256(), nullptr) != 1) {
        EVP_MD_CTX_free(context);
        throw runtime_error("EVP_DigestInit_ex failed");
    }

    if (EVP_DigestUpdate(context, input.c_str(), input.size()) != 1) {
        EVP_MD_CTX_free(context);
        throw runtime_error("EVP_DigestUpdate failed");
    }

    //retrieving the result:
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int length = 0;
    if (EVP_DigestFinal_ex(context, hash, &length) != 1) {
        EVP_MD_CTX_free(context);
        throw runtime_error("EVP_DigestFinal_ex failed");
    }

    EVP_MD_CTX_free(context);

    //converting to hex string:
    stringstream ss;
    for (int i = 0; i < length; i++) {
        ss << hex <<setw(2) << setfill('0') << (int)hash[i];
    }
    return ss.str();
}

int main(){
    string input = "hello world!";
    string hash = sha256(input);
    cout << "input: " << input << "\nsha-256 hash: " << hash << endl;
    return 0;
}

