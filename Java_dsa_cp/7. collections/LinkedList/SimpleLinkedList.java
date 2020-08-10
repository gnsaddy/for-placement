import java.io.*;
import java.util.*;
import java.util.Collection;

class SimpleLinkedList {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        //Create linked list
        LinkedList<String> linkedList = new LinkedList<String>();

        // user to add element in list
        System.out.println("Enter value: ");
        String str1 = br.readLine();
        linkedList.add(str1);

        System.out.println("Enter value: ");
        String str2 = br.readLine();
        linkedList.add(str2);
         
        //Add elements
        linkedList.add("A");
        linkedList.add("B");
        linkedList.add("C");
        linkedList.add("D");
        System.out.println("Elements: "+ linkedList);

        //Add elements at specified position
        linkedList.add(4, "A");
        linkedList.add(5, "A");
        System.out.println("Elements: "+ linkedList);


        //Adding an element to the first position
        linkedList.addFirst("Negan");
        System.out.println("Element added at first: "+ linkedList);

        //Adding an element to the last position
        linkedList.addLast("Rick");
        System.out.println("Element added at last: "+ linkedList);


        //Removing First element
        //Same as list.remove(0);
        linkedList.removeFirst();
        System.out.println("Element removed from first: "+ linkedList);

        //Removing Last element
        linkedList.removeLast();
        System.out.println("Element removed from last: "+ linkedList);

        //removing 2nd element, index starts with 0
        linkedList.remove(3);
        System.out.println("Element removed from index 3: "+ linkedList);

        /*This is how to get and set Values*/
        Object firstvar = linkedList.get(0);
        System.out.println("First element: " +firstvar);
        linkedList.set(0, "Changed first item");
        Object firstvar2 = linkedList.get(0);
        System.out.println("First element after update by set method: " +firstvar2);
        System.out.println("Elements: "+ linkedList);

        // adding all elements to another linkedlist
        LinkedList<String> newLinkedList = new LinkedList<String>();
        newLinkedList.addAll(linkedList);
        System.out.println("New linkedlist: "+ newLinkedList);

        // adding all at some index
        newLinkedList.addAll(4,linkedList);
        System.out.println("New linkedlist added at index 4 "+ newLinkedList);

        // cloning linkedlist
        Object strLinkedList= linkedList.clone();
        System.out.println("Cloned: "+strLinkedList);

        // list contains
        boolean var = linkedList.contains("C");
        System.out.println("Contains T/F: "+ var);

        // Object poll(): It returns and removes the first item of the list.
        Object f = linkedList.poll();
        System.out.println("Remove and returns first item: " +f);
        // pollFirst() works same like poll

        Object l = linkedList.pollLast();
        System.out.println("Remove and returns last item: " +l);

        linkedList.add("First occurenece");
        linkedList.add(2,"First occurenece");
        linkedList.add(6,"First occurenece");
        System.out.println("Elements: "+ linkedList);
        // remove first occurence
        linkedList.removeFirstOccurrence("First occurenece");
        System.out.println("Elements: "+ linkedList);

        linkedList.add("String1");
        linkedList.add(3,"String1");
        System.out.println("Elements: "+ linkedList);
        linkedList.add(5,"String1");
        System.out.println("Elements: "+ linkedList);
        linkedList.removeLastOccurrence("String1");
        System.out.println("Elements: "+ linkedList);

        //Unsorted
        System.out.println(linkedList);
        
        //1. Sort the list
        Collections.sort(linkedList);
        
        //Sorted
        System.out.println(linkedList);
        
        //2. Custom sorting
        Collections.sort(linkedList, Collections.reverseOrder());
        
        //Custom sorted
        System.out.println(linkedList);


        // Iterator to iterate list
        // Iterator iter = linkedList.iterator();
        // while(iter.hasNext()){
        //     System.out.println(iter.next());
        // }

        /* Advanced For Loop*/ 		
        // System.out.println("Advanced For Loop"); 		
        // for (String val : linkedList) { 		      
        //     System.out.println(val); 		
        // }

        // iterate using for loop
        for(int i=0;i<linkedList.size();i++){
            System.out.println(i+" => " + linkedList.get(i));
        }

    
        
    }
}