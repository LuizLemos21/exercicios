package q2;

public class Aviao extends Veiculo {
	
	private int regAero;
	

	public Aviao(int regAero) {
		super();
		this.regAero = regAero;
	}

	@Override
	public void ligar() {
		System.out.println("Avi�o ligando...");
		
	}

	@Override
	public void desligar() {
		System.out.println("Avi�o desligando...");
		
	}

	@Override
	public void moverFrente() {
		System.out.println("Avi�o indo pra frente...");
		
	}

	@Override
	public void moverRe() {
		System.out.println("Avi�o dando r�...");
		
	}

	@Override
	public void parar() {
		System.out.println("Avi�o parando...");
		
	}
	

}
