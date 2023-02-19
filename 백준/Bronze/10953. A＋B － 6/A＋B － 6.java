import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T, number1, number2;
		T = Integer.parseInt(sc.nextLine());
		for(int i = 0; i < T; i++) {
			String str = sc.nextLine();
			StringTokenizer st = new StringTokenizer(str, "\n ,");
			number1 = Integer.parseInt(st.nextToken());
			number2 = Integer.parseInt(st.nextToken());
			System.out.println(number1 + number2);
		}
	}
}
