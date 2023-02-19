import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int number1, number2;
		String str = sc.nextLine();
		StringTokenizer st = new StringTokenizer(str, "\n ");
		number1 = Integer.parseInt(st.nextToken());
		number2 = Integer.parseInt(st.nextToken());
		System.out.println(number1 + number2);
		while(number1 != 0 && number2 != 0) {
			str = sc.nextLine();
			st = new StringTokenizer(str, "\n ");
			number1 = Integer.parseInt(st.nextToken());
			number2 = Integer.parseInt(st.nextToken());
			if(number1 == 0 && number2 == 0) break;
			System.out.println(number1 + number2);
		}
	}

}
