package q1;

public class Dog extends Animal {

	@Override
	public void respirar() {
		// TODO Auto-generated method stub
		System.out.println("C�o respirando...");
		
	}

	@Override
	public void dormir() {
		System.out.println("C�o dormindo...");
		
	}

	@Override
	public void comer() {
		System.out.println("C�o comendo...");
		
	}

	@Override
	public void andar() {
		System.out.println("C�o andando...");
		
	}
	
	public void latir() {
		System.out.println("C�o latindo...");
	}
	
}
