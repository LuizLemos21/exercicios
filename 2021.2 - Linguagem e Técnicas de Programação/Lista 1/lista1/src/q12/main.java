package q12;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		Retangulo retangulo1 = new Retangulo();		
		System.out.println("Retangulo 1:");
		System.out.println("lado 1:");
		retangulo1.setLado1(scanner.nextFloat());
		System.out.println("lado 2:");
		retangulo1.setLado2(scanner.nextFloat());
		
		Retangulo retangulo2 = new Retangulo();		
		System.out.println("Retangulo 2:");
		System.out.println("lado 1:");
		retangulo2.setLado1(scanner.nextFloat());
		System.out.println("lado 2:");
		retangulo2.setLado2(scanner.nextFloat());
		
		Retangulo retangulo3 = new Retangulo();		
		System.out.println("Retangulo 3:");
		System.out.println("lado 1:");
		retangulo3.setLado1(scanner.nextFloat());
		System.out.println("lado 2:");
		retangulo3.setLado2(scanner.nextFloat());
		
		System.out.println("Area do retangulo 1: "+ retangulo1.area());
		System.out.println("Perimetro do retangulo 1: "+ retangulo1.perimetro());

		System.out.println("Area do retangulo 2: "+ retangulo2.area());
		System.out.println("Perimetro do retangulo 2: "+ retangulo2.perimetro());

		System.out.println("Area do retangulo 3: "+ retangulo3.area());
		System.out.println("Perimetro do retangulo 3: "+ retangulo3.perimetro());
		
		
	}

}
