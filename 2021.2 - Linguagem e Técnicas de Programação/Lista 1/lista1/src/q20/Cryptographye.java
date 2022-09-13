package q20;

public class Cryptographye {
	public static String encrypt(String x) {
		String cesar;
		char[] aux = new char[x.length()];   // transforma em um array char
		for(int i=0; i<x.length();i++) {
			aux[i] = x.charAt(i);
			aux[i]+=3;			
		}
		cesar = new String(aux);			// transforma esse array de volta em string
		return cesar;
	}
	
	public static String decrypt(String x) {
		String cesar;
		char[] aux = new char[x.length()];   
		for(int i=0; i<x.length();i++) {
			aux[i] = x.charAt(i);
			aux[i]-=3;			
		}
		cesar = new String(aux);			
		return cesar;
	}

}
