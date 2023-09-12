import java.util.*;
class diago
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
     
                         }
                 }
                  System.out.println("Diagonal elements are :");
                 for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                                        if(i==j){
                                         System.out.println(a[i][j]);
                                         sum=sum+a[i][j];
                                }
                        }
                }
                  System.out.println("Diagonal elements sum is :"+sum);
                
                
                sc.close();       
        }
}
