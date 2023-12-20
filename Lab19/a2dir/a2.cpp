#include <iostream>
#include <fstream>

using namespace std;

int main() {

   fstream file;
   float num;
   float sum = 0.0;

   file.open("liczby.txt", ios::in);

   if (file.good() == false) {
       cout << "File cannot be opened.";
       
       return 1;
   }

   while (file >> num) {
       sum += num;
   }

   cout << "Sum: " << sum << "\n";

   file.close();

   return 0;
}