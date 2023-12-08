import java.util.Scanner;
public class Prueba {
    public static void main(String[] args) {

        String tipo;
        String marca;

        Scanner entrad = new  Scanner(System.in);
        Vehiculo vehiculo[]= new Vehiculo[5];

        System.out.println("vamos a definir vehiculos");
        for(int i = 0; i<5;i++){
            System.out.println("vehiculo: "+(i+1));
            System.out.println("tipo:" );
            tipo= entrad.nextLine();
            System.out.println("marca: ");
            marca = entrad.nextLine();

            vehiculo[i]=new Vehiculo(tipo,marca);
        }

        for(int j = 0; j<5; j++){
            if(vehiculo[j].tipo.equals("carro")){
                System.out.println("turismos:\n"+vehiculo[j].tipo+" -- "+vehiculo[j].marca+" -- "+Turismo.getllanta()+" -- "+Conductor.turismo());
            }
        }
        for(int k = 0; k<5;k++){
            if(vehiculo[k].tipo.equals("moto")){
                System.out.println("motocicletas:\n"+vehiculo[k].tipo+" -- "+vehiculo[k].marca+" -- "+Motocicleta.getllanta()+Conductor.motocicleta());
            }
        }
        

        
    }
    
}
