import java.util.*;

class sort{
 
    public static void main(String[] args)
    {
    	Scanner sc=new Scanner(System.in);
       	System.out.println("Enter the string :");
        String str = sc.nextLine();
      	char arr[] = str.toCharArray();
      	Arrays.sort(arr);
 
        System.out.println(arr);
    }
}


