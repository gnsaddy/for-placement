import java.util.Collections;
import java.util.*;
import java.io.*;


class SimpleArrayList {

    public static void main(String[] args) throws Exception {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            
        ArrayList<Integer> ilist = new ArrayList<Integer>();
        System.out.println("Enter number to insert:");
        int val = Integer.parseInt(br.readLine());
        // adding to list
        ilist.add(val);
        for(int i=10;i>=1;i--)
            ilist.add(i);
        // adding at location 4
        ilist.add(3,999);
        ilist.add(5,999);
        ilist.add(7,999);
        ilist.add(9,999);

        System.out.print("List : "+ilist + "\n");
        // set value at index
        ilist.set(1,123);
        System.out.print("List : "+ilist + "\n");

        // removing element index
        ilist.remove(1);
        System.out.print("List : "+ilist + "\n");

        // size of list
        System.out.println("SIze: " + ilist.size());

        // getting an element
        System.out.println("Getting value at index 7: " +ilist.get(7));

        // sorting
        Collections.sort(ilist);
        System.out.println("Sorted array: "+ ilist);

        // Descending sort
        Collections.sort(ilist, Collections.reverseOrder());
        System.out.println("Sorted descending array: "+ ilist);

        // reversing
        Collections.reverse(ilist);
        System.out.println("Reversing array: "+ ilist);

        // looping

        /* For Loop for iterating ArrayList */
        System.out.println("For Loop");
        for (int counter = 0; counter < ilist.size(); counter++) { 		      
            System.out.println(ilist.get(counter)); 		
        }   
        
        // addAll to another list
        ArrayList<Integer> ilist2 = new ArrayList<Integer>();
        ilist2.add(876);
        ilist2.add(555);
        // //Adding ArrayList2 into ArrayList1
        ilist.addAll(ilist2);
        System.out.println("After adding: "+ ilist);

        // Remove all occurrences of element
        ilist.removeAll(Collections.singleton(999));
        System.out.println("Remove 999 "+ ilist);

        ilist.add(3,999);
        ilist.add(5,999);
        ilist.add(7,999);
        ilist.add(9,999);

        System.out.print("List : "+ilist + "\n");

        // Remove all occurrences of element
        ilist.removeIf(num -> num.equals(999));
        System.out.println("Remove 999 "+ ilist);

        // lambda
        ilist.forEach(System.out::println);

        // sublist

         //Sublist to ArrayList
        ArrayList<Integer> al2 = new ArrayList<Integer>(ilist.subList(1, 4));
        System.out.println("SubList stored in ArrayList: "+al2);

        // swap 
        //Swapping 2nd(index 1) element with the 5th(index 4) element
        System.out.println("Before"+ ilist);
        Collections.swap(ilist, 1, 4);

        System.out.println("After: "+ilist);
        

    //     /* Advanced For Loop*/ 		
    //     System.out.println("Advanced For Loop"); 		
    //     for (Integer num : ilist) { 		      
    //         System.out.println(num); 		
    //     }

    //     /* While Loop for iterating ArrayList*/ 		
    //     System.out.println("While Loop"); 		
    //     int count = 0; 		
    //     while (ilist.size() > count) {
    //     System.out.println(ilist.get(count));
    //         count++;
    //     }

    //     /*Looping Array List using Iterator*/
    //     System.out.println("Iterator");
    //     Iterator iter = ilist.iterator();
    //     while (iter.hasNext()) {
    //         System.out.println(iter.next());
    //   }
    }
}