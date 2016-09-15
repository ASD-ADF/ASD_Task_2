/**
    KELAS     : IF-39-01
    KELOMPOK  : 10
    NAMA(NIM) : [ANJAR AFRIZAL][1301154239] , [FAHRU ADI RAMADHAN][1301154141] , [FAUZI KURNIAWAN][1301154267] , [REGITA RATIH P][1301150435]
**/

#include <string>
#include "tanggal.h"

tanggal create_tanggal(int dd,int mm,int yy)
{
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //=================================================
    // YOUR CODE STARTS HERE
    tgl.tgl = dd;
    tgl.bln = mm;
    tgl.thn = yy;


    // YOUR CODE ENDS HERE
    //=================================================
    return tgl;
}

bool cek_tanggal(tanggal tgl)
{
    /**
    * fungsi mengecek tanggal
    * fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
    * fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
    **/
    bool ok = true;
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl.thn <= 2016)
    {
        if (tgl.bln >=1 && tgl.bln <=12)
        {
            if (tgl.bln == 2)
            {
                if(tgl.tgl >=1 && tgl.tgl <=29)
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                }
            }
            else if (tgl.bln == 8)
            {
                if (tgl.tgl >=1 && tgl.tgl<=31)
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                }
            }
            else if ((tgl.bln & 2) == 0)
            {
                if (tgl.tgl >=1 && tgl.tgl <=30)
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                }
            }
            else if ((tgl.bln % 2) == 1)
            {
                if(tgl.tgl >=1 && tgl.tgl <=31)
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                }
            }
        }
        else
        {
            ok = false;
        }
    }
    else
    {
        ok = false;
    }


    // YOUR CODE ENDS HERE
    //=================================================
    return ok;
}

void show_tanggal(tanggal tgl)
{
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    string bulan;

    if (tgl.bln == 1)
    {
        bulan = "januari";
    }
    else if (tgl.bln == 2)
    {
        bulan = "Februari";
    }
    else if (tgl.bln == 3)
    {
        bulan = "maret";
    }
    else if (tgl.bln == 4)
    {
        bulan = "april";
    }
    else if (tgl.bln == 5)
    {
        bulan = "mei";
    }
    else if (tgl.bln == 6)
    {
        bulan = "juni";
    }
    else if (tgl.bln == 7)
    {
        bulan = "juli";
    }
    else if (tgl.bln == 8)
    {
        bulan = "Agustus";
    }
    else if (tgl.bln == 9)
    {
        bulan = "September";
    }
    else if (tgl.bln == 10)
    {
        bulan = "Oktober";
    }
    else if (tgl.bln == 11)
    {
        bulan = "November";
    }
    else if (tgl.bln == 12)
    {
        bulan = "Desember";
    }

    cout << tgl.tgl<<" "<<bulan<<" "<<tgl.thn<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy)
{
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    tgl.tgl = dd;
    tgl.bln = mm;
    tgl.thn = yy;

    cout << "Tanggal lahir anda berhasil di ubah"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}

int selisih_hari(tanggal tgl1, tanggal tgl2)
{
    /**
    * fungsi menghitung selisih hari dari variable tgl1 dan tgl2
    * fungsi selalu mengembalikan selisih dalam nilai positif
    * syarat tahun tgl1 dan tgl2 harus sama
    * jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
    **/
    int selisih = -1;
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl1.thn == tgl2.thn)
    {
        if (tgl1.bln > tgl2.bln)
        {
            selisih = (tgl1.tgl + (30 - tgl2.tgl) + ((tgl1.bln - tgl2.bln-1)*30));
        }
        else if (tgl2.bln > tgl1.bln)
        {
            selisih = (tgl2.tgl + (30 - tgl1.tgl) + ((tgl2.bln - tgl1.bln-1)*30));
        }
        else if (tgl1.bln == tgl1.bln)
        {
            if(tgl1.tgl >= tgl2.tgl)
            {
                selisih = tgl1.tgl - tgl2.tgl;
            }
            else if ( tgl2.tgl >= tgl1.tgl)
            {
                selisih = tgl2.tgl - tgl1.tgl;
            }
        }
    }
    else
    {
        cout << "tahun lahir orang 1 dan orang 2 beda"<<endl;
        selisih = -1;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
