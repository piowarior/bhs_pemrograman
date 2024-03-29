# ___TEORI___

## ___apa itu bahasa pemrograman ???___

___Bahasa pemrograman___ adalah sebuah kumpulan aturan-aturan atau instruksi yang disusun dalam bentuk kode-kode berbeda-beda tergantung bahasa apa yang  di pilih. Kode tersebut di kirimkan ke komputer dan di terjemahkan agar menjalankan instruksi-instruksi yang di berikan oleh programmer. Disini seorang programmer harus lah terlebih dahulu memahami aturan yang terdapat dalam bahasa pemrograman agar bisa saling paham antara programmer dan komputer. Ini juga bisa di sebut dengan sebuah alat komunikasi programmer dengan komputer


**Bahasa Pemrograman Tingkat Rendah (Low-Level Programming Language)**: adalah bahasa yang dekat dengan bahasa mesin dan arsitektur perangkat keras komputer. Mereka memiliki keterbatasan dalam hal abstraksi dan sering digunakan untuk pemrograman sistem dan perangkat tertanam.
 - **Contoh Bahasa**:<span style="color:green;"> Bahasa Rakitan (Assembly Language)</span>
 


**Bahasa Pemrograman Tingkat Menengah (Mid-Level Programming Language)**: menawarkan abstraksi yang lebih tinggi daripada bahasa rakitan, tetapi masih memberikan kontrol yang relatif tinggi atas perangkat keras komputer. Mereka sering digunakan untuk pengembangan perangkat lunak aplikasi dan sistem.
 - **Contoh Bahasa**:<span style="color:green;"> C, C++</span>


**Bahasa Pemrograman Tingkat Tinggi (High-Level Programming Language)**: menawarkan abstraksi yang lebih tinggi daripada bahasa tingkat menengah. Mereka sering memiliki sintaks yang lebih mudah dipahami dan memungkinkan pengembang untuk menulis kode dengan lebih cepat.
 - **Contoh Bahasa**:<span style="color:green;"> Python, Java, JavaScript, Ruby</span>

**Bahasa Pemrograman Tingkat Sangat Tinggi (Very High-Level Programming Language)**: menawarkan abstraksi yang sangat tinggi dan umumnya digunakan untuk memecahkan masalah di tingkat yang lebih tinggi tanpa memerlukan perhatian terhadap detail implementasi.
 - **Contoh Bahasa**:<span style="color:green;"> SQL (Structured Query Language), MATLAB, R</span>

## ___Paradigma pemrograman___
paradigma pemrograman adalah cara kita memandang dan memahami dunia pemrograman komputer. Ini mencakup pemahaman tentang bagaimana kita mengatur data, logika, dan aliran kontrol dalam sebuah program untuk mencapai hasil yang diinginkan. Dengan kata lain, paradigma pemrograman memberikan landasan filosofis bagi cara kita berpikir tentang dan mendekati proses pembuatan perangkat lunak.

___lebih jelasnya___ Paradigma pemrograman adalah serangkaian prinsip, konsep, dan pendekatan yang membentuk kerangka pemikiran bagi seorang programmer dalam merancang, mengembangkan, dan mengorganisir perangkat lunak. Paradigma ini memberikan arah dan struktur yang diperlukan untuk memecahkan masalah dalam pengembangan perangkat lunak dengan cara yang sistematis dan efektif.


### ___jenis-jenis Paradigma pemrograman___

1. **Pemrograman Berorientasi Objek (OOP)**:
   - **Penjelasan**: Paradigma ini berfokus pada konsep objek, di mana program diorganisir sebagai kumpulan objek yang memiliki atribut (data) dan perilaku (metode/fungsi). Objek-objek ini berinteraksi satu sama lain untuk mencapai tujuan tertentu.
   - **Contoh Bahasa**: Java
   - **Contoh Kode**:
     ```java
     public class Circle {
         private double radius;
         
         public Circle(double radius) {
             this.radius = radius;
         }
         
         public double getArea() {
             return Math.PI * radius * radius;
         }
     }
     ```

     - **Bagian OOP**: Definisi kelas Circle, variabel anggota radius, konstruktor Circle(double radius), dan metode getArea() adalah bagian-bagian dari paradigma pemrograman berorientasi objek. Mereka membentuk struktur objek dan perilaku yang khas dalam OOP.

2. **Pemrograman Fungsional**:
   - **Penjelasan**: Paradigma ini menekankan pada penggunaan fungsi sebagai unit utama dalam program. Fungsi-fungsi ini diperlakukan sebagai "nilai" yang dapat digunakan, dilewatkan sebagai argumen, dan dikembalikan dari fungsi lain.
   - **Contoh Bahasa**: Haskell
   - **Contoh Kode**:
     ```haskell
     -- Fungsi untuk menghitung faktorial
     factorial :: Integer -> Integer
     factorial 0 = 1
     factorial n = n * factorial (n - 1)
     ```

     - **Bagian Fungsional**: Definisi fungsi factorial yang memanfaatkan rekursi adalah contoh dari paradigma pemrograman fungsional. Ini menunjukkan penggunaan fungsi sebagai unit utama dalam program.


3. **Pemrograman Prosedural**:
   - **Penjelasan**: Paradigma ini berfokus pada pemanggilan serangkaian prosedur atau fungsi secara berurutan untuk menyelesaikan tugas. Program diorganisir sebagai kumpulan prosedur yang masing-masing memiliki tujuan tertentu.
   - **Contoh Bahasa**: C
   - **Contoh Kode**:
     ```c
     #include <stdio.h>
     
     int main() {
         int x = 5;
         printf("Nilai x adalah %d\n", x);
         return 0;
     }
     ```

     - **Bagian Prosedural**: Fungsi main() dan pemanggilan fungsi printf() adalah contoh dari paradigma pemrograman prosedural. Program diorganisir sebagai serangkaian prosedur atau langkah-langkah yang dieksekusi secara berurutan.

4. **Pemrograman Deklaratif**:
   - **Penjelasan**: Paradigma ini menekankan pada mendeklarasikan apa yang harus dilakukan, bukan bagaimana melakukannya. Program mendeskripsikan keadaan dan aturan, dan interpreter/compiler akan menentukan cara menjalankan instruksi tersebut.
   - **Contoh Bahasa**: SQL (Structured Query Language)
   - **Contoh Kode**:
     ```sql
     -- Query untuk mengambil data dari tabel "customers"
     SELECT * FROM customers WHERE city = 'New York';
     ```

     - **Bagian Deklaratif**: Query SQL di atas adalah contoh dari paradigma pemrograman deklaratif. Ini adalah pernyataan yang mendeskripsikan apa yang ingin Anda lakukan (mengambil data dari tabel "customers" di kota "New York"), bukan bagaimana Anda melakukannya.

5. **Pemrograman Berbasis Aturan (Rule-based Programming)**:
   - **Penjelasan**: Paradigma ini menggunakan aturan-aturan logika untuk menentukan perilaku program. Program terdiri dari aturan-aturan dan fakta, dan komputer menggunakan aturan-aturan ini untuk menarik kesimpulan atau menghasilkan output.
   - **Contoh Bahasa**: Prolog
   - **Contoh Kode**:
     ```prolog
     ancestor(X, Y) :- parent(X, Y).
     ancestor(X, Y) :- parent(X, Z), ancestor(Z, Y).
     ```

     - **Bagian Berbasis Aturan**: Aturan logika seperti yang ditunjukkan dalam kode Prolog adalah contoh dari paradigma pemrograman berbasis aturan. Aturan ini digunakan untuk menentukan hubungan antara entitas berdasarkan aturan logika.

6. **Pemrograman Generik**:
   - **Penjelasan**: Paradigma ini memungkinkan penulisan kode yang bekerja dengan berbagai jenis data tanpa perlu menuliskan ulang kode yang sama. Ini meningkatkan fleksibilitas dan kegunaan kembali kode.
   - **Contoh Bahasa**: C++
   - **Contoh Kode**:
     ```cpp
     #include <iostream>
     using namespace std;
     
     template <typename T>
     T maximum(T a, T b) {
         return (a > b) ? a : b;
     }
     
     int main() {
         cout << maximum(5, 10) << endl;          // Output: 10
         cout << maximum(3.5, 7.8) << endl;       // Output: 7.8
         return 0;
     }
     ```

     - **Bagian Generik**: Penggunaan template dalam fungsi maximum() dalam C++ adalah contoh dari paradigma pemrograman generik. Ini memungkinkan kita untuk menulis kode yang bekerja dengan berbagai jenis data tanpa perlu menuliskan ulang kode yang sama.

7. **Pemrograman Berorientasi Pesaing (Concurrent Programming)**:
   - **Penjelasan**: Paradigma ini memungkinkan program untuk melakukan beberapa tugas secara bersamaan, biasanya dengan menggunakan konsep seperti thread atau proses terpisah.
   - **Contoh Bahasa**: Go
   - **Contoh Kode**:
     ```go
     package main
     
     import (
         "fmt"
         "time"
     )
     
     func main() {
         go printNumbers()
         time.Sleep(2 * time.Second)
     }
     
     func printNumbers() {
         for i := 1; i <= 5; i++ {
             fmt.Println(i)
             time.Sleep(500 * time.Millisecond)
         }
     }
     ```

     - **Bagian Berorientasi Pesaing**: Penggunaan goroutine dalam Go adalah contoh dari paradigma pemrograman berorientasi pesaing. Dengan menggunakan goroutine, program dapat melakukan beberapa tugas secara bersamaan.

     


# ___PRAKTIKUM___

Selama proses pembelajaran saya telah  memahami beberapa langkah-langkah yang diperlukan dalam menginstal Windows Subsystem for Linux (WSL) di sistem operasi Windows saya. Setelah itu, saya memfokuskan perhatian saya pada pemasangan distribusi Ubuntu di dalam WSL, Setelah berhasil menginstal Ubuntu, langkah selanjutnya yang saya ambil adalah membuat akun GitHub, platform ini penting untuki pengembang perangkat lunak dalam berkolaborasi dan menyimpan kode secara terpusat.

Selanjutnya saya  menginstal Docker . Docker adalah alat yang sangat berguna dalam mengelola kontainer dan menyediakan lingkungan yang terisolasi untuk aplikasi. Memahami cara menginstal dan menggunakan Docker akan memberi keunggulan dalam mengelola proyek-proyek yang melibatkan lingkungan pengembangan yang kompleks.

 saya juga melakukan konfigurasi lingkungan pengembangan saya agar menjadi lebih nyaman dan produktif seperti ketika ada suatu kode yang salah yang user masukkan maka warna teks akan berwarna merah. Ini termasuk menyesuaikan berbagai pengaturan dan preferensi, mengatur alat bantu,  menyesuaikan antarmuka pengguna. dan mempelajari berbagai kode instruksi yang sering digunakan, seperti membuat file, melihat direktori, dan berbagai perintah dasar lainnya.