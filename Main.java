import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        
        // membuat objek HP
        Phone redmiNote8 = new Xiaomi();

        // membuat objek user
        PhoneUser aku = new PhoneUser(redmiNote8);

        //Hp dinyalakan
        aku.turnOnThePhone();
        
        // untuk scan input
        Scanner input = new Scanner(System.in);
        String aksi; 

        while (true) {
            System.out.println("=== APLIKASI INTERFACE ===");
            System.out.println("[1] Nyalakan HP");
            System.out.println("[2] Matikan HP");
            System.out.println("[3] Perbesar Volume");
            System.out.println("[4] Kecilkan Volume");
            System.out.println("[5] Kalkulator");
            System.out.println("[0] Keluar");
            System.out.println("--------------------------");
            System.out.print("Pilih aksi> ");
            aksi = input.nextLine();
            
            if(aksi.equalsIgnoreCase("1")){
                aku.turnOnThePhone();
            } else if (aksi.equalsIgnoreCase("2")){
                aku.turnOffThePhone();
            } else if (aksi.equalsIgnoreCase("3")){
                aku.makePhoneLouder();
            } else if (aksi.equalsIgnoreCase("4")){
                aku.makePhoneSilent();
            } else if (aksi.equalsIgnoreCase("5")){
                aku.useKalkulator();
            }else if (aksi.equalsIgnoreCase("0")){
                System.exit(0);
            } else {
                System.out.println("Kamu memilih aksi yang salah!");
            }
        }

    }

}