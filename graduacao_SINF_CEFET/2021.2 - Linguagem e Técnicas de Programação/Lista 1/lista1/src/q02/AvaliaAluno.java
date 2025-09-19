package q02;
import java.util.Scanner;

public class AvaliaAluno {


		public static void main(String[] args) {
			System.out.println("Insira a Nota 1:");
			Scanner scanner = new Scanner(System.in);
			float nota1 = scanner.nextFloat();
			System.out.println("Insira a Nota 2:");
			float nota2 = scanner.nextFloat();
			if (nota1 > 10 || nota1<0 || nota2 >10 || nota2<0) {
				System.out.println("Valores não permitidos! As notas devem estar entre 0 e 10!");
			} else {
				float media = (nota1+nota2)/2; 
				if (media >= 6) {
					System.out.println("Aluno Aprovado!");
				} else if(media>=2 && media<6){
					System.out.println("Aluno em prova Final!:");
					System.out.println("Insira o valor da PF:");
					float pf = scanner.nextFloat();
					if (pf > 10 || pf<0) {
						System.out.println("Valores não permitidos! As notas devem estar entre 0 e 10!");
					} else {
						float mediaf = (media + pf)/2;
						if(mediaf >= 6) {
							System.out.println("Aluno Aprovado!");
						} else {
							System.out.println("Aluno Reprovado!");
						}
					}
				} else {
					System.out.println("Aluno Reprovado!");
				}
	
		   }
		}

	}


