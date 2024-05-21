def menu():
    print("Pilih operasi matematika:")
    print("1. Tambah")
    print("2. Kurang")
    print("3. Kali")
    print("4. Bagi")

def tambah(a, b):
    return a + b

def kurang(a, b):
    return a - b

def kali(a, b):
    return a * b

def bagi(a, b):
    if b != 0:
        return a / b
    else:
        return "Tidak bisa dibagi dengan nol"

def main():
    while True:
        menu()
        pilihan = input("Masukkan pilihan (1/2/3/4) atau 'q' untuk keluar: ")

        if pilihan == 'q':
            break

        if pilihan in ['1', '2', '3', '4']:
            a = float(input("Masukkan angka pertama: "))
            b = float(input("Masukkan angka kedua: "))

            if pilihan == '1':
                print(f"Hasil: {tambah(a, b)}")
            elif pilihan == '2':
                print(f"Hasil: {kurang(a, b)}")
            elif pilihan == '3':
                print(f"Hasil: {kali(a, b)}")
            elif pilihan == '4':
                print(f"Hasil: {bagi(a, b)}")
        else:
            print("Pilihan tidak valid. Silakan coba lagi.")

if __name__ == "__main__":
    main()
