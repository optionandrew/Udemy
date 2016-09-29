
public class App {
public static void main(String[] args) {
	
	int value = 7;
	
	int[] values;  //int array called values.  
	
	values = new int[3];
	
	System.out.println(values[1]);
	
	values[0]=10;
	values[1]=120;
	values[2]=33;

	
	System.out.println(values[0]);
	System.out.println(values[1]);
	System.out.println(values[2]);

	for (int i =0; i<values.length;i++){
		System.out.println(values[i]);
	}
	
	int[] numbers={5,6,7};
	 
	for(int i=0;i<numbers.length;i++){
		
		System.out.println(numbers[i]);
		
	}
	
	int[] test= new int [7];
	 
	for(int i=0;i<numbers.length;i++){
		
		System.out.println("test " + test[i]);
}
}
}
