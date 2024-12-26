/**
* @file        b221210049 numaralı öğrenci ödevi
* @description İKİLİ ARAMA AGACI-LİNKEDLİST-NODE kullanarak txt dosyasını okuyarak agac oluşturan ve bu agacları birbirine bağlayıp menüde adresini ve değeri gösteren program
* @course      1.öğretim A grubu
* @assignment  ödev-2
* @date        25.12.2024
* @author      BATUHAN YILDIRIM--batuhan.yildirim8@ogr.sakarya.edu.tr
*/
#ifndef LINKEDLISTNODE_HPP
#define LINKEDLISTNODE_HPP
#include "BinaryTree.hpp"

class LinkedListNode {
public:
    BinaryTree tree; // Düğümdeki ağaç
    LinkedListNode* next; // Sonraki düğüme işaretçi

    LinkedListNode();
};

#endif
