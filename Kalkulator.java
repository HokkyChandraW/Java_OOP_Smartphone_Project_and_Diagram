public class Kalkulator {
    private float total, bil1, bil2;


    public Kalkulator(){
        System.out.println("Kalkulator Sederhana");
        System.out.println("[1]Penjumlahan");
        System.out.println("[2]Pengurangan");
        System.out.println("[3]Perkalian");
        System.out.println("[4]Pembagian");
        System.out.println("[5]Keluar");
        System.out.print("Masukan Pilihan Anda = ");
    }
    public Kalkulator(float a, float b){
        this.bil1 = a;
        this.bil2 = b;
    }

    public void penjumlahan(){
        System.out.println(this.bil1 + " + " + this.bil2);
        this.total = this.bil1 + this.bil2;
    }

    public void pengurangan(){
        System.out.println(this.bil1 + " - " + this.bil2);
        this.total = this.bil1 - this.bil2;
    }

    public void perkalian(){
        System.out.println(this.bil1 + " * " + this.bil2);
        this.total = this.bil1 * this.bil2;
    }

    public void pembagian(){
        System.out.println(this.bil1 + " / " + this.bil2);
        this.total = this.bil1 / this.bil2;
    }
    
    public float getTotal(){
        return this.total;
    }

  
}