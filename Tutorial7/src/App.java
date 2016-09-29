import java.util.Scanner;

public class App {

	public static void main(String[] args) {
		
		//Create scanner object
		Scanner userInput = new Scanner(System.in);
		
		//output the prompt
		System.out.println("Enter a line of text: ");
		
		//wait for the user to enter a line
		String line = userInput.nextLine();
		
		//tell them what they entered
		System.out.println("You entered: " + line);
		
	}

}
