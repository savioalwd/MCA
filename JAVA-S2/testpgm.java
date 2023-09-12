import java.util.*;

interface car{
	
	public void brand();
	public void color();
}

class carwala implements car{
	Scanner sc=new Scanner(System.in);
	String bnd,clr;
	public void brand(){
		System.out.println("Enter your car brand :");
		bnd=sc.nextLine();
	}
	public void color(){
		System.out.println("Enter your car color :");
		clr=sc.nextLine();
		
	}
	public void out(){
		System.out.println("\t\t\tCar details");
		System.out.println("\t\tBrand :"+bnd);
		System.out.println("\t\tBody color :"+clr);
	}	
}
class testpgm{
	public static void main(String []args){
		carwala mycar=new carwala();
		mycar.brand();
		mycar.color();
		mycar.out();
	}
}
