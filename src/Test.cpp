/**
* @file Test.cpp
* @description Kisiler.txt içinden okunan veriler ile oluşturulan AVL ağacının
  algoritmasının bulunduğu test dosyası.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 11:10
* @author Fatih ATEŞ
*/

#include "./AVL/AVL.hpp"
int readKisiler();

int main(){

  readKisiler();

  return 0;
}

int readKisiler(){
  ifstream file("./doc/Kisiler.txt");

  if ( file.is_open() ){
    string line = "", cell = "";
    AVL *avl = new AVL();
    try {

      while (getline(file, line)) {
        stringstream row(line);
        int dyil = 0, kilo = 0;
        string isim[3];
        for (int i = 0; i < 3; i++)
            getline(row, isim[i], '#');
        avl->add(new Kisi(isim[0],stoi(isim[1]),stoi(isim[2])));
      }
      avl->postOrder();
      delete avl;
    } catch (invalid_argument& e) {
      cerr << e.what() << endl;
    } catch (...) {
      cout << "Bilinmeyen bir hata oluştu lütfen hata mesajını ilgili kişiye yönlendiriniz.";
    }


  }else
    cout << "Kisiler.txt dosyasi bulunamadi veya okunamiyor...";

  return 0;
}
