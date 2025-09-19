package q11;

import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		int anoAtual;
		Scanner scanner = new Scanner(System.in);
		Pessoa pessoa1 = new Pessoa();
		
		System.out.println("digite o nome da pessoa:");
		pessoa1.setNome(scanner.nextLine());
		

		System.out.println("digite o ano de nascimento de "+ pessoa1.getNome());
		pessoa1.setAnoNasc(scanner.nextInt());
		
		System.out.println("digite o ano atual");
		anoAtual = scanner.nextInt();
		
		System.out.println("A idade de " + pessoa1.getNome() + " é de "+ pessoa1.calculaidade(anoAtual)+" anos");
	}

}
