/**
* @file        b221210049 numaralı öğrenci ödevi
* @description İKİLİ ARAMA AGACI-LİNKEDLİST-NODE kullanarak txt dosyasını okuyarak agac oluşturan ve bu agacları birbirine bağlayıp menüde adresini ve değeri gösteren program
* @course      1.öğretim A grubu
* @assignment  ödev-2
* @date        25.12.2024
* @author      BATUHAN YILDIRIM--batuhan.yildirim8@ogr.sakarya.edu.tr
*/
#ifndef NODE_HPP
#define NODE_HPP

class Node {
public:
    char data;   // Düğümdeki veri
    Node* left;  // Sol alt düğüm
    Node* right; // Sağ alt düğüm

    Node(char data); // Kurucu
};

#endif
