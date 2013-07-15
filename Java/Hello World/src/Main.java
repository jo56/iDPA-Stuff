
import java.util.*;
public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("Hello World!");
		Scanner s = new Scanner(System.in);
		System.out.println("How long until you accept your new robot overlords?");
		String answer = s.nextLine();
		System.out.println(answer);
		System.out.println("How old are you?");
		String answer1 = s.nextLine();
		System.out.println(answer1);
		Random r = new Random();
		System.out.println(r.nextInt(15000));
		}
}
