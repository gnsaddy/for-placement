class Parent {
    protected void m1(){
        System.out.println("parent m1()");
    }
    void m2(){
        System.out.println("parent m2()");
    }
}

class Child1 extends Parent {
    public void m1(){
        System.out.println("child1 m1()");
    }
    void m2(){
        System.out.println("child1 m2()");
    }
}

class Child2 extends Parent{
    public void m1(){
        System.out.println("child2 m1()");
    }
    void m2(){
        System.out.println("child2 m2()");
    }
}

public class overriding {

    public static void main(String[] args) {
        
    Parent pobj =  new Parent();
    Child1 c1obj = new Child1();
    Child2 c2obj = new Child2();

    Parent obj;

    obj = pobj;
    // obj.m1();
    obj.m2();

    obj = c1obj;
    obj.m1();
    obj.m2();

    obj = c2obj;
    obj.m1();
    obj.m2();

    }
    
}