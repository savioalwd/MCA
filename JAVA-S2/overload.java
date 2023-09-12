import java.util.*;
public class overload 
{
    public static void main(String[] args)
    {       
        
       
        Area are=new Area();
        System.out.println("Area of rectangle "+are.area(5,4));
        System.out.println("Area of rectangle "+are.area(2.5,4.6));
        System.out.println("Area of square "+are.area(6));
        System.out.println("Area of square "+are.area(9.4));

        circle cir=new circle();
        System.out.println("Area of circle "+cir.area(2.65));
    }
}


class Area{
	public int area(int l,int b){return (l*b);}
	public double area(double l,double b){return (l*b);}
	public int area(int a){return(a*a);}
	public double area(double a){return(a*a);}

}
class circle{
	
	public double area(double r){return(Math.PI*(r*r));}
}
	
