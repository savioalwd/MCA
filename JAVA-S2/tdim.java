import java.util.*;
class tdim
{       
        public static void main(String arg[])
        {
                int a[][]=new int[3][3];
                int sum=0;
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter numbers :");
                for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                                a[i][j]=sc.nextInt();
                                sum=sum+a[i][j];
                                
                         }
                }
                System.out.println("SUM is :"+sum);
                sc.close();       
        }
}
