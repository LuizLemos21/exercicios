package q10;
public class main {

	public static void main(String[] args) {
		Automovel carro1 = new Automovel();
		Automovel carro2 = new Automovel();
		
		carro1.setModelo("Fiat Uno (com escada)");
		carro2.setModelo("Bugatti Chiron Super Sport 300+");
		
		carro1.correr(252);
		carro1.correr(162);
		
		carro2.correr(58);
		carro2.correr(88);
		
		System.out.println("Distancia percorrida pelo "+carro1.getModelo()+": "+ carro1.distanciaPercorrida(10000, 2)+"Km");
		System.out.println("Distancia percorrida pelo "+carro2.getModelo()+": "+ carro2.distanciaPercorrida(489, 10)+"Km");
		
		System.out.println("Quilometragem total de "+carro1.getModelo()+": "+carro1.getKmTotal()+"Km");
		System.out.println("Quilometragem total de "+carro2.getModelo()+": "+carro2.getKmTotal()+"Km");

	}

}
