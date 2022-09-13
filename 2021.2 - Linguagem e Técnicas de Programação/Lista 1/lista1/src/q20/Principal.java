package q20;

public class Principal {

	public static void main(String[] args) {
		String s1 = new String("Teste");
		s1 = Cryptographye.encrypt(s1);
		System.out.println(s1);
		s1 = Cryptographye.decrypt(s1);
		System.out.println(s1);
		
		String s2 = new String("Três pratos de trigo para três tigres tristes");
		s2 = Cryptographye.encrypt(s2);
		System.out.println(s2);
		s2 = Cryptographye.decrypt(s2);
		System.out.println(s2);
	}

}
