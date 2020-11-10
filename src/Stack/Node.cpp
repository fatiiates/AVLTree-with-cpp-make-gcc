/**
* @file Node.cpp
* @description Yığıt veri yapısı için düğüm yapısının içerik tanımının yapıldığı
  kaynak dosyaysı.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 20:30
* @author Fatih ATEŞ
*/

#include "Node.hpp"

  STACKNode::STACKNode(const char& data, STACKNode* nx){
    this->data = data;
    next = nx;
  }
