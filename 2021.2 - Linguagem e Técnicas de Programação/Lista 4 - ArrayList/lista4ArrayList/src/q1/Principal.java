package q1;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;


public class Principal {

	public static void main(String[] args) {
		
		Dog d1 = new Dog("Kate",LocalDateTime.of(2009, 6, 12, 0, 0, 0),"Vira Lata","Preta",(float) 35.00);
		Dog d2 = new Dog("Bob",LocalDateTime.of(2010, 10, 9, 0, 0, 0),"Bulldog","Preta",(float) 22.00);
		Dog d3 = new Dog("Pitty",LocalDateTime.of(2007, 03, 2, 0, 0, 0),"Pitbull","Branca",(float) 38.00);
		Dog d4 = new Dog("Kelly",LocalDateTime.of(2001, 05, 8, 0, 0, 0),"Labrador","Amarela",(float) 36.00);
		Dog d5 = new Dog("Peixe",LocalDateTime.of(2008, 11, 9, 0, 0, 0),"Vira Lata","Amarela",(float) 20.00);
		Dog d6 = new Dog("Grazi",LocalDateTime.of(2012, 12, 12, 0, 0, 0),"Pastor","Amarela",(float) 18.00);
		
		d1.Nutricao();
		d2.Nutricao();
		d3.Nutricao();
		d4.Nutricao();
		d5.Nutricao();
		d6.Nutricao();
		
		
		
		Pessoa p1 = new Pessoa("Diana");
		Pessoa p2 = new Pessoa("Louis");
		Pessoa p3 = new Pessoa("Bruce");
		Pessoa p4 = new Pessoa("Clark");
		
		FichaAdocao f1 = new FichaAdocao(LocalDateTime.of(2010, 12, 24, 0, 0, 0),p1,d1);
		FichaAdocao f2 = new FichaAdocao(LocalDateTime.of(2011, 3, 03, 0, 0, 0),p2,d2);
		FichaAdocao f3 = new FichaAdocao(LocalDateTime.of(2007, 6, 18, 0, 0, 0),p3,d3);
		FichaAdocao f4 = new FichaAdocao(LocalDateTime.of(2002, 9, 1, 0, 0, 0),p4,d4);
		
		Pessoa p5 = new Pessoa("Michael");
		f1.TrocaPessoa(p5);
		
		f1.printTempoNaONG();
		f2.printTempoNaONG();
		f3.printTempoNaONG();
		f4.printTempoNaONG();
		
		f1.printTempoAdotado();
		f2.printTempoAdotado();
		f3.printTempoAdotado();
		f4.printTempoAdotado();
		
		ArrayList<FichaAdocao> adocoes = new ArrayList<FichaAdocao>();
		adocoes.add(f1);
		adocoes.add(f2);
		adocoes.add(f3);
		adocoes.add(f4);
	
		String nome = "Bob";
		long tempoadotado = 0;
		int ViralatasAdotados = 0;
		int buscaCaes = 0;
		Dog maiorTempoAdotado = null;
		
		for (int i = 0; i < adocoes.size(); i++) {
			FichaAdocao ficha = (FichaAdocao)adocoes.get(i);
			
			if(ficha.getCaoAdotado().getNome() == nome) {
				buscaCaes++;
			}
			if(ficha.getCaoAdotado().getRaca()=="Vira Lata") {
				ViralatasAdotados++;
			}
			
			if(ficha.getDiasAdotado()>tempoadotado) {
				tempoadotado = ficha.getDiasAdotado();
				maiorTempoAdotado = ficha.getCaoAdotado();
			}
		}
		
		if(buscaCaes==0) {
			System.out.println("Cão " + nome + " não encontrado!");
		} else 
			System.out.println("Cão " + nome + " encontrado!");
			
		
		System.out.println("Cães da Raça Vira-Lata adotados: "+ViralatasAdotados);
		System.out.println("Cão com maior tempo de adoção: Nome: "+maiorTempoAdotado.getNome()+" Tempo Adotado: "+(int)tempoadotado/365+" anos");
	
		
		
		ArrayList<Dog> cachorros = new ArrayList<Dog>();
		cachorros.add(d1);
		cachorros.add(d2);
		cachorros.add(d3);
		cachorros.add(d4);
		cachorros.add(d5);
		cachorros.add(d6);
		
		int desnutridos = 0;
		int amarelos = 0;
		int viraLatas = 0;
		
		for (int i = 0; i < cachorros.size(); i++) {
			Dog dog = (Dog)cachorros.get(i);
			if(dog.getPeso()<20) {
				desnutridos++;
			}
			if(dog.getCor()=="Amarela") {
				amarelos++;
			}
			
			if(dog.getRaca()=="Vira Lata") {
				viraLatas++;
			}
		}
		
		System.out.println(desnutridos+" cachorros estão desnutridos :(");
		System.out.println(amarelos+" cachorros são amarelos");
		System.out.println(viraLatas+" cachorros são Vira Latas");
		

	}

}
