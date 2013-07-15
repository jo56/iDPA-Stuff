import java.util.Random;
import java.util.Scanner;


public class MadLibs {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Random r = new Random();
		System.out.println("Write an adjective");
		String adjective = s.nextLine();
		System.out.println(adjective);
		System.out.println("Write a name");
		String name = s.nextLine();
		System.out.println(name);
		System.out.println("Write a verb");
		String verb = s.nextLine();
		System.out.println(verb);
		System.out.println("Write a place");
		String place = s.nextLine();
		System.out.println(place);
		System.out.println("Write a statement");
		String state1 = s.nextLine();
		System.out.println(state1); 
		System.out.println("Write an example of food");
		String food = s.nextLine();
		System.out.println(food);
		System.out.println("Write an example of drink");
		String drink = s.nextLine();
		System.out.println(drink);
		if (r.nextInt(2)==0){
		System.out.println(adjective + name + verb + "to " + place + "and said " + state1 + "while eating a " + food + "and drinking " + drink);
		}else{System.out.println(name + verb);}
}
}