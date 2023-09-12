import java.util.*;

interface arithmetic{
	public void add(int a,int b);
	public void sub(int a,int b);
	public void mul(int a,int b);
	public void div(int a,int b);	
}

class basicarithmetic implements arithmetic{
	public void add(int a,int b){
		int s=a+b;
		System.out.println(a+"+"+b+"="+s);
	}
	public void sub(int a,int b){
		int s1=a-b;
		System.out.println(a+"-"+b+"="+s1);
	}
	public void mul(int a,int b){
		int s2=a*b;
		System.out.println(a+"*"+b+"="+s2);
	}
	public void div(int a,int b){
		int s3=a/b;
		System.out.println(a+"/"+b+"="+s3);
	}
	
}

public class mainarith{
	public static void main(String []args){
		Scanner sc=new Scanner(System.in);
		int a,b;	
		System.out.println("\t\tArithmetic operations");
		System.out.println("Enter the value A :");
		a=sc.nextInt();
		System.out.println("Enter the value B :");
		b=sc.nextInt();
		basicarithmetic ba=new basicarithmetic();
		ba.add(a,b);
		ba.sub(a,b);
		ba.mul(a,b);
		ba.div(a,b);
	}
}
