class Person{
	// Instance variables (date or 'state')
	String name;
	int age;
		
	
	
	// Classes can contain:
	// 1. Data
	// 2. Subroutines (methods)
	
	void speak(){
		System.out.println("My name is: " + name + " and I am "+ age +" years old");
	}
	
	void sayHello(){
		System.out.println("Hello");
	}
	
}



public class App {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Person person1 = new Person();
		person1.name = "Joe Bloggs";
		person1.age = 37;
		person1.sayHello();
		person1.speak();
		
		Person person2 = new Person();
		person2.name = "Sarah Smith";
		person2.age = 20;
		person2.speak();
		
		

	}

}
