/**
* @file        b221210049 numaralı öğrenci ödevi
* @description İKİLİ ARAMA AGACI-LİNKEDLİST-NODE kullanarak txt dosyasını okuyarak agac oluşturan ve bu agacları birbirine bağlayıp menüde adresini ve değeri gösteren program
* @course      1.öğretim A grubu
* @assignment  ödev-2
* @date        25.12.2024
* @author      BATUHAN YILDIRIM--batuhan.yildirim8@ogr.sakarya.edu.tr
*/
#include "BinaryTree.hpp"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {
    clear();
    cout << "BinaryTree destructor cagrildi!" << endl;
}

BinaryTree::BinaryTree(const BinaryTree& other) : root(nullptr) {
    cout << "BinaryTree kopya yapici cagrildi!" << endl;
    if (other.root != nullptr) {
        root = copyTree(other.root);
    }
}

BinaryTree& BinaryTree::operator=(const BinaryTree& other) {
    if (this == &other) return *this;

    clear();
    root = copyTree(other.root);
    return *this;
}

Node* BinaryTree::copyTree(Node* subNode) const {
    if (subNode == nullptr) return nullptr;

    Node* newNode = new Node(subNode->data);
    newNode->left = copyTree(subNode->left);
    newNode->right = copyTree(subNode->right);
    return newNode;
}

void BinaryTree::add(char data) {
    addHelper(root, data);
}

void BinaryTree::addHelper(Node*& subNode, char data) {
    if (subNode == nullptr) {
        subNode = new Node(data);
    } else if (data < subNode->data) {
        addHelper(subNode->left, data);
    } else if (data > subNode->data) {
        addHelper(subNode->right, data);
    }
}

void BinaryTree::clear() {
    if (root != nullptr) {
        clearHelper(root);
        root = nullptr;
    }
}

void BinaryTree::clearHelper(Node* subNode) {
    if (subNode == nullptr) return;

    clearHelper(subNode->left);
    clearHelper(subNode->right);

    delete subNode;
}

int BinaryTree::calculateTotalValue(Node* subNode, bool isLeft) const {
    if (subNode == nullptr) return 0;

    int leftValue = calculateTotalValue(subNode->left, true);
    int rightValue = calculateTotalValue(subNode->right, false);

    int currentValue = static_cast<int>(subNode->data);
    if (isLeft) {
        currentValue *= 2;
    }

    return leftValue + rightValue + currentValue;
}

int BinaryTree::getTotalValue() const {
    return calculateTotalValue(root, false);
}

void BinaryTree::printInOrderHelper(Node* subNode) const {
    if (subNode == nullptr) return;

    printInOrderHelper(subNode->left);
    cout << subNode->data << " ";
    printInOrderHelper(subNode->right);
}

void BinaryTree::printInOrder() const {
    printInOrderHelper(root);
}
