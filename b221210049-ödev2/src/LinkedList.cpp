/**
* @file        b221210049 numaralı öğrenci ödevi
* @description İKİLİ ARAMA AGACI-LİNKEDLİST-NODE kullanarak txt dosyasını okuyarak agac oluşturan ve bu agacları birbirine bağlayıp menüde adresini ve değeri gösteren program
* @course      1.öğretim A grubu
* @assignment  ödev-2
* @date        25.12.2024
* @author      BATUHAN YILDIRIM--batuhan.yildirim8@ogr.sakarya.edu.tr
*/
#include "LinkedList.hpp"
#include <iostream>
using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    while (head) {
        LinkedListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::addTree(const BinaryTree& tree) {
    LinkedListNode* newNode = new LinkedListNode();
    newNode->tree = tree; // Kopyalama işlemi
    newNode->next = head;
    head = newNode;

    cout << "Bagli listeye eklendi. Dugum adresi: " << newNode
         << ", Toplam Deger: " << newNode->tree.getTotalValue()
         << ", Sonraki Dugum: " << newNode->next << endl;
}

LinkedListNode* LinkedList::getHead() const {
    return head;
}

LinkedListNode* LinkedList::getPreviousNode(LinkedListNode* currentNode) const {
    LinkedListNode* temp = head;
    LinkedListNode* previous = nullptr;

    while (temp != nullptr && temp != currentNode) {
        previous = temp;
        temp = temp->next;
    }

    return previous;
}

void LinkedList::printList() const {
    LinkedListNode* current = head;
    while (current != nullptr) {
        cout << "Dugum Adresi: " << current
             << ", Toplam Deger: " << current->tree.getTotalValue()
             << ", Sonraki Dugum: " << current->next << endl;
        current = current->next;
    }
}
