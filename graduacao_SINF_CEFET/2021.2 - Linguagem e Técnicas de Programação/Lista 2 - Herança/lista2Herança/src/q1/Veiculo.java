package q1;

public class Veiculo {
	
	private boolean ligado = false;
	
	public boolean isLigado() {
		return ligado;
	}

	public void setLigado(boolean ligado) {
		this.ligado = ligado;
	}

	private boolean parado = true;
	
	
	
	public boolean isParado() {
		return parado;
	}

	public void setParado(boolean parado) {
		this.parado = parado;
	}

	public void ligar() {
		if(ligado) {
			System.out.println("Veiculo j� est� ligado!");
		} else {
		System.out.println("Veiculo ligando...");
		this.ligado = true;
		}
	}
	
	public void desligar() {
		if (!ligado) {
			System.out.println("Ve�culo j� est� desligado!");
		} else {
		System.out.println("Veiculo desligando...");
		this.ligado = false;
		}
	}
	
	public void moverparafrente() {
		if(!ligado) {
			System.out.println("Ligue o ve�culo primeiro!");
			
		} else {
		System.out.println("Veiculo indo pra frente...");
		this.parado = false;
		}
	}
	
	public void re () {
		if(!ligado) {
			System.out.println("Ligue o ve�culo primeiro!");
		} else {
		System.out.println("Veiculo dando r�...");
		this.parado = false;
		}
	}
	
	public void parar() {
		if(!ligado) {
			System.out.println("Ligue o ve�culo primeiro!");
		} else {
		System.out.println("Veiculo parado...");
		parado = true;
		}
	}
	
	
	
	
	
	
	
	
	

}
