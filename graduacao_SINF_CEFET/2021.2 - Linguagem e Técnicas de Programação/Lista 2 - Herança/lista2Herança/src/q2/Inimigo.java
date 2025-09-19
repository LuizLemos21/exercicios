package q2;

public class Inimigo extends Personagem {

	public Inimigo(float energia) {
		super(energia);
	}
	
	public void isHit(Poder p) {
		System.out.println("Inimigo atingido!");
		super.setEnergia(super.getEnergia() - p.getDano());
		if (super.getEnergia() <= 0) {
			System.out.println("Inimigo morreu!");
		}
	}

}
