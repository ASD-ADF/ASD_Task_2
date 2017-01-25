/**
KELAS     : IF 39-06
KELOMPOK  : 8
NAMA(NIM) : [ISABELLA VICHITA KACARIBU][1301154637] , [AMIN AENURAHMAN][1301154398] , [ALFIN PRATAMA][NIM] , [HAFIZH FAUZANDI][1301154272]
**/
orang create_tanggal(string nama, int tgl, int bln, int thn){
    orang org;
    tanggal tgll;
    //=================================================
    // YOUR CODE STARTS HERE
    org.nama = nama;
    tanggal tanggal_lahir = create_tanggal(tgl, bln, thn);
    org.tgl_lahir = tanggal_lahir;
      // YOUR CODE ENDS HERE
      //=================================================
      return org;
}
int hitung_umur(orang org) {
      int umur = 0;
      //=================================================
      // YOUR CODE STARTS HERE
      umur = 2016 - org.tgl_lahir.yy;
      // YOUR CODE ENDS HERE
      //=================================================
      return umur;
}
void show_orang(orang org) {
      //=================================================
      // YOUR CODE STARTS HERE
     cout << "Nama: "<< org.nama << endl;
     cout << "Tanggal Lahir: "<< org.tgl_lahir.dd <<" "<< org.tgl_lahir.mm <<" "<< org.tgl_lahir.yy << endl;
     cout << "Umur: "<< hitung_umur(org) << endl;
     cout << endl;
}
      // YOUR CODE ENDS HERE
      //=================================================
