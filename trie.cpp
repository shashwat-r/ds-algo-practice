#include<bits/stdc++.h>
using namespace std;
#define ptr(x) (*(x))
struct Trie {
	unordered_map<char, Trie*> child;
	bool isLeaf = false;
};

void *insert(Trie *&head, string str) {
	if (head == nullptr) {
		head = new Trie;
	}
	Trie *curr = head;
	for (char c : str) {
		if (curr->child[c] == nullptr) {
			curr->child[c] = new Trie;
			printf("%c", c);
		}
		curr = curr->child[c];
	}
	curr->isLeaf = true;
	printf("\n");
}

bool search(Trie *head, string str) {
	if (head == nullptr) {
		return false;
	}
	Trie *curr = head;
	for (char c : str) {
		if (curr->child[c] == nullptr) {
			return false;
		}
		curr = curr->child[c];
	}
	if (curr->isLeaf == false) {
		return false;
	} else {
		return true;
	}
}

// stack implementation for removing element
// void remove(Trie *&head, string str) {
// 	if (head == nullptr) {
// 		return;
// 	}
// 	Trie *curr = head;
// 	stack<Trie*> heads;
// 	for (char c : str) {
// 		if (curr->child[c] == nullptr) {
// 			return;
// 		}
// 		heads.push(curr);
// 		curr = curr->child[c];
// 	}
// 	if (curr->isLeaf == true) {
// 		curr->isLeaf = false;
// 	}
// 	if (curr->child.size() > 0) {
// 		return;
// 	} else {
// 		for (int i = 0; i < heads.size(); i ++) {
// 			if (curr->child.size() == 0) {
// 				delete(curr);
// 			} else {
// 				return;
// 			}
// 			curr = heads.top();
// 			heads.pop();
// 		}
// 	}
// }

// void remove_node(Trie *&curr, string s, int pos) {
// 	// printf("[%c][%d] ", s[pos], curr->child[s[pos]]->isLeaf);
// 	Trie* next = curr->child[s[pos]];
// 	for (auto par: curr->child) printf("%d:%c ", pos, par.first);printf("\n");
// 	if (pos == s.size()-1) {
// 		next->isLeaf = false;
// 		if (curr->child.size() == 0) {
// 			delete(curr);
// 		}
// 		return;
// 	} else {
// 		remove_node(next, s, pos+1);
// 	}
// 	if (curr->child.size() > 0) {
// 		return;
// 	} else if (curr->child.size() == 0) {
// 		delete(curr);
// 	}
// }

bool has_children(Trie* &curr) {
	for (auto it: curr->child) {
		if (it.second != nullptr) {
			return true;
		}
	}
	return false;
}

void remove_node(Trie *&curr, string s, int pos) {
	if (pos == s.size()) {
		curr->isLeaf = false;
		if (! has_children(curr)) {
			delete(curr);
			curr = nullptr;
		}
		return;
	}
	remove_node(curr->child[s[pos]], s, pos+1);
	if (! has_children(curr)) {
		delete(curr);
		curr = nullptr;
	}
}

// recursive implementation for removing element
void remove(Trie *&head, string str) {
	if (head == nullptr) {
		return;
	}
	Trie *curr = head;
	remove_node(curr, str, 0);
}

signed main() {
	Trie *head = nullptr;
	insert(head, "apple");
	insert(head, "appleman");
	insert(head, "applewoman");
	if (search(head, "appleman")) printf("True\n"); else printf("False\n");
	// if (search(head, "apples")) printf("True\n"); else printf("False\n");
	// if (search(head, "applem")) printf("True\n"); else printf("False\n");
	remove(head, "appleman");
	if (search(head, "appleman")) printf("True\n"); else printf("False\n");
	insert(head, "appleman");
	return 0;
}