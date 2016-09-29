
public class App {

	public static void main(String[] args) {
		
		int[] values = {3, 5, 2343};
		
		//System.out.println(values[2]);
		
		int[][] grid = { {3, 5, 2343},
				{2,4},
				{1,2,3,4}
				};
		
		
		System.out.println(grid[1][1]);
		System.out.println(grid[0][2]);
		
		String[][] texts = new String[2][3];
		
		texts[0][1]="hello there";

		
		System.out.println(texts[0][1]);
		
		System.out.println();
		System.out.println();
		
		for(int i = 0 ; i <grid.length; i++){
			for (int j = 0 ; j<grid[i].length;j++)
			{			System.out.print(grid[i][j]+",");
		
			}
			System.out.print("\n");
		}
		
	}

}
