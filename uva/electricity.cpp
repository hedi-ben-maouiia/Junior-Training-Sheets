#include <iostream>

using std::cin,std::cout;

int M[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

bool one_day(int ad,int am,int ay,int bd,int bm, int by)
{
    if(--bd == 0)
    {
        if(--bm == 0){
            --by;
            bm = 12;
        }

        bd = M[bm-1];

        bool is_leap = ((by % 4 == 0 && by % 100 != 0 ) || by % 4 == 0);

        if(is_leap && bm == 2) bd = 29;

    }
    return ad == bd && am == bm && ay == by;
}

void solve()
{
    int t;
    int dd=0,mm=0,yy=0,cc=0;

    int total_c,total_d;
    while(cin >> t && t){
        total_c = 0, total_d = 0;
        while(t--){
            int d,m,y,c;
            cin >> d >> m >> y >> c;
            if(one_day(dd,mm,yy,d,m,y)){
                total_c +=c -cc, total_d++;
            }
            dd = d; mm = m; yy = y; cc = c;
        }
        cout << total_d << " " << total_c << "\n";
    }
}

int main()
{
    speed();
    solve();
    return 0;

}
