/**
* @file Kisi.cpp
* @description Kisi sınıfı içerik tanımlarının bulunduğu kaynak dosyası.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 11:38
* @author Fatih ATEŞ
*/
#include "Kisi.hpp"

    Kisi::Kisi(const string ad, int dyil, int kl){
      isim = ad;
      dogumYil = dyil;
      kilo = kl;
    }
    Kisi::Kisi(){
      isim = "";
      dogumYil = 0;
      kilo = 0;
    }
    string Kisi::getIsim() const {
      return isim;
    }
    int Kisi::getDogumYili() const {
      return dogumYil;
    }
    int Kisi::getKilo() const {
      return kilo;
    }
    bool Kisi::operator>(Kisi*& kisi){
      return (2020 - this->dogumYil) > (2020 - kisi->getDogumYili());
    }
    bool Kisi::operator>=(Kisi*& kisi){cout <<2;
      return (2020 - this->dogumYil) >= (2020 - kisi->getDogumYili());
    }
    bool Kisi::operator<=(Kisi*& kisi){
      return (2020 - this->dogumYil) <= (2020 - kisi->getDogumYili());
    }
    bool Kisi::operator<(Kisi*& kisi){
      return (2020 - this->dogumYil) < (2020 - kisi->getDogumYili());
    }
    ostream& operator<<(ostream& scr, Kisi*& right){
      scr << right->getIsim() << ", " << right->getDogumYili() << ", " << right->getKilo();
      return scr;
    }
