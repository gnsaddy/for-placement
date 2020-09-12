class InvalidAgeException extends Exception{
    InvalidAgeException(String s){
        super(s);
    }
}

class customException{

    static void testAge(int age) throws InvalidAgeException{
        if(age<18)  
            throw new InvalidAgeException("not valid");  
        else  
            System.out.println("welcome to vote");  
    }

    public static void main(String[] args) {
        try {
            testAge(10);
        }catch(Exception e){
            System.out.println("Exception: "+e);
        }
    }
}