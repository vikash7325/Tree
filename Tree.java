
class  Node {
	int key;
	Node left, right = null;
	public Node(int item){
		key = item;
		left = right = null;
	}
}
class Tree {
	Node root;
	Tree(){
		root = null;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Tree myTree = new Tree();
        myTree.root = new Node(1);
        myTree.root.left = new Node(2);
        myTree.root.right = new Node(3);
        myTree.root.left.left = new Node(4);
        myTree.root.right.right = new Node(5);
        System.out.print("Tree Implementation Details");
	}

}
