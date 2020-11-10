/**
* @file Node.hpp
* @description Yığıt veri yapısı için düğüm yapısı struct bildirimlerinin yapıldığı ve gerekli
  kütüphane dosyalarının dahil edildiği başlık dosyası.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 20:30
* @author Fatih ATEŞ
*/
#ifndef STACK_NODE_HPP

#ifndef __INCLUDES__
    #define __INCLUDES__

    #include <iostream>
    #include <fstream>
    #include <sstream>

    using namespace std;

#endif

struct STACKNode {
  char data;
  STACKNode* next;

  STACKNode(const char&, STACKNode* nx=NULL);
};

#endif
