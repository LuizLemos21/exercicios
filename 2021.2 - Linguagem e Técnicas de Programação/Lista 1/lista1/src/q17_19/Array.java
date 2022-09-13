package q17_19;
import java.lang.Math;
public class Array {
	public static int[] ordenaCrescente (int[] x ) {
	
		int aux, menor;
		for(int i=0;i<x.length;i++) {
			menor = i;
			for(int j=i+1;j<x.length;j++) {
				if(x[j]<x[menor]) {
					menor = j;
				}
			}
			aux = x[i];
			x[i] = x[menor];
			x[menor] = aux;
		}
		return x;
	}




	public static int[] ordenaDecrescente (int[] x ) {
	
		int aux, maior;
		for(int i=0;i<x.length;i++) {
			maior = i;
			for(int j=i+1;j<x.length;j++) {
				if(x[j]>x[maior]) {
					maior = j;
				}
			}
			aux = x[i];
			x[i] = x[maior];
			x[maior] = aux;
		}
		return x;
	}
	
	public static int[] inverteArray(int[] x) {
		int y[] = new int[x.length];
		int j,aux;
		for (int i=0; i<x.length; i++) {
		    j=x.length-i-1;
		    y[j] = x[i];
		}
		return y;
		
		
		
	}
	
	public static int maiorNumero(int[] x) {
		int maior = x[0];
		for (int i=0; i<x.length; i++) {
			if(x[i]>maior)
				maior = x[i];
		}
		return maior;
	}
	
	public static int menorNumero(int[] x) {
		int menor = x[0];
		for (int i=0; i<x.length; i++) {
			if(x[i]<menor)
				menor = x[i];
		}
		return menor;
	}
	
	public static float media(int[]x) {
		float media; 
		int soma = 0, i;
		for (i=0; i<x.length; i++) {
			soma+= x[i];
		}
		media = soma/i;
		return media;
	}
	
	public static float dP (int x[]) {
		float media = Array.media(x);
		float dp = 0;
		int i;
		for (i=0; i<x.length; i++) {
			dp+= (x[i]-media)*(x[i]-media);
		}
		dp= (float) Math.sqrt((dp/i));
		return dp;
	}


}
