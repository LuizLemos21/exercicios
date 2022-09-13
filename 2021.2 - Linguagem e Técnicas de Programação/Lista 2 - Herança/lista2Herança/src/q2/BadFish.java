package q2;

public class BadFish extends Inimigo{
	
	private static int i = 0; 
	private int num;
	public BadFish(float energia) {
		super(energia);
		this.num = i+1;
		this.i++;
		System.out.println("BadFish "+ num +" inicializado!");
	}
	
	public void isHit(Poder p) {
		System.out.println("BadFish "+ num +" atingido pelo "+p.getNome()+"!");
		super.setEnergia(super.getEnergia() - p.getDano());
		if (super.getEnergia() <= 0) {
			System.out.println("BadFish "+ num +" morreu!");
		}
	}
	
}
