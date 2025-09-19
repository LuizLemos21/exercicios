package q1;

public class Dog extends Animal {

	@Override
	public void respirar() {
		// TODO Auto-generated method stub
		System.out.println("Cão respirando...");
		
	}

	@Override
	public void dormir() {
		System.out.println("Cão dormindo...");
		
	}

	@Override
	public void comer() {
		System.out.println("Cão comendo...");
		
	}

	@Override
	public void andar() {
		System.out.println("Cão andando...");
		
	}
	
	public void latir() {
		System.out.println("Cão latindo...");
	}
	
}
