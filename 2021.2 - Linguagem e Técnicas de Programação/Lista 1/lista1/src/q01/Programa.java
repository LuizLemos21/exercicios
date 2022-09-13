package q01;


	import java.util.Scanner;
	public class Programa {

		public static void main(String[] args) {
			System.out.println("Insira uma media:");
			Scanner scanner = new Scanner(System.in);
			float media1 = scanner.nextFloat();
			System.out.println("Insira mais uma media:");
			float media2 = scanner.nextFloat();
			if(media1+media2>=12) {
				System.out.println("Aluno Aprovado!");
			} else {
				System.out.println("Aluno Reprovado!");
			}

		}

	}
	

