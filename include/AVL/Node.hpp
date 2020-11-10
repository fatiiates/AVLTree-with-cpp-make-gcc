/**
* @file Node.hpp
* @description AVL ağacı için düğüm yapısı struct bildirimlerinin yapıldığı ve gerekli
  kütüphane dosyalarının dahil edildiği başlık dosyası.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 11:06
* @author Fatih ATEŞ
*/

#ifndef AVL_NODE_HPP
#define AVL_NODE_HPP

#include "../Kisi.hpp"
#include "../Stack/Stack.hpp"

struct AVLNode {
  Kisi* data;
  AVLNode* left;
  AVLNode* right;
  Stack* motions;
  int height;
  int depth;
  int tempDepth;

  AVLNode(Kisi*, AVLNode* lf=NULL, AVLNode* rg=NULL);
  ~AVLNode();
};

#endif
