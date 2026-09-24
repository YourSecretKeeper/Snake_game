class Addition{
    int add(int a, int b){
        return a + b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
    double add(double a, double b){
        return a+b;
    }
    String add(String a, String b){
        return a+b;
    }
}

public class MethodOverloading{
    public static void main(String[]args){
        Addition obj = new Addition();
        System.out.println("Sum of 2 integers: " + obj.add(10, 20));
        System.out.println("Sum of 3 integers: " + obj.add(10, 20, 30));
        System.out.println("Sum of 2 doubles: " + obj.add(12.5, 7.5));
        System.out.println("Concatenated String:  " + obj.add("Hello ", "World"));
    }
}
