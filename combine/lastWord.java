class lastWord {
    public static void main(String[] args) {
        String str = "testing last word to get print"; 
        String[] arrOfStr = str.split(" "); 
  
        System.out.println(arrOfStr[arrOfStr.length-1]);
    } 
}