#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    long long n, imax, brprostideliteli, m, k;

    cout<<"namira vs est chisla po malki ili ravni ot tova chislo, koito imat k na broi PROSTI delitelq"<<endl;
    cout<<"napishi chislo"<<endl;
    cin>>n;
    cout<<"napishi k"<<endl;
    cin>>k;

    cout<<"chislata, koito sa po-malki ili ravni na "<<n<<" i imat "<<k<<" na broi prosti deliteli sa: "<<endl;

    m=n;

    for(m=n ; m>0 ; m-- )
    {
        brprostideliteli=1;
        //cout<<endl<<m<<",";

        imax=m;
    //cout<<"PROSTITE delitelite na "<<m<<" sa :"<<endl;
    //cout<<1<<",";
    for(long long i=2;i<=imax;i++){
        int flag=1;
        if(m%i==0)
            //proverqvam dali delitelq i e prost
            {
                int p, q=0, flag=0;

                q=i/2;
                for(p = 2; p <= q; p++)
                {
                    if(i % p == 0)
                {
                    //cout<<"Number is not Prime."<<endl;
                    flag=1;
                    break;
                }
                }
                if (flag==0)
                {
                   //cout << "Number is Prime."<<endl;
                //cout<<i<<",";
                brprostideliteli++;
                }

            }

    }

    //cout<<endl<<"br na delitelite e "<<brprostideliteli;
    if(brprostideliteli==k)
        {
        cout<<m<<endl;
        }


    }

     return 0;
}

