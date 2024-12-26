/**
* @file        b221210049 numaralı öğrenci ödevi
* @description İKİLİ ARAMA AGACI-LİNKEDLİST-NODE kullanarak txt dosyasını okuyarak agac oluşturan ve bu agacları birbirine bağlayıp menüde adresini ve değeri gösteren program
* @course      1.öğretim A grubu
* @assignment  ödev-2
* @date        25.12.2024
* @author      BATUHAN YILDIRIM--batuhan.yildirim8@ogr.sakarya.edu.tr
*/
#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP
#include "Node.hpp"

class BinaryTree {
private:
    Node* root; // Ağacın kökü

    void addHelper(Node*& subNode, char data);       // Düğümleri eklemek için
    void clearHelper(Node* subNode);                // Ağacı temizlemek için
    int calculateTotalValue(Node* subNode, bool) const; // Toplam değeri hesaplamak için
    void printInOrderHelper(Node* subNode) const;   // InOrder yazdırmak için
    Node* copyTree(Node* subNode) const;            // Ağaç kopyalamak için

public:
    BinaryTree();
    ~BinaryTree();
    BinaryTree(const BinaryTree& other);            // Kopya yapıcı
    BinaryTree& operator=(const BinaryTree& other); // Atama operatörü

    void add(char data);       // Ağaca düğüm ekler
    int getTotalValue() const; // Ağacın toplam değerini döndürür
    void clear();              // Ağacı temizler
    void printInOrder() const; // InOrder sırasıyla yazdırır
};

#endif
