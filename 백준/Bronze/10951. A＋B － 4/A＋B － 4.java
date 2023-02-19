import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextLine()) {
			String str = sc.nextLine();
			StringTokenizer st = new StringTokenizer(str, "\n ");
			int number1, number2;
			number1 = Integer.parseInt(st.nextToken());
			number2 = Integer.parseInt(st.nextToken());
			System.out.println(number1 + number2);
		}
	}

}
