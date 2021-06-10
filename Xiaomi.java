import java.util.Scanner;

public class Xiaomi implements Phone {

    private int volume;
    private boolean isPowerOn;
    static float total = 0, bil1 = 1, bil2 = 1;
    private Kalkulator kalkulator;

    public Xiaomi() {
        // set volume awal
        this.volume = 50;
    }

    @Override
    public void powerOn() {
        isPowerOn = true;
        System.out.println("Handphone menyala...");
        System.out.println("Selamat datang di XIAOMI");
        System.out.println("Android version 29");
    }

    @Override
    public void powerOff() {
        isPowerOn = false;
        System.out.println("Handphone dimatikan");
    }

    @Override
    public void volumeUp() {
        if (isPowerOn) {
            if (this.volume == MAX_VOLUME) {
                System.out.println("Volume FULL!!");
                System.out.println("sudah " + this.getVolume() + "%");
            } else {
                this.volume += 10;
                System.out.println("Volume sekarang: " + this.getVolume());
            }
        } else {
            System.out.println("Nyalakan dulu Hp-nya");
        }
    }

    @Override
    public void volumeDown() {
        if (isPowerOn) {
            if (this.volume == MIN_VOLUME) {
                System.out.println("Volume = 0%");
            } else {
                this.volume -= 10;
                System.out.println("Volume sekarang: " + this.getVolume());
            }
        } else {
            System.out.println("Nyalakan dulu HP-nya");
        }
    }

    public int getVolume() {
        return this.volume;
    }

    @Override
    public void runApp() {

        do {
            kalkulator = new Kalkulator();
            Scanner input = new Scanner(System.in);
            int pilihan = input.nextInt();

            if (pilihan < 5) {
                System.out.print("Masukan Bilangan Ke-1 = ");
                bil1 = input.nextFloat();
                System.out.print("Masukan Bilangan Ke-2 = ");
                bil2 = input.nextFloat();
            }

            kalkulator = new Kalkulator(bil1, bil2);

            switch (pilihan) {

            case 1:
                kalkulator.penjumlahan();
                break;
            case 2:
                kalkulator.pengurangan();
                break;
            case 3:
                kalkulator.perkalian();
                break;
            case 4:
                kalkulator.pembagian();
                break;
            case 5:
                System.exit(0);
                break;
            default:
                System.out.println("Anda harus mengisi angka");

            }
            System.out.print("Hasilnya = ");
            System.out.println(kalkulator.getTotal());
        } while (bil2 != 0 & bil1 != 0);
    }

}