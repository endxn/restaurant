#include <iostream>
 
using namespace std;
 
class Menu {
  protected:
    string jenis;
    string level;
    int harga;
};
 
class Makanan : public Menu {
  public:
 
    Makanan(string jenis, string level, int harga) {
		Makanan::jenis = jenis;
		Makanan::level = level;
		Makanan::harga = harga;
    }
 
    void lihat() {
      cout << Makanan::jenis << "\t||\t" << Makanan::level  << "\t||\tRp." << Makanan::harga <<endl;
    }
};
 

