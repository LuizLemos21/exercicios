package q21;
import q13.Dispositivo;
import java.util.ArrayList;
import q13.Ventilador;


public class Quarto {
	private Ventilador[] Arrayvent = new Ventilador[3];
	private Dispositivo[] Arraylamp = new Dispositivo[2];
	
	public Ventilador[] getArrayvent() {
		return Arrayvent;
	}
	public void setArrayvent(Ventilador v1, Ventilador v2, Ventilador v3) {
		Arrayvent[0] = v1;
		Arrayvent[1] = v2;
		Arrayvent[2] = v3;
		
	}
	public void printArraylamp() {
		for (int i = 0; i < Arraylamp.length; i++) {
			System.out.println("Nome:"+Arraylamp[i].getNome() + ", Ligado:" + Arraylamp[i].isLigado());
		}
	}
	
	public void printArrayVent() {
		for (int i = 0; i < Arrayvent.length; i++) {
			System.out.println("Nome:"+ Arrayvent[i].getNome() + ", Ligado:" + Arrayvent[i].isLigado() + ", Velocidade:" + Arrayvent[i].getVelocidade());
		}
	}
	
	public void setArraylamp(Dispositivo l1, Dispositivo l2) {
		Arraylamp[0] = l1;
		Arraylamp[1] = l2;
		}
	public ArrayList<Ventilador> Ventiladores = new ArrayList<Ventilador>();
	public ArrayList<Dispositivo> Lampadas = new ArrayList<Dispositivo>();
}

	
	
	

