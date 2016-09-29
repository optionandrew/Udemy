class Robot {
	public void speak(String text){
		System.out.println(text);
	}
	
	public void jump (int height){
		System.out.println("Jumping: " + height);
	}
	
	public void move (String direction, double distance){
		System.out.println("Moving " + distance +" in direction " +direction);
		
	}
}


public class App {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Robot sam = new Robot();
		sam.speak("Hi I'm sam.");
		sam.jump(7);
		sam.move("North", 10);
		
		String greeting = "Hello there.";
		
		sam.speak(greeting);
		
		
		

	}

}
