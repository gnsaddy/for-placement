class LengthAndCapacity {
    public static void main(String[] args) 
    { 
        StringBuffer s = new StringBuffer("Coders never quit!!"); 
        int p = s.length(); 
        int q = s.capacity(); 
        System.out.println("Length of string GeeksforGeeks=" + p); 
        System.out.println("Capacity of string GeeksforGeeks=" + q); 
    } 
}