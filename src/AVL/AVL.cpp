/**
* @file AVL.cpp
* @description AVL ağaç yapısı kaynak dosyası tanımları.
* @course Uzaktan Eğitim - Grup B - 1. Öğretim - BSM 207
* @assignment 2. Ödev - 1. Final Ödevi
* @date 22.08.2020 11:15
* @author Fatih ATEŞ
*/
#include "AVL.hpp"

    void AVL::SearchAndAdd(AVLNode*& subNode, Kisi* data){

      if(subNode == NULL){
        subNode = new AVLNode(data);
        newNode = subNode;
      }
      else if(*data <= subNode->data){
        SearchAndAdd(subNode->left, data);

        if (Height(subNode->left) == Height(subNode->right) + 2){
          if(*data <= subNode->left->data){
            SwapWithLeftChild(subNode);
          }
          else{
            SwapWithRightChild(subNode->left);
            SwapWithLeftChild(subNode);
          }
        }

      }else {
        SearchAndAdd(subNode->right, data);
        if (Height(subNode->right) == Height(subNode->left) + 2){

          if(*data > subNode->right->data)
            SwapWithRightChild(subNode);
          else{
            SwapWithLeftChild(subNode->right);
            SwapWithRightChild(subNode);
          }
        }

      }
      subNode->height = Height(subNode);

    }
    void AVL::SwapWithLeftChild(AVLNode*& subNode){
      AVLNode* tmp = subNode->left;
      subNode->left = tmp->right;
      tmp->right = subNode;

      subNode->height = Height(subNode);
      tmp->height = max(Height(tmp->left), subNode->height);

      subNode = tmp;
    }
    void AVL::SwapWithRightChild(AVLNode*& subNode){
      AVLNode* tmp = subNode->right;
      subNode->right = tmp->left;
      tmp->left = subNode;

      subNode->height = Height(subNode);
      tmp->height = max(Height(tmp->right), subNode->height);

      subNode = tmp;
    }
    int AVL::Depth(AVLNode*& subNode, AVLNode*& Node, int level){
      if (subNode == Node) return level;
      else if(subNode == NULL) return -1;
      else if(*(Node->data) > subNode->data)
        return Depth(subNode->right, Node, level + 1);
      else if(*(Node->data) < subNode->data)
        return Depth(subNode->left, Node, level + 1);
      else{
        int leftReturn = Depth(subNode->left, Node, level + 1);
        if( leftReturn == -1)
          return Depth(subNode->right, Node, level + 1);

        else return leftReturn;
      }
    }
    void AVL::calculateDepth(AVLNode*& subNode, bool control){
        if (subNode != NULL) {
          calculateDepth(subNode->right, control);
          calculateDepth(subNode->left, control);

          if(!control)
            subNode->tempDepth = Depth(root, subNode, 0);
          else
            subNode->depth = Depth(root, subNode, 0);
        }
    }
    void AVL::calculateStack(AVLNode* subNode){
      if (subNode != NULL) {
        calculateStack(subNode->left);
        calculateStack(subNode->right);
        if(newNode != subNode)
          if(subNode->depth > subNode->tempDepth)
            subNode->motions->push('A');
          else if (subNode->depth < subNode->tempDepth)
            subNode->motions->push('Y');
          else
            subNode->motions->push('D');
      }
    }
    int AVL::Height(AVLNode* subNode){
      if (subNode == NULL) return -1;
      return 1 + max(Height(subNode->left), Height(subNode->right));
    }
    void AVL::postOrder(AVLNode* subNode){
        if (subNode != NULL) {
          postOrder(subNode->left);
          postOrder(subNode->right);
          cout << subNode->data << subNode->motions << endl ;
        }
    }
    void AVL::RemoveNode(AVLNode* subNode){
      AVLNode* del = subNode;
      if (subNode != NULL) {
        RemoveNode(subNode->left);
        RemoveNode(subNode->right);
        if(subNode == root){
          delete del;
          root = NULL;
        }else delete del;
      }
    }
    AVL::AVL(){
      root = NULL;
    }
    bool AVL::isEmpty() const {
      return root == NULL;
    }
    void AVL::add(Kisi* data) {

      calculateDepth(root, false);
      SearchAndAdd(root, data);
      calculateDepth(root, true);
      calculateStack(root);

    }
    int AVL::Height(){
      return Height(root);
    }
    void AVL::postOrder(){
      if (isEmpty())
        throw invalid_argument("Agac bir eleman barindirmiyor.  Err-avl:201");
      else
        postOrder(root);
    }
    void AVL::Clear(){
      while (!isEmpty())
        RemoveNode(root);
      // newNode'nin gösterdiği yer dahil tüm düğümleri temizliyor.
    }
    AVL::~AVL(){
      Clear();
    }
