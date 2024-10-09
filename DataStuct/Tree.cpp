#include <iostream>
using namespace std;
#include <vector>

class Node
{
public :
   Node(const char* data) : data(data) {}
public : 
   const char* data;
   vector<Node*> children;
};

Node* CreateTree()
{
   Node* root = new Node("R1 개발실");
   // 기획
   {
      Node* node = new Node("디자인 팀");
      root->children.push_back(node);
      {
         Node* leaf = new Node("전투");
         node->children.push_back(leaf);
      }
      {
         Node* leaf = new Node("경제");
         node->children.push_back(leaf);
      }
      {
         Node* leaf = new Node("스토리");
         node->children.push_back(leaf);
      }

   }
   // 프로그래밍 팀
   {
      Node* node = new Node("프로그래밍 팀");
      root->children.push_back(node);
      {
         Node* leaf = new Node("클라");
         node->children.push_back(leaf);
      }
      {
         Node* leaf = new Node("서버");
         node->children.push_back(leaf);
      }
      {
         Node* leaf = new Node("엔진");
         node->children.push_back(leaf);
      }

   }
   // 아트 팀
   {
      Node* node = new Node("아트팀");
      root->children.push_back(node);
      {
         Node* leaf = new Node("배경");
         node->children.push_back(leaf);
      }
      {
         Node* leaf = new Node("캐릭터");
         node->children.push_back(leaf);
      }

   }
   return root;
}


// 깊이(depth) : 루트에서 어떤 노드에 도달하기 위해 거쳐야하는 간선의 개수
void PrintTree(Node* root, int depth =0)
{
   for (int i = 0; i < depth; i++)
   {
      cout << "-";
   }

   cout << root->data << endl;

   int size = root->children.size();

   if (size == 0)
      return;

   for (int i = 0; i < size; i++)
   {
      Node* node = root->children[i];
      PrintTree(node,depth +1);
   }
}

// 트리 높이 
int GetHeight(Node* root)
{
   int ret = 1;

   int size = root->children.size();

   for (int i = 0; i < size; i++)
   {
      Node* node = root->children[i];
      int h = GetHeight(node) + 1;

      if (h > ret)
      {
         ret = h;
      }
   }
   return ret;
}

int main()
{
   Node* root = CreateTree();
   PrintTree(root);
   cout << endl;

   cout << GetHeight(root);
}
