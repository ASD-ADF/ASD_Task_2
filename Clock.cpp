bool validasi(int jam, int menit, int detik)
{
    if ((jam>=0)&&(jam<=23)&&(menit>=0)&&(menit<=59)&&(detik>=0)&&(detik<=59))
    {
    return true;
    }
    else
    {
        return false;
    }
}
clock buatjam(int jj, int mm, int dd)
{
    clock j1;
    jl.jam=jam;
    jl.menit=menit;
    jl.detik=detik;
    return jl;
}
int tampiljam(clock jl)
{
    return jl.jam;
}
int GetMenit(clock jl)
{
    return jl.menit;
}
int tampildetik(clock jl)
{
    return jl.detik;
}
void aturjam(int jam)
{
    clock j1;
    j1.jam=jam;
    cout<< "Jam diatur menjadi " << j1.jam << endl;
}
void aturmenit(int mm)
{
    clock j1;
    j1.menit=menit;
    cout<< "Menit diatur menjadi " << j1.menit << endl;
}
void aturdetik(int ss)
{
    clock j1;
    j1.detik=ss;
    cout<< "Detik diatur menjadi " << j1.detik << endl;
}
bool perbandingan(clock j1, clock j2)
{
    bool valid;
    if (j1.jam == j2.jam&&j1.menit==j2.menit&&j1.detik==j2.detik)
    {
        valid=true;
    }
    else
    {
        valid=false;
    }
    return valid;
}
void jam keluar(clock j1)
{
   cout << j1.jam << ":" << j1.menit<< ":" << j1.detik << endl;
}


