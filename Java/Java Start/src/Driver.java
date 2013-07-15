
import java.util.Random;
import java.util.Scanner;
public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int[]arr = new int[10];
		
		Random r = new Random();
		int a = 5; 
		double b = 3.45;
		char c = 'c';
		boolean d = true;
		String e = "Hello World!";
		
		
		Scanner scan = new Scanner(System.in);
		int i = scan.nextInt();
		String f = scan.nextLine();
		
		scan.close();
		
		Dog[] dogYeah = new Dog[100];
		for(int k =0; k <100; k++)
		{
			dogYeah[k] = new Dog();
		}
		
		Dog gaws = new Dog(); 
		
		gaws.setage(21);
		
	}

}
