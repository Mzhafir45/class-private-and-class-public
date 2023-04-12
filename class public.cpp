#include <iostream>
using namespace std;
//input diluar
//class Mobil {
//   public:
//      string merk;
//      string model;
//      int tahun;
//
//      void info() {
//         cout << "Mobil " << merk << " " << model << " tahun " << tahun << endl;
//      }
//};
//
//int main() {
// 	
//   Mobil mobil1;
//   mobil1.merk = "Toyota";
//   mobil1.model = "Avanza";
//   mobil1.tahun = 2020;
//   mobil1.info();
//   return 0;
//}

//input di dalam
class Mobil {
   public:
      string merk;
      string model;
      int tahun;

      void info() {
         cout << "Mobil " << merk << " " << model << " tahun " << tahun << endl;
      }
};

int main() {
   Mobil mobil1;
   cout << "Masukkan merk mobil: ";
   cin >> mobil1.merk;
   cout << "Masukkan model mobil: ";
   cin.get();
   cin >> mobil1.model;
   cout << "Masukkan tahun produksi mobil: ";
   cin >> mobil1.tahun;
   mobil1.info();
   return 0;
}


