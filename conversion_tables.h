#include <string>
#include <iostream>
#include <vector>
#include <fstream>

std::string encode(const int input) {
  std::string integer_string = std::to_string(input);
  std::string output_string;
 
  if (integer_string[0] == '0') {output_string.push_back(33);} 
else if (integer_string[0] == '1') {output_string.push_back(34);} 
else if (integer_string[0] == '2') {output_string.push_back(35);} 
else if (integer_string[0] == '3') {output_string.push_back(36);} 
else if (integer_string[0] == '4') {output_string.push_back(37);} 
else if (integer_string[0] == '5') {output_string.push_back(38);} 
else if (integer_string[0] == '6') {output_string.push_back(39);}
else if (integer_string[0] == '7') {output_string.push_back(40);} 
else if (integer_string[0] == '8') {output_string.push_back(41);}
else if (integer_string[0] == '9') {output_string.push_back(42);}

for (int i = 1; i < integer_string.length(); i++) {
  if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '9' ) {output_string.push_back(0); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '8' ) {output_string.push_back(1); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '7' ) {output_string.push_back(2); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '6' ) {output_string.push_back(3); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '5' ) {output_string.push_back(4); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '4' ) {output_string.push_back(5); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '3' ) {output_string.push_back(6); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' && integer_string[i+2] == '2' ) {output_string.push_back(7); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '0' && integer_string[i+2] == '5' ) {output_string.push_back(14); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '0' && integer_string[i+2] == '4' ) {output_string.push_back(15); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '0' && integer_string[i+2] == '3' ) {output_string.push_back(16); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '0' && integer_string[i+2] == '2' ) {output_string.push_back(17); i+=2;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '0' && integer_string[i+2] == '0' ) {output_string.push_back(18); i+=2;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '9' ) {output_string.push_back(19); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '8' ) {output_string.push_back(20); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '7' ) {output_string.push_back(21); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '6' ) {output_string.push_back(22); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '5' ) {output_string.push_back(23); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '4' ) {output_string.push_back(24); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '3' ) {output_string.push_back(25); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '2' ) {output_string.push_back(26); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '1' ) {output_string.push_back(27); i++;} 
else if (integer_string[i] == '9' && integer_string[i+1] == '0' ) {output_string.push_back(28); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '9' ) {output_string.push_back(29); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '8' ) {output_string.push_back(30); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '7' ) {output_string.push_back(31); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '4' ) {output_string.push_back(43); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '3' ) {output_string.push_back(44); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '2' ) {output_string.push_back(45); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '1' ) {output_string.push_back(46); i++;} 
else if (integer_string[i] == '8' && integer_string[i+1] == '0' ) {output_string.push_back(47); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '9' ) {output_string.push_back(48); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '8' ) {output_string.push_back(49); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '7' ) {output_string.push_back(50); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '6' ) {output_string.push_back(51); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '5' ) {output_string.push_back(52); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '4' ) {output_string.push_back(53); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '3' ) {output_string.push_back(54); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '2' ) {output_string.push_back(55); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '1' ) {output_string.push_back(56); i++;} 
else if (integer_string[i] == '7' && integer_string[i+1] == '0' ) {output_string.push_back(57); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '9' ) {output_string.push_back(58); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '8' ) {output_string.push_back(59); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '7' ) {output_string.push_back(60); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '6' ) {output_string.push_back(61); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '5' ) {output_string.push_back(62); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '4' ) {output_string.push_back(63); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '3' ) {output_string.push_back(64); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '2' ) {output_string.push_back(65); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '1' ) {output_string.push_back(66); i++;} 
else if (integer_string[i] == '6' && integer_string[i+1] == '0' ) {output_string.push_back(67); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '9' ) {output_string.push_back(68); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '8' ) {output_string.push_back(69); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '7' ) {output_string.push_back(70); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '6' ) {output_string.push_back(71); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '5' ) {output_string.push_back(72); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '4' ) {output_string.push_back(73); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '3' ) {output_string.push_back(74); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '2' ) {output_string.push_back(75); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '1' ) {output_string.push_back(76); i++;} 
else if (integer_string[i] == '5' && integer_string[i+1] == '0' ) {output_string.push_back(77); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '9' ) {output_string.push_back(78); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '8' ) {output_string.push_back(79); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '7' ) {output_string.push_back(80); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '6' ) {output_string.push_back(81); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '5' ) {output_string.push_back(82); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '4' ) {output_string.push_back(83); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '3' ) {output_string.push_back(84); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '2' ) {output_string.push_back(85); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '1' ) {output_string.push_back(86); i++;} 
else if (integer_string[i] == '4' && integer_string[i+1] == '0' ) {output_string.push_back(87); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '9' ) {output_string.push_back(88); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '8' ) {output_string.push_back(89); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '7' ) {output_string.push_back(90); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '6' ) {output_string.push_back(91); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '5' ) {output_string.push_back(92); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '4' ) {output_string.push_back(93); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '3' ) {output_string.push_back(94); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '2' ) {output_string.push_back(95); i++;} 
else if (integer_string[i] == '3' && integer_string[i+1] == '1' ) {output_string.push_back(96); i++;}  
else if (integer_string[i] == '3' && integer_string[i+1] == '0' ) {output_string.push_back(97); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '9' ) {output_string.push_back(98); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '8' ) {output_string.push_back(99); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '7' ) {output_string.push_back(100); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '6' ) {output_string.push_back(101); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '5' ) {output_string.push_back(102); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '4' ) {output_string.push_back(103); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '3' ) {output_string.push_back(104); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '2' ) {output_string.push_back(105); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '1' ) {output_string.push_back(106); i++;} 
else if (integer_string[i] == '2' && integer_string[i+1] == '0' ) {output_string.push_back(107); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '9' ) {output_string.push_back(108); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '8' ) {output_string.push_back(109); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '7' ) {output_string.push_back(110); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '6' ) {output_string.push_back(111); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '5' ) {output_string.push_back(112); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '4' ) {output_string.push_back(113); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '3' ) {output_string.push_back(114); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '2' ) {output_string.push_back(115); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '1' ) {output_string.push_back(116); i++;} 
else if (integer_string[i] == '1' && integer_string[i+1] == '0' ) {output_string.push_back(117); i++;} 
else if (integer_string[i] == '9' ) {output_string.push_back(118);} 
else if (integer_string[i] == '8' ) {output_string.push_back(119); } 
else if (integer_string[i]  == '7' ) {output_string.push_back(120); } 
else if (integer_string[i]  == '6' ) {output_string.push_back(121); } 
else if (integer_string[i] == '5' ) {output_string.push_back(122); } 
else if (integer_string[i] == '4' ) {output_string.push_back(123); } 
else if (integer_string[i] ==  '3' ) {output_string.push_back(124); }
else if (integer_string[i] == '2' ) {output_string.push_back(125); } 
else if (integer_string[i] ==  '1' ) {output_string.push_back(126); }  
else if (integer_string[i] ==  '0' ) {output_string.push_back(127); }  
}

  return output_string;
}

int decode(const std::string& input) {
std::string integer_string {""}; 
switch(input[0]) {
  case 33: integer_string += "0"; break;
  case 34: integer_string += "1"; break;
  case 35: integer_string += "2"; break;
  case 36:  integer_string += "3";break;
  case 37:  integer_string += "4";break;
  case 38:  integer_string += "5";break;
  case 39: integer_string += "6"; break;
  case 40: integer_string += "7"; break;
  case 41: integer_string += "8"; break;
  case 42: integer_string += "9"; break;
}


 for (int i = 1; i < input.length(); i++) {
switch (input[i])  {
  case 0: integer_string += "119"; break;
  case 1: integer_string += "118"; break;
  case 2:  integer_string += "117";break;
  case 3:  integer_string += "116";break;
  case 4:  integer_string += "115";break;
  case 5: integer_string += "114"; break;
  case 6: integer_string += "113"; break;
  case 7: integer_string += "112"; break;
  case 14:  integer_string += "105";break;
  case 15: integer_string += "104"; break;
  case 16: integer_string += "103"; break;
  case 17: integer_string += "102"; break;
  case 18: integer_string += "100"; break;
  case 19: integer_string += "99"; break;
  case 20: integer_string += "98"; break;
  case 21:  integer_string += "97";break;
  case 22:  integer_string += "96";break;
  case 23:  integer_string += "95";break;
  case 24: integer_string += "94"; break;
  case 25: integer_string += "93"; break;
  case 26: integer_string += "92"; break;
  case 27: integer_string += "91"; break;
  case 28: integer_string += "90"; break;
  case 29: integer_string += "89"; break;
  case 30:  integer_string += "88";break;
  case 31:  integer_string += "87";break;
  case 43: integer_string += "84"; break;
  case 44: integer_string += "83"; break;
  case 45: integer_string += "82"; break;
  case 46: integer_string += "81"; break;
  case 47: integer_string += "80"; break;
  case 48: integer_string += "79"; break;
  case 49: integer_string += "78"; break;
  case 50:  integer_string += "77";break;
  case 51:  integer_string += "76";break;
  case 52:  integer_string += "75";break;
  case 53: integer_string += "74"; break;
  case 54: integer_string += "73"; break;
  case 55: integer_string += "72"; break;
  case 56: integer_string += "71"; break;
  case 57: integer_string += "70"; break;
  case 58: integer_string += "69"; break;
  case 59:  integer_string += "68";break;
  case 60:  integer_string += "67";break;
  case 61:  integer_string += "66";break;
  case 62:  integer_string += "65";break;
  case 63: integer_string += "64"; break;
  case 64: integer_string += "63"; break;
  case 65: integer_string += "62"; break;
  case 66: integer_string += "61"; break;
    case 67: integer_string += "60"; break;
  case 68: integer_string += "59"; break;
  case 69:  integer_string += "58";break;
  case 70:  integer_string += "57";break;
  case 71:  integer_string += "56";break;
  case 72:  integer_string += "55";break;
  case 73: integer_string += "54"; break;
  case 74: integer_string += "53"; break;
  case 75: integer_string += "52"; break;
  case 76: integer_string += "51"; break;
  case 77: integer_string += "50"; break;
  case 78: integer_string += "49"; break;
  case 79:  integer_string += "48";break;
  case 80:  integer_string += "47";break;
  case 81:  integer_string += "46";break;
  case 82: integer_string += "45"; break;
  case 83: integer_string += "44"; break;
  case 84: integer_string += "43"; break;
  case 85: integer_string += "42"; break;
  case 86: integer_string += "41"; break;
  case 87: integer_string += "40"; break;
  case 88:  integer_string += "39";break;
  case 89:  integer_string += "38";break;
  case 90:  integer_string += "37";break;
  case 91:  integer_string += "36";break;
  case 92: integer_string += "35"; break;
  case 93: integer_string += "34"; break;
  case 94: integer_string += "33"; break;
  case 95: integer_string += "32"; break;
  case 96: integer_string += "31"; break;
  case 97: integer_string += "30"; break;
  case 98: integer_string += "29"; break;
  case 99:  integer_string += "28";break;
  case 100:  integer_string += "27";break;
  case 101:  integer_string += "26";break;
  case 102: integer_string += "25"; break;
  case 103: integer_string += "24"; break;
  case 104: integer_string += "23"; break;
  case 105: integer_string += "22"; break;
  case 106: integer_string += "21"; break;
  case 107: integer_string += "20"; break;
  case 108:  integer_string += "19";break;
  case 109:  integer_string += "18";break;
  case 110:  integer_string += "17";break;
  case 111:  integer_string += "16";break;
  case 112: integer_string += "15"; break;
  case 113: integer_string += "14"; break;
  case 114: integer_string += "13"; break;
  case 115: integer_string += "12"; break;
  case 116: integer_string += "11"; break;
  case 117: integer_string += "10"; break;
  case 118:  integer_string += "9";break;
  case 119:  integer_string += "8";break;
  case 120:  integer_string += "7";break;
  case 121:  integer_string += "6";break;
  case 122: integer_string += "5"; break;
  case 123: integer_string += "4"; break;
  case 124: integer_string += "3"; break;
  case 125: integer_string += "2"; break;
  case 126: integer_string += "1"; break;
  case 127: integer_string += "0"; break;
}
 }
return std::stoi(integer_string);
} 