class Person{
	String name;
	int age;
	
	void speak(){
		System.out.println("My name is: " + name);
	}
	
	int calculateYearsToRetirment(){
		int yearsLeft = 65-age;
		
		System.out.println(yearsLeft);
		
		return yearsLeft;
		}
	int getAge(){   //'getters' to get data from class
		return age;
	}
	
	String getName(){
		return name;
	}
	
}



public class App {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Person person1 = new Person();
		person1.name = "Joe";
		person1.age = 25;
		person1.speak();
		int years = person1.calculateYearsToRetirment();
		System.out.println(years);
		
		int age = person1.getAge();
		String name = person1.getName();
		
		System.out.println(age);
		System.out.println(name);
		

	}

}
