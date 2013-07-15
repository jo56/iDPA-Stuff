
public class LoopPrime {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
for (int num = 1;num <= 100; num ++){
	int i;
	for ( i = 2; i < num; i++){
		int n = num % i;
		if (n == 0){ 
		System.out.println(num + " is not a prime!");
		break;
		}
}
	if (i==num){
		System.out.println(num + " is a Prime!");
	}
	}
	}
	}
