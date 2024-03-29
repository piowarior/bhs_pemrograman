# GITHUB COMMAND LINE SAAT INISIALISASI PROJECT



1. `git init`:Perintah `git init` digunakan untuk menginisialisasi repository Git baru di direktori lokal user. Saat user menjalankan perintah ini di dalam direktori proyek, Git akan membuat direktori `.git` yang berisi semua data yang diperlukan untuk menyimpan riwayat perubahan proyek user.


 >>- `git init`: Ini adalah perintah untuk memulai repository Git baru.
 >>- Ketika user menjalankan `git init`, Git akan membuat repository lokal di direktori kerja user. Repository ini akan digunakan untuk melacak perubahan dalam proyek user.


2. `git add .`:Perintah `git add .` digunakan untuk menambahkan semua perubahan yang ada dalam direktori kerja user ke dalam staging area. Staging area adalah tempat di mana user menyiapkan perubahan yang ingin user komit ke dalam repository Git user.


>>- `git add`: Ini adalah perintah untuk menambahkan perubahan ke staging area.
>>- `.`: Titik (dot) merupakan argumen yang digunakan untuk menunjukkan bahwa user ingin menambahkan semua perubahan yang ada dalam direktori kerja user ke dalam staging area. Semua perubahan pada file yang dimodifikasi, ditambahkan, atau dihapus akan ditambahkan ke staging area.


3. `git commit -m "pesannya"`:Perintah `git commit -m "pesannya"` digunakan untuk membuat komit baru dengan pesan komit yang diberikan. Komit adalah langkah dalam proses Git di mana user menyimpan perubahan yang telah ditambahkan ke staging area ke dalam repository lokal user.


>>- `git commit`: Ini adalah perintah untuk membuat komit baru.
>>- `-m`: Ini adalah opsi yang digunakan untuk menyertakan pesan komit secara langsung dari baris perintah, tanpa membuka editor teks tambahan. Pesan komit ini akan menjadi deskripsi singkat dari perubahan yang user lakukan dalam komit tersebut.
>>- `"pesannya"`: Ini adalah pesan komit yang ingin user berikan. Biasanya, pesan ini berisi deskripsi singkat tentang perubahan yang dilakukan dalam komit tersebut. Pesan komit yang baik membantu user dan rekan tim user memahami perubahan yang terjadi dalam proyek.


4. `git branch -M main`:Perintah `git branch -M main` digunakan untuk mengubah nama    branch default dari `master` menjadi `main`. Ini adalah praktik yang disarankan oleh GitHub dan komunitas open source secara umum untuk menghilangkan istilah yang memiliki konotasi sejarah yang kurang menyenangkan.


>>- `git branch`: Perintah ini umumnya digunakan untuk membuat, menghapus, atau menampilkan daftar branch dalam repository user.
>>- `-M`: Ini adalah opsi yang digunakan untuk mengubah nama branch yang ada. Dalam konteks ini, `-M` digunakan untuk mengubah nama branch yang aktif.
>>- `main`: Ini adalah nama baru yang ingin user berikan pada branch yang sedang aktif. Dalam hal ini, user ingin mengubah nama branch default dari `master` menjadi `main`.


5. Perintah `git remote add origin <link-ssh-atau-https-repository>` digunakan untuk menambahkan repository remote ke dalam konfigurasi repository lokal user. Ini memungkinkan Git untuk mengetahui lokasi repository remote yang akan digunakan untuk mengirimkan (push) perubahan atau mengambil (pull) perubahan dari sumber eksternal.


>>- `git remote add`: Ini adalah perintah untuk menambahkan repository remote.
>>- `origin`: Ini adalah nama alias yang umum digunakan untuk merujuk ke repository remote utama. user dapat menggunakan nama apa pun untuk alias, tetapi `origin` adalah konvensi yang umum digunakan.
>>- `<link-ssh-atau-https-repository>`: Ini adalah URL lengkap ke repository remote. user dapat menggunakan URL HTTPS atau SSH, tergantung pada preferensi dan izin akses ke repository tersebut.


6.  Perintah `git push origin -u main` digunakan untuk mendorong (push) komit lokal ke cabang (branch) `main` pada repository remote yang disebut `origin`. Di sini, `-u` menetapkan cabang `main` sebagai cabang upstream default, yang berarti cabang lokal `main` akan dilacak terhadap cabang `main` di repository remote.


>>- `git push`: Digunakan untuk mendorong perubahan yang ada di repository lokal ke repository remote.
>>- `origin`: Merujuk ke repository remote yang telah ditambahkan sebelumnya menggunakan perintah `git remote add origin <link-ssh-atau-https-repository>`.
>>- `-u`: Singkatan dari `--set-upstream`. Saat digunakan dengan `git push`, opsi ini menetapkan cabang lokal sebagai upstream default untuk cabang remote tertentu. Dalam hal ini, cabang lokal `main` akan dilacak terhadap cabang `main` di repository remote.
>>- `main`: Nama cabang (branch) lokal yang ingin user dorong ke repository remote. Dalam hal ini, user memilih untuk mendorong ke cabang `main`.



# GITHUB COMMAND LINE SAAT MAINTENANCE/ MONITORING/ PROJECT (TAMBAH KURANG ISI FILE)


1. `git add .`:
   - Perintah ini digunakan untuk menambahkan semua perubahan yang ada dalam direktori kerja user ke dalam staging area.
   - Staging area adalah tempat di mana user menyiapkan perubahan yang ingin user komit ke dalam repository Git user.
   - Dengan menambahkan semua perubahan menggunakan `git add .`, user menyertakan perubahan dalam semua file yang dimodifikasi, ditambahkan, atau dihapus ke dalam staging area.

2. `git commit -m "pesannya"`:
   - Setelah user menambahkan perubahan ke staging area menggunakan `git add`, user perlu membuat komit untuk menyimpan perubahan tersebut ke dalam repository user.
   - Perintah `git commit` digunakan untuk membuat komit baru.
   - `-m` digunakan untuk menyertakan pesan komit secara langsung dari baris perintah tanpa membuka editor teks tambahan.
   - `"pesannya"` adalah pesan komit yang ingin user berikan. Pesan ini seharusnya menjadi deskripsi singkat tentang perubahan yang user lakukan dalam komit tersebut.

3. `git push`:
   - Setelah user membuat komit lokal dengan `git commit`, user perlu mengirimkan (push) komit tersebut ke repository remote agar perubahan tersimpan di sana.
   - Perintah `git push` digunakan untuk mengirimkan perubahan dari repository lokal user ke repository remote yang telah ditambahkan sebelumnya menggunakan `git remote add`.
   - Ini akan mengirimkan semua komit yang ada di branch lokal user ke branch yang sesuai di repository remote.

Contoh penggunaan dari ketiga perintah tersebut secara berurutan adalah sebagai berikut:

```bash
git add .
git commit -m "Menambahkan fitur baru"
git push
```

