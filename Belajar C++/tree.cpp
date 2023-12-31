#include <iostream>
#include <vector>

using namespace std;

// Node untuk merepresentasikan anggota keluarga
struct FamilyMember {
    string name;
    vector<FamilyMember*> children;

    FamilyMember(string n) : name(n) {}
};

// Kelas Tree untuk merepresentasikan pohon keluarga
class FamilyTree {
private:
    FamilyMember* root;

    // Fungsi rekursif untuk menambahkan anak ke dalam pohon
    void addFamilyMember(FamilyMember* parent, FamilyMember* child) {
        parent->children.push_back(child);
    }

    // Fungsi rekursif untuk menampilkan anggota keluarga dalam urutan pre-order
    void displayFamilyTree(FamilyMember* member, int level) {
        for (int i = 0; i < level; ++i) {
            cout << "  ";  // Spasi untuk menunjukkan tingkat hierarki
        }
        cout << member->name << endl;

        // Menampilkan anak-anak secara rekursif
        for (FamilyMember* child : member->children) {
            displayFamilyTree(child, level + 1);
        }
    }

public:
    FamilyTree(string rootName) {
        root = new FamilyMember(rootName);
    }

    // Fungsi untuk menambahkan anak ke dalam pohon
    void addFamilyMember(string parentName, string childName) {
        FamilyMember* parent = findFamilyMember(root, parentName);
        if (parent) {
            FamilyMember* child = new FamilyMember(childName);
            addFamilyMember(parent, child);
        } else {
            cout << "Error: Parent not found!" << endl;
        }
    }

    // Fungsi untuk menampilkan pohon keluarga
    void displayFamilyTree() {
        displayFamilyTree(root, 0);
    }

private:
    // Fungsi rekursif untuk mencari anggota keluarga berdasarkan nama
    FamilyMember* findFamilyMember(FamilyMember* current, string name) {
        if (current->name == name) {
            return current;
        }

        // Mencari anak-anak secara rekursif
        for (FamilyMember* child : current->children) {
            FamilyMember* found = findFamilyMember(child, name);
            if (found) {
                return found;
            }
        }

        return nullptr;  // Tidak ditemukan
    }
};

int main() {
    FamilyTree myFamily("Grandpa");

    myFamily.addFamilyMember("Grandpa", "Dad");
    myFamily.addFamilyMember("Dad", "Child1");
    myFamily.addFamilyMember("Dad", "Child2");
    myFamily.addFamilyMember("Child1", "Grandchild1");
    myFamily.addFamilyMember("Child1", "Grandchild2");

    cout << "Family Tree:" << endl;
    myFamily.displayFamilyTree();

    return 0;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// // Struktur Node untuk pohon
// struct TreeNode {
//     int data;
//     vector<TreeNode*> children;

//     TreeNode(int value) : data(value) {}
// };

// // Fungsi untuk menambahkan anak ke dalam pohon
// void addChild(TreeNode* parent, int value) {
//     TreeNode* child = new TreeNode(value);
//     parent->children.push_back(child);
// }

// // Fungsi untuk menampilkan pohon secara rekursif (pre-order)
// void displayTree(TreeNode* root, int level = 0) {
//     for (int i = 0; i < level; ++i) {
//         cout << "  ";  // Spasi untuk menunjukkan tingkat hierarki
//     }
//     cout << root->data << endl;

//     for (TreeNode* child : root->children) {
//         displayTree(child, level + 1);
//     }
// }

// int main() {
//     // Membuat pohon dengan akar bernilai 1
//     TreeNode* root = new TreeNode(1);

//     // Menambahkan anak-anak ke dalam pohon
//     addChild(root, 2);
//     addChild(root, 3);

//     addChild(root->children[0], 4);
//     addChild(root->children[0], 5);

//     addChild(root->children[1], 6);
//     addChild(root->children[1], 7);

//     // Menampilkan pohon
//     cout << "Tree:" << endl;
//     displayTree(root);

//     return 0;
// }
