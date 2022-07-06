package FigurasGerais;

public class Circulo extends Figura{

	private double raio;
	
	
	
	public Circulo() {
		super();
	}


	public Circulo(String cor, double raio) {
		super(cor);
		this.raio = raio;
	}



	public double getRaio() {
		return raio;
	}


	public void setRaio(double raio) {
		this.raio = raio;
	}


	@Override
	public double area() {
		// TODO Auto-generated method stub
		return 2 * 3.14 * this.raio;
	}


	@Override
	public String toString() {
		return "Circulo [raio=" + raio + ", area=" + area() + ", cor=" + getCor() + "]";
	}
	
	

}
