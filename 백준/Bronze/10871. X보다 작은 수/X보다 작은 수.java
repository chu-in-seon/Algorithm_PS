import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int T, X = 0;
		
		T = input.nextInt();
		X = input.nextInt();
		Integer[] arr;
		arr = new Integer[T];
		for(int i = 0; i < T; i++) {
			arr[i] = input.nextInt();
		}
		int temp = X;
		for(int i = 0; i < T; i++) {
			if(temp > arr[i]) {
				System.out.printf("%d ", arr[i]);
			}
		}
	}

}
