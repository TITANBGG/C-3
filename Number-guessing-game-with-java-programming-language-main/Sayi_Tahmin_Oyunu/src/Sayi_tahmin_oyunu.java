import java.net.StandardSocketOptions;
import java.util.Random;
import java.util.Scanner;

public class Sayi_tahmin_oyunu {
    public static void main(String[] args){
    int tahmin;
    int can = 7; int i = 0;
    Random rand = new Random();
    Scanner scan = new Scanner(System.in);

    int sayi = rand.nextInt(100);
    //int tahmin = scan.nextInt();
    boolean  oyunDurum = false, hata = false;
            System.out.println(sayi);
        System.out.println("Sayi Tahimn oyununa hos geldiniz");
        System.out.println(" 0-99 arasi Sayi Tutunuz");


        while (can > 0) {
            System.out.println("Tahmininiz : ");
             tahmin =scan.nextInt();
            if ((tahmin < 0) || (tahmin > 99)) {
                if(hata){
                    System.out.println("Çok fazla hatali sayi girdiniz 1 can kaybettiniz");
                    System.out.println("Kalan can : ");
                }
                System.out.println("Lütfen sayinizi 0-99 arasi giriniz");
                continue;
            }

            if(tahmin == sayi) {
                oyunDurum = true;
                System.out.println("Kazandiniz");

                break;
            }else {
                System.out.println("Yanlis, tekrar deneyin. Kalan can " + --can);


            }if(oyunDurum){
                System.out.println("Tebrikler Doğru Tahmin !");
                System.out.println("Sayimiz"+ sayi);
                System.out.println("Kalan can " + can);
            }
            else{
                System.out.println("Başaramadınız. !!");

            }
        }
}





}
