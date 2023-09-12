import java.util.*;
class sum5
{       
        public static void main(String arg[])
        {
                int a[]=new int[5];
                int sum=0;
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter numbers :");
                for(int i=0;i<5;i++){
                        a[i]=sc.nextInt();
                        sum=sum+a[i];
                }
                System.out.println("SUM is :"+sum);
                sc.close();       
        }
}
