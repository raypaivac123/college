package Testes;

import java.util.Scanner;

import FigurasGerais.Circulo;
import FigurasGerais.Triangulo;
import Quadrilatero.Quadrado;
import Quadrilatero.Retangulo;


public class TesteFiguras {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner t = new Scanner(System.in);
		
		String cor;
		double valor1, valor2;
		int opcao1, opcao2 = 0;

		
		boolean sai = false;
		
		System.out.println("Informe a cor do circulo: ");
		cor = t.next();
		
		System.out.println("Informe a raio do circulo: ");
		valor1 = t.nextDouble();
		
		Circulo c1 = new Circulo(cor, valor1);
		
		System.out.println("Informe a cor do triangulo: ");
		cor = t.next();
		
		System.out.println("Informe a base do triangulo: ");
		valor1 = t.nextDouble();
		
		System.out.println("Informe a altura do triangulo: ");
		valor2 = t.nextDouble();
		
		Triangulo t1 = new Triangulo(cor, valor1, valor2);
		
		
		System.out.println("Informe a cor do retangulo: ");
		cor = t.next();
		
		System.out.println("Informe o lado 1 do retangulo: ");
		valor1 = t.nextDouble();
		
		System.out.println("Informe o lado 2 do retangulo: ");
		valor2 = t.nextDouble();
		
		Retangulo r1 = new Retangulo(cor, valor1, valor2);
		
		System.out.println("Informe a cor do quadrado: ");
		cor = t.next();
		
		System.out.println("Informe o lado do quadrado: ");
		valor1 = t.nextDouble();
		
		
		Quadrado q1 = new Quadrado(cor, valor1);
		
		
		do {
			
			MostrarMenuPrincipal();
			opcao1 = t.nextInt();
			
			
			switch (opcao1) {
			case 1: {
				
				MostrarMenuSecundario();
				opcao2 = t.nextInt();
				
				System.out.println("Informe a nova cor da figura: ");
				cor = t.next();
				
				switch (opcao2) {
				case 1: {
					c1.setCor(cor);
					break;
					
				}
				case 2: {
					t1.setCor(cor);
					break;
					
				}
				case 3: {
					r1.setCor(cor);
					break;
					
				}
				case 4: {
					q1.setCor(cor);
					break;
					
				}
				default:
					throw new IllegalArgumentException("Unexpected value: " + opcao2);
				}
				
				break;
			}
			
			case 2: {
				
				MostrarMenuSecundario();
				opcao2 = t.nextInt();
				
				
				switch (opcao2) {
				case 1: {
					System.out.println(c1.toString());
					break;
					
				}
				case 2: {
					System.out.println(t1.toString());
					break;
					
				}
				case 3: {
					System.out.println(r1.toString());
					break;
					
				}
				case 4: {
					System.out.println(q1.toString());
					break;
					
				}
				default:
					throw new IllegalArgumentException("Unexpected value: " + opcao2);
				}
				
				break;
			}
			
			case 3: {
				System.out.println("TCHAU!!!");
				sai = true;
				break;
			}
			
			default:
				throw new IllegalArgumentException("Unexpected value: " + opcao1);
			}
			
			
			
			
			
		} while (!sai);
		
		t.close();
		
		
		

	}
	
	public static void MostrarMenuPrincipal() {
		
		System.out.println("=========================================================================");
		System.out.println("1 = Alterar cor de figura; 2 = Exibir dados de figura; 3 = Sair");
		System.out.println("=========================================================================");
	}
	
public static void MostrarMenuSecundario() {
		
		System.out.println("=========================================================================");
		System.out.println("1 = Circulo; 2 = Triangulo; 3 = Retangulo; 4 = quadrado");
		System.out.println("=========================================================================");
	}
	
	

}
