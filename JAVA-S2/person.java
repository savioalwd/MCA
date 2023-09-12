import java.util.*;

public class person{
	String name,address,gender;
	int age;
	person(){
		name="Merkes";
		gender="Male";
		address="Rosevilla,Canada";
		age=19;
	}	

	
	public static void main(String []args){
		
		
		Scanner sc=new Scanner(System.in);
		
		System.out.println("1:person,2:employee,3:teacher");
		int f=1;
		while(f==1){
			System.out.println("Enter value :");
			int num=sc.nextInt();
			display(num);
		}
			

	}
	public static void display(int num){
	
	if(num==1){
		person str=new person();
		System.out.println("Name :"+str.name);
		System.out.println("Gender :"+str.gender);
		System.out.println("Address :"+str.address);
		System.out.println("Age :"+str.age);	
	}
	else if(num==2){
		employee em=new employee();
		System.out.println("Employee id :"+em.empid);
		System.out.println("Company name :"+em.cmpyname);
		System.out.println("Qualification :"+em.qualif);
		System.out.println("Salary :"+em.salary);
	}
	else if(num==3){
		teacher te=new teacher();
		System.out.println("Subject :"+te.sub);
		System.out.println("Department :"+te.dept);
		System.out.println("ID :"+te.id);	
	}
	else{
		System.out.println("Enter valid value");
	}
	
	}
}


class employee extends person{
	
	String cmpyname,qualif;
	int empid,salary;
	
	employee(){
		empid=101;
		cmpyname="Deliverteam";
		qualif="Degree";
		salary=10000;
	}
		
}

class teacher extends person{
	
	String sub,dept;
	int id;
	
	teacher(){
		sub="Chemistry";
		dept="Biology";
		id=2255;
	}
}




	
