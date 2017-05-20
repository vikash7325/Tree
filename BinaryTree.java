
class  Node {
	int key;
	Node left, right = null;
	public Node(int item){
		key = item;
		left = right = null;
	}
}
class BinaryTree {
	Node root;
	BinaryTree(){
		root = null;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        BinaryTree myTree = new BinaryTree();
        myTree.root = new Node(1);
        myTree.root.left = new Node(2);
        myTree.root.right = new Node(3);
        myTree.root.left.left = new Node(4);
        myTree.root.right.right = new Node(5);
        System.out.print("Tree Implementation Details");
	}

}
