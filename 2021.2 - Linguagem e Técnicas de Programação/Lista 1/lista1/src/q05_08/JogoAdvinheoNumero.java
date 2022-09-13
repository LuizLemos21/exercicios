package q05_08;
import java.util.Random;
import java.util.Scanner;

public class JogoAdvinheoNumero {

	public static void main(String[] args) {
		System.out.println("Advinhe o Numero!");
		Random rand = new Random();
		Scanner scanner = new Scanner(System.in);
		int alvo = rand.nextInt(100);
		int upperbound = 100;
		int lowerbound = 0;
		int tentativas = 1;
		System.out.println("O numero está entre "+ lowerbound +" e " + upperbound);
		int num = scanner.nextInt();
		while (num !=alvo) {
			tentativas++;
			System.out.println("Errou!");
			if (num > alvo) {
				upperbound = num;
			} else if (num < alvo) {
				lowerbound = num;
			}
			System.out.println("O numero está entre "+ lowerbound +" e " + upperbound);
			num = scanner.nextInt();
				
		}
		
		System.out.println("Voce acertou! :) ");
		if(tentativas==1) {
			System.out.println("Voce é excelente!");
		} else if (tentativas>1 && tentativas<10) {
			System.out.println("Voce é bom");
		} else if (tentativas>10 && tentativas<20) {
			System.out.println("Voce não foi tão bem");
		} else if (tentativas>20) {
			System.out.println("Voce precisa praticar");
		}
		System.out.println("Numero de tentativas: "+tentativas);
	}
	
}
