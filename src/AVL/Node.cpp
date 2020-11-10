/**
* @file Node.cpp
* @description AVL ağaçları için düğüm yapısının içerik tanımının yapıldığı
  kaynak dosyaysı.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 11:07
* @author Fatih ATEŞ
*/

#include "Node.hpp"

  AVLNode::AVLNode(Kisi* dt, AVLNode* lf, AVLNode* rg){
    data = dt;
    left = lf;
    right = rg;
    height = 0;
    depth = 0;
    tempDepth = 0;
    motions = new Stack();
  }
  AVLNode::~AVLNode(){
    if(!motions->isEmpty())
      delete motions;
    delete data;
  }
