Definisi

Array dalam Python adalah struktur data yang memungkinkan kita menyimpan beberapa item dalam satu variabel. analoginya array seperti rak buku yang memiliki beberapa kompartemen, di mana setiap kompartemen bisa diisi dengan satu buku (atau data) tertentu. seperti tempat penampungan data-data tapi yang homogen.

### 2. Set

Set dalam bahasa pemrograman Python adalah tipe data kolektif yang digunakan untuk menyimpan banyak nilai dalam satu variabel dengan ketentuan sebagai berikut:

1. Nilai anggota yang disimpan harus unik (tidak ada duplikasi).
2. Nilai anggota yang telah dimasukkan tidak dapat diubah lagi.
3. Set tidak berurutan alias unordered, yang berarti tidak bisa diakses dengan indeks.

#### Bentuk Umum Set:

python
# menggunakan kurung kurawal
student_set = {'Huda', 'Lendis', 'Wahid', 'Basith'}
print(student_set)

# konversi list menjadi set
fruit_set = set(['mango', 'apple'])
print(fruit_set)

# set dengan berbagai tipe data
set_mix = {'man', 'animal', 5, True, ('A', 'B')}
print(set_mix)


Output:
python
{'Wahid', 'Lendis', 'Basith', 'Huda'}
{'apple', 'mango'}
{True, 5, ('A', 'B'), 'animal', 'man'}

#### a. Unordered (Set)

maksud nya kita gak bisa pake nomor buat panggil gitu, Jika kita memaksa, maka akan terjadi error:


python
my_set = {'a'}
print(my_set[0])


Pesan error:
python
TypeError: 'set' object is not subscriptable


#### b. Tidak Dapat Diubah (Set)

Set tidak dapat diubah, yang berarti nilai yang telah dimasukkan ke dalam set tidak bisa diubah lagi. Namun, kita masih bisa menambah dan menghapus anggota dari set. Karena set tidak dapat diubah, mereka hanya bisa menerima anggota dari tipe data yang juga immutable.

Contoh:
python
# anggota set harus dari tipe data yang immutable
set_fruit = {'mango', 'lemon', 'avocado', True, 1, 2, 3}

# kita bisa membuat tuple sebagai anggota set karena tuple adalah immutable
keyboard = {
    (1, 2, 3),
    (4, 5, 6),
    (7, 8, 9),
    8
}


Namun, kita tidak bisa memasukkan list sebagai anggota set karena list adalah mutable:
python
x = set{35, 100, ['a', 'b']}


Pesan error:
python
TypeError: unhashable type: 'list'


#### c. Tidak Ada Nilai Duplikat (Set)

Set di Python tidak bisa menerima nilai duplikat. Jika kita memasukkan nilai yang sudah ada dalam set, maka nilai tersebut hanya akan muncul satu kali.

Contoh:
python
unique_words = {'morning', 'this', 'is', 'morning', 'which', 'very', 'bright'}
print(unique_words)


Output:
python
{'this', 'very', 'bright', 'morning', 'is', 'which'}


#### Menambah/Memperbarui Elemen Set

walaupun nilai set tidak dapat diubah, kita masih bisa menambah dan menghapus anggota. Kita bisa menambah anggota baru ke dalam set dengan fungsi add() dan update().

Contoh:
python
alphabet_set = {'a', 'b', 'c'}
print(alphabet_set)

# menambah satu per satu
alphabet_set.add('d')
alphabet_set.add('e')

# menambah lebih dari satu anggota sekaligus
alphabet_set.update({'f', 'g'})

# juga bisa menggunakan list
alphabet_set.update(['h', 'i'])

print(alphabet_set)


Output:
python
{'a', 'b', 'c'}
{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'}


#### Menghapus Elemen Set

Untuk menghapus anggota dari set, ada 4 fungsi yang bisa digunakan:

- remove(value): Menghapus nilai yang dicari. Jika nilai yang dicari tidak ada, maka akan terjadi error.
- discard(value): Menghapus nilai yang dicari. Jika nilai yang dicari tidak ada, tidak akan terjadi error.
- pop(): Mengambil dan menghapus nilai yang pertama kali dimasukkan.
- clear(): Menghapus semua anggota.

Contoh:
python
set_example = {'virtual', 'virtuous', 100, ('a', 'b'), False, True}
print(set_example)

# akan error jika nilai 100 tidak ada dalam set
set_example.remove(100)
print(set_example)

# tidak akan error jika ('a', 'b') tidak ada dalam set
set_example.discard(('a', 'b'))
print(set_example)

# menghapus nilai yang pertama kali dimasukkan
removed_value = set_example.pop()
print(f'Nilai yang dihapus: {removed_value}')
print(set_example)

# menghapus semua nilai
set_example.clear()
print(set_example)


Output:
python
{False, True, 100, 'virtual', 'virtuous', ('a', 'b')}
{False, True, 'virtual', 'virtuous', ('a', 'b')}
{False, True, 'virtual', 'virtuous'}
Nilai yang dihapus: False
{True, 'virtual', 'virtuous'}
set()


#### Fungsi-Fungsi (Set)

Berikut adalah rangkuman fungsi-fungsi built-in dari tipe data set yang bisa kita gunakan:

| Fungsi                    | Kegunaan                                           |
|---------------------------|----------------------------------------------------|
| add()                     | Menambah satu anggota ke dalam set                 |
| clear()                   | Menghapus seluruh anggota set                      |
| copy()                    | Membuat salinan set ke set baru                    |
| difference()              | Melakukan operasi selisih antara dua set           |
| difference_update()       | Menghapus anggota set lain yang ada dalam set saat ini |
| discard()                 | Menghapus satu anggota dari set                    |
| intersection()            | Melakukan operasi irisan antara dua set            |
| intersection_update()     | Memperbarui anggota yang merupakan irisan dari dua set |
| isdisjoint()              | Mengembalikan nilai True jika dua set tidak memiliki irisan |
| issubset()                | Mengembalikan nilai True jika set lain memiliki anggota dari set saat ini |
| issuperset()              | Mengembalikan nilai True jika set saat ini memiliki anggota dari set lain |
| pop()                     | Menghapus dan mengembalikan nilai yang dihapus dari set |
| remove()                  | Menghapus satu nilai dari set                      |
| symmetric_difference()    | Melakukan operasi komplemen antara dua set         |
| symmetric_difference_update() | Memperbarui set dengan hasil komplemen         |
| union()                   | Melakukan operasi gabungan dari dua atau lebih set |
| update()                  | Memperbarui set dengan menambah nilai yang ditentukan|



---

### *Apa Itu Dictionary?*

*Dictionary* adalah tipe data di Python yang berfungsi untuk menyimpan kumpulan data dengan pendekatan *"key-value"*. Bayangkan dictionary seperti kamus: setiap kata (key) memiliki arti (value).

- *Key*: Nama atribut atau identifikasi unik dari sebuah item dalam dictionary.
- *Value*: Nilai yang disimpan dalam atribut tersebut.

### *Sifat-Sifat Dictionary:*

1. *Tidak Berurutan (Unordered)*: Data dalam dictionary tidak memiliki urutan tertentu. Anda tidak bisa mengaksesnya menggunakan nomor urut (indeks) seperti di dalam daftar (list).

2. *Dapat Diubah (Changeable)*: Anda bisa mengubah nilai yang ada dalam dictionary. Ini berbeda dengan set atau tuple yang isinya tidak bisa diubah setelah dibuat.

3. *Unik (Unique)*: Setiap key dalam dictionary harus unik, tidak boleh ada dua key yang sama. Jika ada key yang sama, nilai terakhir akan menimpa nilai sebelumnya.

### *Cara Membuat Dictionary:*

Ada dua cara untuk membuat dictionary di Python:

#### **1. Dengan Kurung Kurawal {}:**

python
# Membuat dictionary buku
buku = {
    "judul": "Daun yang Jatuh Tak Pernah Membenci Angin",
    "penulis": "Tere Liye"
}


#### **2. Dengan Fungsi dict():**

python
# Membuat dictionary buku
buku = dict(
    judul="Daun yang Jatuh Tak Pernah Membenci Angin",
    penulis="Tere Liye"
)


### *Menambah atau Mengubah Elemen dalam Dictionary:*



python
# Dictionary siswa
siswa = {
    'nama': 'Lendis Fabri',
    'asal': 'Indonesia',
}

# Menampilkan hobi, awalnya tidak ada
print('Hobi:', siswa.get('hobi'))  # Output: None

# Menambahkan hobi
siswa['hobi'] = 'Memancing'

# Menampilkan kembali dengan hobi baru
print('Hobi dari {} adalah {}'.format(
    siswa.get('nama'),
    siswa.get('hobi')
))


*Output:*

Hobi: None
Hobi dari Lendis Fabri adalah Memancing


### *Menghapus Elemen dalam Dictionary:*

Ada dua cara untuk menghapus item dalam dictionary:

#### **1. Dengan Pernyataan del:**

python
siswa = {
    'nama': 'Wahid Abdullah',
    'umur': 18,
    'asal': 'Indonesia'
}

# Menghapus item dengan key 'nama'
del siswa['nama']


#### **2. Dengan Fungsi pop():**

python
siswa.pop('umur')
siswa.pop('asal')


*Perbedaan:*
- del langsung menghapus tanpa mengembalikan nilai.
- pop() menghapus dan mengembalikan nilai yang dihapus.

### **Contoh Penggunaan pop():**

python
pesan_pendek = {
    "isi": "PESAN INI HANYA BISA DIBACA SEKALI SAJA!!"
}

isi_pesan = pesan_pendek.pop('isi')

# Mengakses langsung dari dictionary (akan None karena sudah dihapus)
print('Isi pesan:', pesan_pendek.get('isi'))

# Mengakses dari nilai yang sudah disimpan
print('Isi pesan:', isi_pesan)


*Output:*

Isi pesan: None
Isi pesan: PESAN INI HANYA BISA DIBACA SEKALI SAJA!!


### *Operator Keanggotaan (Membership) dalam Dictionary:*

memeriksa apakah sebuah key ada atau tidak ada dalam dictionary:

python
siswa = {
    'nama': 'Renza Inspiratif'
}

# Memeriksa apakah ada key 'nama'
print('Apakah variabel siswa memiliki key nama?')
print('nama' in siswa)

# Memeriksa apakah tidak ada key 'usia'
print('\nApakah variabel siswa TIDAK memiliki key usia?')
print('usia' not in siswa)


*Output:*

Apakah variabel siswa memiliki key nama?
True

Apakah variabel siswa TIDAK memiliki key usia?
True


### *Fungsi-Fungsi Bawaan untuk Dictionary:*

Berikut beberapa fungsi yang bisa digunakan untuk dictionary:

| Fungsi   | Deskripsi |
|----------|-----------|
| all()  | Mengembalikan True jika semua key bernilai benar (atau dictionary kosong). |
| any()  | Mengembalikan True jika ada satu saja key yang bernilai benar. |
| len()  | Mengembalikan jumlah item dalam dictionary. |
| sorted() | Mengembalikan daftar baru dari key yang sudah diurutkan. |

---