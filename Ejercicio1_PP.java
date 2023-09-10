import java.util.Random;

public class Ejercicio1_PP 
{
    private static final int TAM = 5;
    private static final int RANG = 29;

    public static void main(String[] args) {
        // Declaracion y creacion del arreglo
        int[] arr1 = new int[TAM];

        inicArr(arr1, TAM, RANG);
        imprimeArr(arr1, TAM);
        sumaElementos(arr1, TAM);
    }

    // Imprime los elementos del arreglo dado
    public static void imprimeArr(int[] arr, int tam) {
        for (int i = 0; i < tam; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.println();
    }

    // Suma los elementos del arreglo dado e imprime el resultado
    public static void sumaElementos(int[] arr, int tam) {
        int suma = 0;
        for (int i = 0; i < tam; i++) {
            suma += arr[i];
        }
        System.out.println("La suma de los elementos es: " + suma);
    }

    // Inicializa el arreglo con números aleatorios dentro de un rango dado
    public static void inicArr(int[] arr, int tam, int rango) {
        Random rand = new Random();
        for (int i = 0; i < tam; i++) {
            arr[i] = rand.nextInt(rango);
        }
    }
}