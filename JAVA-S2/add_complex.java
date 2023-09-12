import java.util.*;
class add_complex{
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Add two complex no.");
        int a,b,c,d,e,f;
        System.out.println("Enter first complex no.");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println(a+" + i"+b);
        System.out.println("Enter second complex no.");
        c=sc.nextInt();
        d=sc.nextInt();
        System.out.println(c+" + i"+d);
        e=a+c;
        f=b+d;
        System.out.println("Sum is :"+e+" + i"+f);


    }
}