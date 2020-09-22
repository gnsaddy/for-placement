class MultiThreadTest implements Runnable{
	public void run(){

		try {
			System.out.println("Thread "+ Thread.currentThread().getId() + " is running");
		} catch (Exception e) {
			System.out.println("Exception : "+e);
		}
	}
}

class UsingRunnable {
	public static void main(String[] args) {
		System.out.println("Main Thread "+ Thread.currentThread().getId() + " is running");
		int n = 8;
		for(int i=0;i<n;i++){
			Thread obj =  new Thread(new MultiThreadTest());
			obj.start();
		}
	}
}