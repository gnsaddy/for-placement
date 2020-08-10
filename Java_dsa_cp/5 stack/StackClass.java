// Java code for stack implementation 

import java.io.*; 
import java.util.*; 

public class StackClass 
{ 
    
	// Pushing element on the top of the stack 
	static void stack_push(Stack<Integer> stack) throws Exception
	{ 
        System.out.println("Push :"); 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter number to push: ");
        int val = Integer.parseInt(br.readLine());
        stack.push(val);
	} 
	
	// Popping element from the top of the stack 
	static void stack_pop(Stack<Integer> stack)
	{ 
		Integer y = (Integer) stack.pop(); 
		System.out.println(y); 
	} 

	// Displaying element on the top of the stack 
	static void stack_peek(Stack<Integer> stack) 
	{ 
        System.out.println("Peek :"); 
		Integer element = (Integer) stack.peek(); 
		System.out.println("Element on stack top : " + element); 
	} 
	
	// Searching element in the stack 
	static void stack_search(Stack<Integer> stack) throws Exception
	{ 
        System.out.println("Search :"); 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter number to search: ");
        int val = Integer.parseInt(br.readLine());
		Integer pos = (Integer) stack.search(val); 

		if(pos == -1) 
			System.out.println("Element not found"); 
		else
			System.out.println("Element is found at position " + pos); 
	} 


	public static void main (String[] args) throws Exception
	{ 
        Stack<Integer> stack = new Stack<Integer>(); 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        while(true){
            System.out.println("Enter choice:- 1) Push 2) Pop 3) Peek 4) search 5) Display");
            int ch = Integer.parseInt(br.readLine());
            switch (ch) {
                case 1:
                    stack_push(stack); 
                    break;
                case 2:
                // check if stack is empty
                    if (stack.empty())
                        System.out.println("Stack is Empty");
                    else
                        stack_pop(stack);                     
                    break;
                case 3:
                    stack_peek(stack); 
                    break;
                case 4:
                    stack_search(stack); 
                    break;
                case 5:
                    Object[] vals = stack.toArray();

                    for (Object obj : vals) {
                        System.out.println(obj);
                    }
                
                    break;
                case 6:
                    System.exit(0);
                default:
                    break;
            }
        }
	} 
} 
