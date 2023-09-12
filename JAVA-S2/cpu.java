import java.util.*;
class cpu{
	float price=20000;
	
	public class processor{
		int cores=12;
		String manufacturer="Intel";
		
		public class ram{
			int memory=8;
			String manufacturer="Samsung";
		}
		 
	}
	
	public static void main(String[] args){
	cpu outer=new cpu();
	cpu.processor inner=outer.new processor();
	processor.ram inn=inner.new ram();
	System.out.println(inner.manufacturer);
	System.out.println(inner.cores+" Cores");
	System.out.println(inn.manufacturer+" "+inn.memory+"GB "+"RAM");
	System.out.println("Price "+outer.price);
	
	}
}
