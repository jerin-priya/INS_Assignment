#include <iostream>
#include <bitset>
#include <string>

int main() {
    
    std::string hash1_md5 = "9e107d9d372bb6826bd81d3542a419d6";
    std::string hash2_md5 = "9e107d9d372bb6826bd81d3542a419d6";

    std::string hash1_sha256 = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855";
    std::string hash2_sha256 = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855";

    std::string binary1_md5 = "";
    std::string binary2_md5 = "";
    std::string binary1_sha256 = "";
    std::string binary2_sha256 = "";

   
    for (char hexChar : hash1_md5) {
        int num = (hexChar >= '0' && hexChar <= '9') ? hexChar - '0' : hexChar - 'A' + 10;
        std::bitset<4> bin(num);
        binary1_md5 += bin.to_string();
    }

    for (char hexChar : hash2_md5) {
        int num = (hexChar >= '0' && hexChar <= '9') ? hexChar - '0' : hexChar - 'A' + 10;
        std::bitset<4> bin(num);
        binary2_md5 += bin.to_string();
    }

    for (char hexChar : hash1_sha256) {
        int num = (hexChar >= '0' && hexChar <= '9') ? hexChar - '0' : hexChar - 'A' + 10;
        std::bitset<4> bin(num);
        binary1_sha256 += bin.to_string();
    }

    for (char hexChar : hash2_sha256) {
        int num = (hexChar >= '0' && hexChar <= '9') ? hexChar - '0' : hexChar - 'A' + 10;
        std::bitset<4> bin(num);
        binary2_sha256 += bin.to_string();
    }

    
    int count_md5 = 0;
    int count_sha256 = 0;

    for (size_t i = 0; i < binary1_md5.length() && i < binary2_md5.length(); ++i) {
        if (binary1_md5[i] == binary2_md5[i]) {
            ++count_md5;
        }
    }

    for (size_t i = 0; i < binary1_sha256.length() && i < binary2_sha256.length(); ++i) {
        if (binary1_sha256[i] == binary2_sha256[i]) {
            ++count_sha256;
        }
    }

    std::cout << "Same bits in MD5: " << count_md5 << std::endl;
    std::cout << "Same bits in SHA-256: " << count_sha256 << std::endl;

    return 0;
}
