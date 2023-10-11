package Stuff;
public class Node {

    String data;
    Node next;

    public Node(String item) { 

       data = item;

    }
    public Node(String item, Node n) {
        data = item;
        next = n;
    }
    
    public static void main(String args[]) { 
        Node myList = new Node("Bob");
		myList.next = new Node("Carol");
		// myList == ["Bob", "Carol"]
		myList.next.next = new Node("Debby");
		// myList == ["Bob", "Carol", "Debby"]
        System.out.println("Original List:");
        System.out.println(myList.data);
		System.out.println(myList.next.data);
        System.out.println(myList.next.next.data);
        Node newList = new Node("Allen", myList);
        System.out.println("New List:");
        System.out.println(newList.data);
        System.out.println(newList.next.data);
		System.out.println(newList.next.next.data);
        System.out.println(newList.next.next.next.data);
    }
}
