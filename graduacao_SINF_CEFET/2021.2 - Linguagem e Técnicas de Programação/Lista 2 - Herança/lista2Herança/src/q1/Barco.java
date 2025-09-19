package q1;

public class Barco extends Veiculo{
	private int regEmbarcacao;
	private boolean ancorado;
	

	public void ancorar() {
		if (!super.isLigado()) {
			System.out.println("Ligue o carro primeiro!");
		} else {
		if(ancorado) {
			System.out.println("Barco já está ancorado");
		} else {
			System.out.println("Barco ancorando...");
			this.ancorado = true;
		}
		}
	}
	public void desancorar() {
		if (!super.isLigado()) {
			System.out.println("Ligue o carro primeiro!");
		} else {
		if(!ancorado) {
			System.out.println("Barco já está desancorado");
		} else {
		this.ancorado = false;
		}
		}
	}
	
	public Barco(int regEmbarcacao) {
		super();
		this.regEmbarcacao = regEmbarcacao;
	}
	public void navegar() {
		if (!super.isLigado()) {
			System.out.println("Ligue o carro primeiro!");
		} else {
		if(ancorado) {
			System.out.println("o barco precisa ser desancorado primeiro!");
		} else {
		System.out.println("Barco navegando...");
		}
		}
	}
	
	
}
