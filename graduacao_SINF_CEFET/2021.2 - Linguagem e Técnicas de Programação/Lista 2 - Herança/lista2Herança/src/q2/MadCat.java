package q2;

public class MadCat extends Inimigo{
	
	private static int i = 0; 
	private int num;
	public MadCat(float energia) {
		super(energia);
		this.num = i+1;
		this.i++;
		System.out.println("MadCat "+ num +" inicializado!");
	}
	
	public void isHit(Poder p) {
		System.out.println("MadCat "+ num +" atingido pelo "+p.getNome()+"!");
		super.setEnergia(super.getEnergia() - p.getDano());
		if (super.getEnergia() <= 0) {
			System.out.println("MadCat "+ num +" morreu!");
		}
	}

}
