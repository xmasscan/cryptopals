#include <iostream>
#include <map>
#include <string>

std::string hexToBin(std::string hexStr) {
  std::map<char, std::string> hexToBin{
      {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
      {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
      {'8', "1000"}, {'9', "1001"}, {'a', "1010"}, {'b', "1011"},
      {'c', "1100"}, {'d', "1101"}, {'e', "1110"}, {'f', "1111"}};

  char curr;
  std::string binStr = "";

  for (int i = 0; i < hexStr.size(); ++i) {
    curr = hexStr.at(i);
    binStr += hexToBin.at(curr);
  }

  return binStr;
}

std::string binToHex() { return ""; }

std::string hexTo64(std::string hexStr) { return ""; }
int main() {
  std::string hexStr = "49276d206b696c6c696e6720796f757220627261696e206c696b652"
                       "06120706f69736f6e6f7573206d757368726f6f6d";
  std::string hexBinStrExpect =
      "010010010010011101101101001000000110101101101001011011000110110001101001"
      "011011100110011100100000011110010110111101110101011100100010000001100010"
      "011100100110000101101001011011100010000001101100011010010110101101100101"
      "001000000110000100100000011100000110111101101001011100110110111101101110"
      "011011110111010101110011001000000110110101110101011100110110100001110010"
      "011011110110111101101101";
  std::string hexBinStr = hexToBin(hexStr);

  if (hexBinStrExpect == hexBinStr) {
    std::cout << "hexToBin correctly translates Hexadecimal into Binary!"
              << std::endl;
  } else {
    std::cout << "Failure. Did not correctly convert.";
  }

  std::cout << "test";
  return 0;
}
