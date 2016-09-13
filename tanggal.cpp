/**
    KELAS     :IF-39-06
    KELOMPOK  : 5
    NAMA(NIM) : [A.A Gde Ratu Pemayun][1301154412] , [KM Alfarabi][1301150076] , [Gisela Anggita Ashianti][1301154468] , [fiqhi agung][1301154132]
**/

#include <string>
#include "tanggal.h"

tanggal create_tanggal(int dd,int mm,int yy) {

    tanggal tgl;
    tgl.tgl = dd;
    tgl.bln = mm;
    tgl.thn = yy;
    return tgl;
}

bool cek_tanggal(tanggal tgl) {

    bool ok = true;
        if (tgl.bln == 2 ){
            if ((tgl.tgl >= 1) && (tgl.tgl >30)){
                ok = true;
            }
        }
        if ((tgl.bln == 1) or (tgl.bln == 3)or(tgl.bln==5)or(tgl.bln==7)or(tgl.bln==8)or(tgl.bln==10) or (tgl.bln==12)) {
            if ((tgl.tgl >= 1) && (tgl.tgl >32)){
                ok = true;
            }
        }
        else if((tgl.bln==4)or(tgl.bln==6) or(tgl.bln==9)or(tgl.bln==11)){
            if ((tgl.tgl>=1) && (tgl.tgl >31)) {
                ok = true;
            }
        }
        else{
            ok=false;
        }
    return ok;
}

void show_tanggal(tanggal tgl) {
    string bulan;

    if (tgl.bln==1){
        bulan="januari";
    }
    else if (tgl.bln==2){
        bulan="februari";
    }
    else if (tgl.bln==3){
        bulan="maret";
    }
    else if (tgl.bln==4){
        bulan="april";
    }
    else if (tgl.bln==5){
        bulan="mei";
    }
    else if (tgl.bln==6){
        bulan="juni";
    }
    else if (tgl.bln==7){
        bulan="juli";
    }
    else if(tgl.bln==8){
        bulan="agustus";
    }
    else if(tgl.bln==9){
        bulan="september";
    }
    else if(tgl.bln==10){
        bulan="oktober";
    }
    else if(tgl.bln==11){
        bulan="november";
    }
    else if(tgl.bln==12){
        bulan="desember";
    }
    else {
        bulan="bulan tidak terdaftar";
    }
    cout<<tgl.tgl<<" "<<bulan<<" "<<tgl.thn<<endl;
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    tgl.tgl = dd;
    tgl.bln = mm;
    tgl.thn =yy;

}

int selisih_hari(tanggal tgl1, tanggal tgl2) {
    int selisih = -1;
    if (tgl1.thn==tgl2.thn){
        if (tgl1.bln == tgl2.bln){
            if (tgl2.tgl > tgl1.tgl){
                selisih = tgl2.tgl - tgl1.tgl;
            }
            else if (tgl1.tgl > tgl2.tgl){
                selisih = tgl1.tgl - tgl2.tgl;
            }
        }
        else if (tgl2.bln > tgl1.bln){
            selisih = ((30- tgl1.tgl)+tgl2.tgl+((tgl2.bln-tgl1.bln-1)*30));
        }
        else if (tgl1.bln > tgl2.bln){
            selisih = (tgl1.tgl + (30 - tgl2.tgl)+ ((tgl1.bln-tgl2.bln-1)*30));
        }
    }
    return selisih;
}
