class MultiThread1 extends Thread {
    public void run(){
        try{
            // Displaying the thread that is running 
            System.out.println ("Thread " + Thread.currentThread().getId() + " is running");
        }catch(Exception e){
            System.out.println(e);
        }
    }
}

class SimpleThread {
    public static void main(String[] args) {
        int n = 8; // Number of threads 
        for (int i=0; i<n; i++) 
        { 
            MultiThread1 object = new MultiThread1(); 
            object.start(); 
        } 
    }
}