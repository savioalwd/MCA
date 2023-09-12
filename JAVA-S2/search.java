import java.util.*;
class search{
    public static void main(String []args){
        System.out.println("Search an element");
        int i,m,s,flag=0;
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter the size of the array :");
        m=sc.nextInt();
        int a[]=new int[m];
        System.out.println("Enter array elements :");
        for(i=0;i<m;i++){
            a[i]=sc.nextInt();
        }
        for(i=0;i<m;i++){
            System.out.print(a[i]+"  ");
        }
        System.out.println("\nEnter the element to search :");
        s=sc.nextInt();
        for(i=0;i<m;i++){
            if(a[i]==s){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        }
        if(flag==1){
            System.out.println(s+ " Found in array");

        }
        else{
            System.out.println(s+ " Not Found in array");

        }
    }
}