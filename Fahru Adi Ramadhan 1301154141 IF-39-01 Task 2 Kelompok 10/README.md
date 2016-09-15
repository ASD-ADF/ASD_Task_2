# Task_2
## Abstract Data Type

1. fork dan clone repositori ASD_Task_1
2. buka dan modifikasi isi project task2_2016 dari code::block
3. tuliskan kode kalian pada bagian yang telah disediakan

Buatlah aplikasi sederhana untuk menympan data tanggal lahir orang

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
	
	prosedur show_tanggal(tgl : tanggal)
	/**
	* fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
	* contoh : 1 Januari 1980
	**/

	prosedur edit_tanggal(i/o: tgl : tanggal, i: dd,mm,yy : integer)
	/**
	* fungsi mengubah isi tanggal dari variabel tgl
	**/

	fungsi selisih_hari(tgl1, tgl2 : tanggal) : integer
	/**
	* fungsi menghitung selisih hari dari variable tgl1 dan tgl2
	* fungsi selalu mengembalikan selisih dalam nilai positif
	* syarat tahun tgl1 dan tgl2 harus sama
	* jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
	**/
```

### orang.h
* buatlah ADT tanggal sebagai berikut
```pascal
TYPE orang : 
    <
    	nama : string
		tgl_lahir : tanggal
    >
```

### orang.cpp
* implementasikan fungsi primitif orang
```pascal
	fungsi create_orang(nama : string nama, tgl,bln,thn : integer): orang
	/**
	* fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
	* fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
	**/

	fungsi hitung_umur(org : orang) : integer
	/** fungsi menghitung umur orang org berdasarkan tahun 2016	**/
	
	prosedur show_orang(org : orang)
	/** fungsi menampilkan nama, tanggal lahir dan umur orang org **/
```

### main.cpp
* jalankan main.cpp
* ubahlah kode di dalam main.cpp sehingga terdapat proses untuk meminta input tanggal lahir kembali kepada user jika terjadi kesalahan dalam pengisian tanggal lahir
* tampilkan pesan bahwa selisih tidak bisa dihitung jika tahun lahir orang1 dan orang2 berbeda
