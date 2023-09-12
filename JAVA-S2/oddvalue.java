import java.util.*;
class oddvalue{
	public static void main(String []args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the string :");
		String s=sc.nextLine();
		int l=(s.length());
		int t=l;
		for(int i=0;i<t;i++){
			System.out.print(s.charAt(i));
			System.out.print("\t");
			i++;
			
		}
				
	}
}
