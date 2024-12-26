/**
* @file        b221210049 numaralı öğrenci ödevi
* @description İKİLİ ARAMA AGACI-LİNKEDLİST-NODE kullanarak txt dosyasını okuyarak agac oluşturan ve bu agacları birbirine bağlayıp menüde adresini ve değeri gösteren program
* @course      1.öğretim A grubu
* @assignment  ödev-2
* @date        25.12.2024
* @author      BATUHAN YILDIRIM--batuhan.yildirim8@ogr.sakarya.edu.tr
*/
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "LinkedListNode.hpp"

class LinkedList {
private:
    LinkedListNode* head; // Bağlı listenin başlangıcı

public:
    LinkedList();
    ~LinkedList();
    void addTree(const BinaryTree& tree); // Listeye ağaç ekler
    LinkedListNode* getHead() const; // İlk düğümü döner
    LinkedListNode* getPreviousNode(LinkedListNode* currentNode) const; // Önceki düğümü döner
    void printList() const; // Listeyi yazdırır
};

#endif
