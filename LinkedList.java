package Stuff;
public class LinkedList {
    Node head; 
    public static class Node {
        String data;
        Node next;
        Node(String s) {
            data = s;
            next = null;
        }
    }
    public void insertFront(String s) { // Inserts by moving everything behind itself
        Node newNode = new Node(s);
        newNode.next = head;
        head = newNode;
    }
    public void insertRear(String s) {
        Node newNode = new Node(s);
        Node currNode = head;
        while(currNode.next != null) { // Traversal
            currNode = currNode.next;
        }
        currNode.next = newNode;
    }
    public static void printList(LinkedList list) { // Traversal
        Node currNode = list.head;
        while(currNode != null) {
            System.out.print(currNode.data + " ");
            currNode = currNode.next;
        }
    }
    public static void main(String[] args) {
        LinkedList myList = new LinkedList();
        myList.insertFront("Ben, ");
        myList.insertFront("Liam, ");
        myList.insertFront("Sac State, ");
        myList.insertRear("Computer Science is Cool! ");
        printList(myList);
    }
}