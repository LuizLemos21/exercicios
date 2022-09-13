package q17_19;

import java.util.Scanner;
public class Principal {

	public static void main(String[] args) {
		int size = 0;
		
		System.out.println("Digite o tamanho do Array");
		Scanner scan = new Scanner(System.in);
		size = scan.nextInt();
		
		int x [] = new int[size];
		
		System.out.println("Preencha o Array:");
		for(int i = 0; i<size;i++) {
			System.out.println("["+ i +"]: ");
			x[i] = scan.nextInt();
		}

		
		for(int i = 0; i<x.length;i++) {
			System.out.println(x[i]);
			
		}
		
		
		System.out.println("Array Invertido");
		x = Array.inverteArray(x);
		for(int i = 0; i<x.length;i++) {
			System.out.println(x[i]);
		}
		
		System.out.println("Ordenada de forma crescente");
		x = Array.ordenaCrescente(x);
		for(int i = 0; i<x.length;i++) {
			System.out.println(x[i]);
		}
		System.out.println("Ordenada de forma decrescente");
		x = Array.ordenaDecrescente(x);
		for(int i = 0; i<x.length;i++) {
			System.out.println(x[i]);
		}
		
		System.out.println("Maior número:"+ Array.maiorNumero(x));
		System.out.println("Menor número:"+ Array.menorNumero(x));
		System.out.println("Media:"+Array.media(x));
		System.out.println("Desvio Padrão:"+Array.dP(x));
		
		
		
		
		
		
	}

}
