/**
* @file AVL.hpp
* @description AVL ağaç yapısı başlık dosyası tanımları.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 11:15
* @author Fatih ATEŞ
*/

#ifndef AVL_HPP
#define AVL_HPP

#include "Node.hpp"

class AVL{
  private:
    AVLNode* root;
    AVLNode* newNode;
    void SearchAndAdd(AVLNode*&, Kisi*);
    void SwapWithLeftChild(AVLNode*&);
    void SwapWithRightChild(AVLNode*&);
    int Depth(AVLNode*&, AVLNode*&, int);
    void calculateDepth(AVLNode*&, bool);
    void calculateStack(AVLNode*);
    int Height(AVLNode*);
    void postOrder(AVLNode*);
    void RemoveNode(AVLNode*);

  public:
    AVL();
    bool isEmpty() const;
    void add(Kisi*);
    int Height();
    void postOrder();
    void Clear();
    ~AVL();
};

#endif
