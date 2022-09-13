package q03;
import java.util.Scanner;
public class InformaMaiorValor {

	public static void main(String[] args) {
		System.out.println("Insira o valor 1:");
		Scanner scanner = new Scanner(System.in);
		float v1 = scanner.nextFloat();
		System.out.println("Insira o valor 2:");
		float v2 = scanner.nextFloat();
		System.out.println("Insira o valor 3:");
		float v3 = scanner.nextFloat();
		if(v1>=v2 && v1>=v3) {
			System.out.println(v1+" é o maior valor");
		} else if(v2>=v1 && v2>=v3) {
			System.out.println(v2+" é o maior valor");
		} else {
			System.out.println(v3+" é o maior valor");
		}

	}

}
