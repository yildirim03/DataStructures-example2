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
#include <fstream>
#include <string>
#include <conio.h> // getch() için
using namespace std;

void displayMenu(LinkedList& list) {
    LinkedListNode* currentNode = list.getHead(); // Listenin ilk düğümü
    while (true) {
        system("cls"); // Ekranı temizle
        if (currentNode == nullptr) {
            cout << "Liste bos." << endl;
            break;
        }

        cout << "Dugum Adresi: " << currentNode << endl;
        cout << "Toplam Degeri: " << currentNode->tree.getTotalValue() << endl;
        cout << "Sonraki Dugum Adresi: " << currentNode->next << endl;
        cout<<"InOrder siralanis : ";
        currentNode->tree.printInOrder();
        cout << endl;

        cout << "\n[A] Onceki Dugum, [D] Sonraki Dugum, [C] Cikis: ";
        char choice = getch();
        if (choice == 'a' || choice == 'A') {
            if (list.getPreviousNode(currentNode) != nullptr) {
                currentNode = list.getPreviousNode(currentNode);
            }
        } else if (choice == 'd' || choice == 'D') {
            if (currentNode->next != nullptr) {
                currentNode = currentNode->next;
            }
        } else if (choice == 'c' || choice == 'C') {
            break;
        }
    }
}

int main() {
    ifstream file("agaclar.txt");
    if (!file.is_open()) {
        cerr << "Dosya acilamadi!" << endl;
        return 1;
    }

    LinkedList list;
    string line;
    int treeCount = 1;

    while (getline(file, line)) {
        if (line.empty())
            continue;

        cout << "Agac " << treeCount++ << " olusturuluyor..." << endl;

        BinaryTree tree;
        for (char ch : line) {
            tree.add(ch);
        }

        cout << "InOrder Traversal: ";
        tree.printInOrder();
        cout << endl;

        list.addTree(tree);
    }

    file.close();
    displayMenu(list);

    return 0;
}
