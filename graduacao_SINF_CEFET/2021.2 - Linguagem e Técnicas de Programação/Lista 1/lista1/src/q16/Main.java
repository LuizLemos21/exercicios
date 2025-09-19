package q16;

public class Main {

	public static void main(String[] args) {
		ContaCorrente c1 = new ContaCorrente(1);
		ContaCorrente c2 = new ContaCorrente(2);
		
		c1.setNomeCliente("Ronaldo");
		c2.setNomeCliente("Fernando");
		
		c1.setLimite(500.00f);
		c2.setLimite(400.00f);
		
		c1.setSituacao(true);
		c2.setSituacao(false);
		
		c1.depositar(1200f);
		c2.depositar(1300f);
		
		c2.setSituacao(true);
		
		c1.depositar(600f);
		c2.depositar(3500f);
		
		c1.sacar(550f);
		c2.sacar(300f);
		c1.sacar(10000f);
		
		c2.transferir(300, c1);
		c1.transferir(600, c2);
		
		System.out.println("Saldo de "+c1.getNomeCliente() + ": R$"+c1.getSaldo());
		System.out.println("Saldo de "+c2.getNomeCliente() + ": R$"+c2.getSaldo());
		

	}

}
