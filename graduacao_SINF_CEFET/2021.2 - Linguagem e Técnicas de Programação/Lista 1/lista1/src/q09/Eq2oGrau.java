package q09;
import java.util.Scanner;
public class Eq2oGrau {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Equação de Segundo Grau:");
		System.out.println("Insira o valor de a:");
		float a = scanner.nextFloat();
		System.out.println("Insira o valor de b:");
		float b = scanner.nextFloat();
		System.out.println("Insira o valor de c:");
		float c = scanner.nextFloat();
		System.out.println(a+"x^2 + "+ b +"x + " + c + "= 0");
		double r1 = ((b*-1)+ Math.sqrt((b*b)-4*a*c))/2*a;
		double r2 = ((b*-1)- Math.sqrt((b*b)-4*a*c))/2*a;
		System.out.println("As raizes dessa equação são: "+r1+" e "+r2 );
	}

}
