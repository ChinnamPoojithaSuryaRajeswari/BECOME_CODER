#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(int val){
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}
};
void treerec(Node*temp,int n,vector<int>v,int index){
	if((2*index)+1>=n){
		return;
	}
	else if((2*index)+1==n-1){
		temp->left = new Node(v[(2*index)+1]);
	}
	else{
		temp->left = new Node(v[(2*index)+1]);
		temp->right = new Node(v[(2*index)+2]);
	}
	treerec(temp->left,n,v,(2*index)+1);
	treerec(temp->right,n,v,(2*index)+2);
}
void inorder(Node* root){
	while(root){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int main(){
	int n,k;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>k;
		v.push_back(k);
	}
	Node* root = new Node(v[0]);
	Node* temp = root;
	treerec(temp,n,v,0);
	temp = root;
	inorder(temp);
}