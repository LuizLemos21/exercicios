package q15;
public class main {
	
	public static void main(String[] args) {
		Celula cel1 = new Celula();
		Celula cel2 = new Celula();
		Celula cel3 = new Celula();
		Celula cel4 = new Celula();
		System.out.println("Foram criadas " + cel1.getInstanceCount() + " celulas");
		Celula cel5 = new Celula();
		System.out.println("Foram criadas " + cel1.getInstanceCount() + " celulas");
		
		
	}
	
	

}
