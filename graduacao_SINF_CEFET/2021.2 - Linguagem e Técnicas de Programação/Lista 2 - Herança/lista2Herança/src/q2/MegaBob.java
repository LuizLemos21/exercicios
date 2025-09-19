package q2;

public class MegaBob extends Inimigo{
	private static int i = 0; 

	public MegaBob(int energia) {
		super(energia);
		this.i++;
		System.out.println("MegaBob "+i+" Inicializado!");
	}

}
