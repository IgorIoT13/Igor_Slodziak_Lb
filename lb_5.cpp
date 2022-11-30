

#include <iostream>
#include <string>

class Planet {
public:
    std::string name;
    long int mass_t, dist_sun;
    long float tem_c, per_orb, len_of_day_h;
};



class Planetary: public Planet{
public:
    void prov(std::string name_st) {




        if ("1" == name_st) {
            name = name_st;
            mass_t = 20000;
            dist_sun = 1000000;
            tem_c = 450.53;
            per_orb = 45.231;
            len_of_day_h = 12.5;
        }

        else if ("2" == name_st) {
            name = name_st;
            mass_t = 25000;
            dist_sun = 1230000;
            tem_c = 460.53;
            per_orb = 45.231;
            len_of_day_h = 1.5;

        }

        else if ("3" == name_st) {

            name = name_st;
            mass_t = 25678;
            dist_sun = 1230000;
            tem_c = 460.53;
            per_orb = 45.231;
            len_of_day_h = 10.5;

        }

        else if ("4" == name_st) {

            name = name_st;
            mass_t = 25003;
            dist_sun = 1530000;
            tem_c = 25.6;
            per_orb = 365;
            len_of_day_h = 24;

        }
        else if ("0" == name_st) {

            name = name_st;
            mass_t = 0;
            dist_sun = 0;
            tem_c = 0;
            per_orb = 0;
            len_of_day_h = 0;

        }
        else {
            name = "Zero";

            std::cout << "Fatal_Error";

        }
    }
   

    int out_fun_Dis() {
        std::cout << "Name: " << name << "\n mass: "
            << mass_t << "\n dis :" << dist_sun 
            << "\n tem: " << tem_c << "\n period: "
            << per_orb << "\n Time day: " << len_of_day_h << std::endl;
        return 0;
    }
};

class Sort : public Planetary {
public:
    std::string Pl, Po_n;
    long float  Po_t;

public:
    void Sort_f(std::string Plan_5, std::string Plan_6, std::string Plan_7, std::string Plan_8) {



        for (int n = 0; n <= 3; n++) {

            if (n <= 0) {
                Pl = Plan_5;
               
            }
            else if (n <= 1) {
                Pl = Plan_6;
                
            }
            else if (n <= 2) {
                Pl = Plan_7;
               
            }
            else {
                Pl = Plan_8;
                
            }

            prov(Pl);

            if (len_of_day_h >= Po_t) {
                Po_t = len_of_day_h;
                Po_n = name;
            }


        }
    }

    void  Clear() {
        Po_t = 0;
  }

};

void Planet_mas(std::string Plan_mas_1, std::string Plan_mas_2, std::string Plan_mas_3, std::string Plan_mas_4);

void find_dis(std::string name_1, std::string name_2);

void sort_time_day(std::string Plan_1, std::string Plan_2, std::string Plan_3, std::string Plan_4);

int main()
{   
    Planetary Fun_1;
    std::string Main_name_p, Fun_f_1, Fun_f_2, Fun_s_1, Fun_s_2, Fun_s_3, Fun_s_4;

    std::string Fun_m_1, Fun_m_2, Fun_m_3, Fun_m_4;
    std::cout<<"Vvedit name ==>";
    std::cin>>Main_name_p;
    std::cout<<std::endl << "/... obrobka .../" << std::endl;

    Fun_1.prov(Main_name_p);
    Fun_1.out_fun_Dis();

    std::cout << "______________________________________________________________________________________________________________\n";
    

    std::cout << "Vvedit Plan-1 :";
    std::cin >> Fun_f_1;
    std::cout << std::endl;


    std::cout << "______________________________________________________________________________________________________________\n";


    std::cout << "Vvedit Plan-2 :";
    std::cin >> Fun_f_2;
    std::cout << std::endl;

    find_dis(Fun_f_1 , Fun_f_2);
    std::cout << std::endl  << "______________________________________|Sort|_______________________________________\n";

    std::cout << "Vvedit Plan-1 : ";
    std::cin >> Fun_s_1;
    std::cout << std::endl;

    std::cout << "Vvedit Plan-2 : ";
    std::cin >> Fun_s_2;
    std::cout << std::endl;

    std::cout << "Vvedit Plan-3 : ";
    std::cin >> Fun_s_3;
    std::cout << std::endl;

    std::cout << "Vvedit Plan-4 : ";
    std::cin >> Fun_s_4;
    std::cout << std::endl;

    sort_time_day(Fun_s_1, Fun_s_2, Fun_s_3, Fun_s_4);

    std::cout << std::endl << "______________________________________|Mass|_______________________________________\n";

    std::cout << "Vvedit Plan-1 : ";
    std::cin >> Fun_m_1;
    std::cout << std::endl;

    std::cout << "Vvedit Plan-2 : ";
    std::cin >> Fun_m_2;
    std::cout << std::endl;

    std::cout << "Vvedit Plan-3 : ";
    std::cin >> Fun_m_3;
    std::cout << std::endl;

    std::cout << "Vvedit Plan-4 : ";
    std::cin >> Fun_m_4;
    std::cout << std::endl;


    Planet_mas(Fun_m_1, Fun_m_2, Fun_m_3, Fun_m_4);



    return 0;
}
 
void find_dis(std::string name_1, std::string name_2) {
    Planetary fun_find;
    long int dis_res, dis_1, dis_2;

    fun_find.prov(name_1);

    dis_1 = fun_find.dist_sun;

    fun_find.prov(name_2);

    dis_2 = fun_find.dist_sun;


    if (dis_2 >= dis_1) {
        dis_res = dis_2 - dis_1;
        std::cout << dis_res << std::endl;
    }
    else {
        dis_res = dis_1 - dis_2;
        std::cout << dis_res << std::endl;
    }

}




void sort_time_day(std::string Plan_1, std::string Plan_2, std::string Plan_3, std::string Plan_4) {
    Planetary time_day;
    Sort sort_f;

    std::string Po_n_arr[4], Pl_s[4], Pls;
    long float  Po_t_arr[4]={0,0,0,0};

    Pl_s[0] = Plan_1;
    Pl_s[1] = Plan_2;
    Pl_s[2] = Plan_3;
    Pl_s[3] = Plan_4;


    for (int n = 0; n <= 3; n++) {
        sort_f.Sort_f(Pl_s[0], Pl_s[1], Pl_s[2], Pl_s[3] );
        Po_t_arr[n] = sort_f.Po_t;
        sort_f.Clear();


        for (int a = 0; a <= 3; a++) {

            if (a <= 0) {
                if(Pl_s[a]=="0") {
                    Pls = "0";
                }
                else {
                    Pls = Plan_1;
                }
            }
            else if (a <= 1) {
                if (Pl_s[a] == "0") {
                    Pls = "0";
                }
                else {
                    Pls = Plan_2;
                }
            }
            else if (a <= 2) {
                if (Pl_s[a] == "0") {
                    Pls = "0";
                }
                else {
                    Pls = Plan_3;
                }
            }
            else {
                if (Pl_s[a] == "0") {
                    Pls = "0";
                }
                else {
                    Pls = Plan_4;
                }
            }

            time_day.prov(Pls);
            

                if (time_day.len_of_day_h == Po_t_arr[n]) {

                    Pls = "0";

                }

                Pl_s[a] = Pls;
               
        }




        
        std::cout << Po_t_arr[n]<<std::endl;
    }
    

   

}


void Planet_mas(std::string Plan_mas_1 , std::string Plan_mas_2, std::string Plan_mas_3, std::string Plan_mas_4) {
    std::string Pl_m[4];
    Planetary fun;
    float mas_rez, mas = 0;
    int  num=0;
        Pl_m[0] = Plan_mas_1;
        Pl_m[1] = Plan_mas_2;
        Pl_m[2] = Plan_mas_3;
        Pl_m[3] = Plan_mas_4;

    for (int n = 0; n <= 3; n++) {
        fun.prov(Pl_m[n]);
        if (Pl_m[n] == "0") {
            mas += fun.mass_t;
        }
        else {
            mas += fun.mass_t;
            num++;
        }
       

    }

    mas_rez = mas / num;
    std::cout << "Rez = " << mas_rez;
}



