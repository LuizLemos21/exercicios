package q1;

public class Automovel extends Veiculo{
	private int renavam;
	private String placa;
	
	public Automovel(int renavam, String placa) {
		super();
		this.renavam = renavam;
		this.placa = placa;
	}
	
	public void frear() {
		if (!super.isLigado()) {
			System.out.println("Ligue o carro primeiro!");
		} else {
		System.out.println("Carro freando...");
		}
	}
	
	public void passarmarcha() {
		if (!super.isLigado()) {
			System.out.println("Ligue o carro primeiro!");
		} else {
		if(!super.isParado()) {
			System.out.println("Carro passando marcha");
		} else {
			System.out.println("Movimente o carro primeiro!");
		}
		
		}
		
	}
}
