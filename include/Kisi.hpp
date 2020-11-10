/**
* @file Kisi.hpp
* @description Bir kişi için tutulacak veriler için oluşturacağımız "Kisi"
  sınıfının başlık dosyası tanımları.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 11:38
* @author Fatih ATEŞ
*/
#ifndef KISI_HPP
#define KISI_HPP

#ifndef __INCLUDES__
    #define __INCLUDES__

    #include <iostream>
    #include <fstream>
    #include <sstream>

    using namespace std;

#endif

class Kisi {
  private:
    string isim = "";
    int dogumYil;
    int kilo;
  public:
    Kisi(string, int dyil=0, int kl=0);
    Kisi();
    string getIsim() const;
    int getDogumYili() const;
    int getKilo() const;
    bool operator>(Kisi*&);
    bool operator>=(Kisi*&);
    bool operator<=(Kisi*&);
    bool operator<(Kisi*&);
    friend ostream& operator<<(ostream&, Kisi*&);
};

#endif
