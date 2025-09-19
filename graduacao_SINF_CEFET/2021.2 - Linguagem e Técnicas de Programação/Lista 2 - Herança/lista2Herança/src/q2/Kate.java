package q2;

public class Kate extends Personagem {
	private int quantVidas;

	public int getQuantVidas() {
		return quantVidas;
	}
	
	

	public Kate(float energia,int QuantVidas) {
		super(energia);
		this.quantVidas = QuantVidas;
		System.out.println("Kate inicializada!");
	}



	private Poder[] poderes = new Poder[4];
	
	public void equipaPoder(Poder poder) {
		Poder aux = poderes[0];
		int j = 0;
		for(int i = 0; i<4;i++) {
			if(this.poderes[i].getNome() == poder.getNome()) {
				poderes[0] = poderes[i];
				poderes[i] = aux;
				System.out.println(poder.getNome()+" Equipado!");
				break;
			} else {
				j++;
			}
		}
		if(j==4) {
			System.out.println("Poder não localizado!");
		}
		
	}
	
	public void usaPoder(){
		//super.setEnergia(getEnergia() - poderes[0].getConsumoEnergia());
		System.out.println(poderes[0].getNome()+" Utilizado!");
	}
	private int i = 0;
	
	public void addPoder(Poder poder) {
		if (i<4) {
			poderes[i] = poder;
			System.out.println("Poder "+poder.getNome()+" adicionado no slot"+i+"!");
			i++;
		} else {
			System.out.println("Incapaz de adicionar Poder "+poder.getNome()+"! Remova outro poder para liberar espaco!");
		}
	}
	
	public void removePoder(int num) {
		if (num>=0 || num>=4) {
			this.i = num;
		} else {
			System.out.println("Slot invalido!");
		}
	}
	
	
	public void setQuantVidas(int quantVidas) {
		this.quantVidas = quantVidas;
	}
	
	public void pular() {
		System.out.println("Kate pulando...");
	}
	
	public void andar() {
		System.out.println("Kate andando...");
	}

	
	public Poder getMainPower() {
		return poderes[0];
	}
	
	
	
}
