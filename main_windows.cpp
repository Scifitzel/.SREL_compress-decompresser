#include "conversion_tables.h"

std::ifstream into;
char Seperator;
bool cont2 = true;
int first_time = 1;
std::string strings {""}; 
std::string seperator_string {""};
std::vector <int> when_to_space;

void decode_seperator() {
    while (into >> Seperator && Seperator != 8) { 
  
    if (Seperator != 33 && Seperator != 34 && Seperator != 35 && Seperator != 36 && Seperator != 37 && Seperator != 38 && Seperator != 39 && Seperator != 40 && Seperator != 41 && Seperator != 42 || first_time == 1) {
seperator_string.push_back(Seperator); 
first_time = 2; 

} else {
       when_to_space.push_back(decode(seperator_string));
       seperator_string.clear();
      seperator_string.push_back(Seperator);
   }
     
        }
}


int main() {
    std::string loophole {"\\"};
int m = 0;
int current_file {0};
std::vector <std::string> file_names {""};
std::string next_line{""};
std::string output_file_names;
std::vector <std::string> endlines_endcoded;
int integer {0};
int hello {0};
int how_many_files{0};
std::ofstream outo;

std::cout << "Would you like to compress or decompress? 1. compress 2. decompress." << std::endl;  
while (strings != "1" && strings != "2") { 
std::cin >> strings; 
if (strings != "1" && strings != "2") {
    std::cout << "Sorry. Please enter either a 1 or a 2." << std::endl;
}
}
if (strings == "1") {
std::cout << "How many files would you like to compress?" << std::endl;
std::cin >> how_many_files;
std::cout << "Enter in name of files to compress up." << std::endl;
std::getline(std::cin,file_names[current_file]);
for (current_file = 0; current_file < how_many_files; current_file++) {
std::getline(std::cin,file_names[current_file]); 
 if (current_file+1 != how_many_files) {
    file_names.push_back(""); }
}
std::cout << "Enter name of file to output to" << std::endl;
std::cin >> output_file_names;
for (current_file = 0; current_file < file_names.size(); current_file++) {
into.open(file_names[current_file], std::ios::binary);
while (std::getline(into, strings)) {
    when_to_space.push_back(strings.length());
}
outo.close(); 
into.close();
outo.open(output_file_names+".srel", std::ios::app);
into.open(file_names[current_file], std::ios::binary);
int i = file_names[current_file].length();
while ( i!= 0 && cont2 == true) {
    if (file_names[current_file][i] == loophole[0]) {
strings = file_names[current_file].substr(i+1,file_names[current_file].length()-i+1);
cont2 = false;
} 
i--;
 }
if (cont2 == true) {
    strings = file_names[current_file];
}
outo << strings <<  std::endl;
for (int i = 0; i < when_to_space.size(); i++){
    outo << encode(when_to_space[i]);
}
outo << "#" << char(8) << std::endl;
while (std::getline(into, strings)) {
    when_to_space.push_back(strings.length());
    outo << strings;
}
outo << std::endl;
if (current_file+1 != file_names.size()) {outo << "nextkrel" << std::endl;} else {outo << "endkrel" << std::endl;}
into.close();
outo.close(); }

std::cout << "Finished compressing file(s)." << std::endl;
    } else {
        int i {0};
std::cout << "Enter file to decompress." << std::endl;
std::cin >> strings;
if (strings[strings.length()-5] != '.' || strings[strings.length()-4] != 's' || strings[strings.length()-3] != 'r' || strings[strings.length()-2] != 'e' || strings[strings.length()-1] != 'l' ) {
std::cout << "Sorry. The file you entered is not a .srel file" << std::endl;
return 0;
}
std::cout << "Enter directory to output to." << std::endl;
std::cin >> loophole;
//if (loophole.find('.') ) {
//std::cout << "Sorry. The directory you entered is not a valid directory." << std::endl;
//return 0;
//}
into.open(strings, std::ios::binary);
while (std::getline(into,strings) && strings != "endkrel") {
    if (strings == "nextkrel" || first_time == 1) {
        when_to_space.clear();
        outo.close();
file_names.push_back("");
if (first_time != 1) {
std::getline(into,strings); }
strings.pop_back(); // include only on windows
std::cout << "file name is:" << strings << std::endl;
 strings.insert(strings.find("."),"(1)");
outo.open(loophole+"\\"+strings, std::ios::binary);
strings.clear();
file_names.clear();
first_time = 1;
decode_seperator();
std::getline(into,strings);
 } else {
integer = when_to_space[m]; 
for ( i = 0; i < strings.length(); i++) {
    outo << strings[i]; 
    if (i >= integer-hello-1) {
        if (when_to_space[m] != 0) {
        outo << std::endl; }
        if (when_to_space[m+1] == 0) {
        outo << std::endl; }
        m++;
        integer += when_to_space[m];
        hello = 0;
    } 
} hello = i - integer;
m++;
integer = when_to_space[m];
first_time = 3;
} }
into.close();
outo.close();
std::cout << "Finished decompressing file(s)." << std::endl;
}
std::cin >> strings;
    return 0;
}