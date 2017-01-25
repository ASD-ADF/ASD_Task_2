# Task_2
## Abstract Data Type

1. fork dan clone repositori ASD_Task_2
2. buka dan modifikasi isi project task2_2017 dari code::block
3. tuliskan kode kalian pada bagian yang telah disediakan

Buatlah aplikasi sederhana untuk menympan data tanggal lahir buku

### tanggal.h
* buatlah ADT tanggal sebagai berikut
```pascal
TYPE tanggal : 
    <
    	dd	: integer,
    	mm	: integer,
    	yy	: integer;
    >
```

### tanggal.cpp
* implementasikan fungsi primitif tanggal
```pascal
	fungsi create_tanggal(dd,mm,yy : integer):tanggal
	/** fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya **/

	fungsi cek_tanggal(tgl : tanggal) : boolean
	/**
	* fungsi mengecek tanggal
	* fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
	* fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
	**/
	
	prosedur tampil_tanggal(tgl : tanggal)
	/**
	* fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
	* contoh : 1 Januari 1980
	**/

	fungsi selisih_hari(tgl1, tgl2 : tanggal) : integer
	/**
	* fungsi menghitung selisih hari dari variable tgl1 dan tgl2
	* fungsi selalu mengembalikan selisih dalam nilai positif
	* syarat tahun tgl1 dan tgl2 harus sama
	* jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
	* asumsi selisih hari bulan semuanya sama = 30
	**/
```

### buku.h
* buatlah ADT Buku sebagai berikut
```pascal
TYPE buku : 
    <
    	judul : string
    	pengarang : string
		terakhir_dipinjam : tanggal
		status_dipinjam : boolean
    >
```

### buku.cpp
* implementasikan fungsi primitif buku
```pascal
	fungsi create_buku(judul, pengarang : string, tgl,bln,thn : integer) return buku
	/**
    * fungsi mengeset buku b dengan judul, pengarang, dan mengeset status=false
    * dan mengembalikan hasilnya
    **/

	
	prosedur pinjam_buku(i/o b : buku; tgl,bln,thn:integer) return integer
    /**
    * fungsi mengeset tanggal pinjam dari buku b dengan tgl, bln, thn,
    * dan mengeset status pinjam menjadi true
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal pinjam
    **/

	fungsi kembalikan_buku(i/o b : buku; tgl,bln,thn:integer)
    /**
    * fungsi mengeset status pinjam menjadi false
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal kembali
    * fungsi mengembalikan selisih hari dari tanggal pinjam ke tanggal kembali
    * dengan menggunakan fungsi selisih_hari
    **/


	prosedur tampil_buku(b : buku)
    /**
    * fungsi menampilkan judul, pengarang, dan status dipinjam dari buku b
    * contoh output:
            Judul Buku : XXXXXXX,
            Pengarang  : AAAA AAAAAAA,
            Status     : dipinjam
    **/
```

### main.cpp
* jalankan main.cpp
* tambahkan proses mengecek validitas tanggal setiap membuat tanggal pada fungsi pinjam dan kembali
* ubahlah kode di dalam aplikasi.cpp sehingga terdapat proses untuk meminta input di setiap menu
* percantik tampilan output sehingga menyerupai contoh `example task2_2017.exe`

### Fungsi Tambahan
* tambahkan sebuah menu atau edit menu pada aplikasi, sehingga memberikan suatu fungsionalitas baru, contohnya (pilih salah satu):
	* fungsi mengoutputkan harga/denda pinjam
	* fungsi tidak bisa meminjam buku yang sedang dipinjam
	* fungsi menghitung jumlah buku yang sedang dipinjam
	* mengecek id buku yang dipilih tersedia
	* dll
