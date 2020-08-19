class Parent {
    public void view(){
        System.out.println("Other method from the parent class");
    }

    public void show(){
        System.out.println("From the parent class");
    }
}

class Child extends Parent {
    public void show(){
        System.out.println("Child overriding the parent class");
        System.out.println("From the child class");
    }
}

public class OverridingOne{
    public static void main(String[] args) {
        Child obj = new Child();
        obj.view();
        obj.show();

        // If a Parent type reference refers 
        // to a Parent object, then Parent's 
        // show is called 
        Parent obj1 = new Parent(); 
        obj1.show(); 
  
        // If a Parent type reference refers 
        // to a Child object Child's show() 
        // is called. This is called RUN TIME 
        // POLYMORPHISM. 
        Parent obj2 = new Child(); 
        obj2.show();
    }
}