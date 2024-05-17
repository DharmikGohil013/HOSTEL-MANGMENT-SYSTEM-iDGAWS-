#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <windows.h>
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;
int main1();
void profile(int n1, int p1);
void new_user1();
void creativity(int num11,int pass11);
void daily_dairy(int n1,int p1);
void show_daily(int d1);
void display_all11();
void modify_account1(int n1,int p1);
class hostel
{
    private:
    char name1[50],collage_name[50],adharnumber[50],city[50],buisness[50],fild[50],year[50];
    char add[50],creativity1[100];

    int birth1,birth2,birth3,birth,acno1,password,daily_date,date,get9;
    bool get,get1,get2,get3,get4,get5,get6,get7,get8;
    string leftAlignedText = "Left Aligned";
    string rightAlignedText = "Right Aligned";
    public:
    hostel(int ac = 0, int pass = 0, int data = 0) : acno1(ac), password(pass)//, daily_dairy(data)
    {}
    void create_account1();
    void show_account1() const;
    int retacno1(); // Function to return acno1
    int retpassword();
    void creativity_main();
    void daily_dairy1();
    void show_daily2(int d1);

    int retdailydate1();
    void report11() const;
    void modify11();
};
void hostel::modify11()
{
    system("cls");
    cout<<"\n\t\tWELLCOME TO HOSTEL NEW USER ";
    cout<<"\n\t\tENTER USER FULL NAME : - ";
    cin.ignore();
    cin.getline(name1,50);
     cout<<"\n\t\tYour Birth Date (DD) : -";
    cin>>birth1;
    if(birth1>=31 && birth1<=1)
    {
        cout<<"\n\t\tNot Found!!!!!! ";
        cin.ignore();
        cin.get();
    return;
    }
    cout<<"\n\t\tYour Birth Date (MM) : -";
    cin>>birth2;
    if(birth2>12 && birth2<=1)
    {
        cout<<"\n\t\tNot Found!!!!!! ";
        cin.ignore();
        cin.get();
        return;
    }
    else
    {
        if(birth2==2)
        {
            if(birth1>29)
            {
                cout<<"\n\t\tDate Not found ";
                cin.ignore();
                cin.get();
               return;

            }
        }
        else if(birth2%2==0)
        {
            if(birth1>30)
            {
                cout<<"\n\t\tDate Not found ";
                cin.ignore();
                cin.get();
                return;
            }
        }
    }
    cout<<"\n\t\tYour Birth Date (YYYY) : -";
    cin>>birth3;
    if(birth3>2024 && birth3<1900)
    {
        cout<<"\n\t\tDate Not Found ";
        cin.ignore();
        cin.get();
        return;
    }
    birth=(birth1*1000000)+(birth2*10000)+birth3;
    cout<<"\n\t\tYOUR AC NUMBER IS "<<birth;
    cout<<"\n\t\tADHARCARD NUMBER :- ";
    cin.ignore();
    cin.getline(adharnumber,50);
    cout<<"\n\t\tYOUR CITY : - ";

    cin.getline(city,50);
    cout<<"\n\t\tENTER YOUR FULL ADDRESS : - ";

    cin.getline(add,50);
    cout<<"\n\t\tYOUR FATHER BUISNESS :- ";
    cin.getline(buisness,50);
    cout<<"\n\t\tYOUR FILD : - ";
    cin.getline(fild,50);
    cout<<"\n\t\tENTER COLLAGE NAME : - ";
    cin.getline(collage_name,50);
    cout<<"\n\t\tENTER YEAR ( FY , SY , TY , LY ) : - ";
    cin.getline(year,50);
    acno1=(birth1*1000000)+(birth2*10000)+(birth3);
    cout<<"\n\t\t ADD MMORE CREATIVITY := ";
    cin.getline(creativity1,100);
    
    cout<<"\n\t\tENTER PASSWORD (PASSWORD IS 5 NUMBER (ALL NUMBER IS ENTER INTGER) ) : - ";
    cin>>password;
    cout<<"\n\n\t\t RECORD CREATED...";
    //cout << "\n\n\n\t\t\t\t\tAccount Created..";
    //cout<<"\n\n\t\t\t Thanks For Opening Your Ac In DGFB ";
}
void hostel::report11() const
{
    cout<<acno1<<setw(15)<<name1<<setw(15)<<adharnumber<<setw(15)<<collage_name<<setw(15)<<fild<<setw(15)<<password<<setw(15)<<buisness<<endl;
}
void hostel::show_daily2(int d1)
{    cout << "Daily Data: " <<daily_date<< endl;
    cout<<"\n\t\tGETUP 5.45 AM (enter 1 or 0 ans)"<<get;
    cout<<"\n\t\tPRATHNA  (enter 1 or 0 ans)"<<get1;
    cout<<"\n\t\tSURYA NAMASKAR  (enter 1 or 0 ans)"<<get2;
    cout<<"\n\t\tMORNING NASTO (enter 1 or 0 ans)"<<get3;
    cout<<"\n\t\tMORNING REDING TIME (enter 1 or 0 ans)"<<get4;
    cout<<"\n\t\tKIT USE (enter 1 or 0 ans)"<<get5;
    cout<<"\n\t\tNIGHT PRATHNA  (enter 1 or 0 ans)"<<get6;
    cout<<"\n\t\tTOTAL REDING TIME (ANS IN INTEGER)"<<get9;
}
int hostel::retdailydate1()
{
    return daily_date;
}
void hostel::daily_dairy1()
{
    cout << "Enter daily data: ";
    cin >>daily_date;
    cout<<"\n\t\tENTER TODAY DATE : -";
    cin>>daily_date;
    cout<<"\t\tGETUP 5.45 AM (enter 1 or 0 ans):-";
    cin>>get;
    cout<<"\t\tPRATHNA (enter 1 or 0 ans):-";
    cin>>get1;
    cout<<"\t\tSURYA NAMASKAR  (enter 1 or 0 ans):-";
    cin>>get2;
    cout<<"\t\tMORNING NASTO (enter 1 or 0 ans):-";
    cin>>get3;
    cout<<"\t\tMORNING REDING TIME (enter 1 or 0 ans):-";
    cin>>get4;
    cout<<"\t\tKIT USE (enter 1 or 0 ans):-";
    cin>>get5;
    cout<<"\t\tNIGHT PRATHNA  (enter 1 or 0 ans):-";
    cin>>get6;
    cout<<"\t\tTOTAL REDING TIME (ANS IN INTEGER):-";
    cin>>get9;
}
void hostel::creativity_main()
{
    system("cls");
    cout<<"\n\n\t\t"<<creativity1;
     cin.ignore();
    cin.get();
    system("cls");

}
int hostel::retacno1() {
    return acno1;
}
int hostel::retpassword()
{
    return password;
}
void hostel::create_account1()
{
    rep11:

    system("cls");
    cout<<"\n\t\tWELLCOME TO HOSTEL NEW USER ";
    cout<<"\n\t\tENTER USER FULL NAME : - ";
    cin.ignore();
    cin.getline(name1,50);
     cout<<"\n\t\tYour Birth Date (DD) : -";
    cin>>birth1;
    if(birth1>=31 && birth1<=1)
    {
        cout<<"\n\t\tNot Found!!!!!! ";
        cin.ignore();
        cin.get();
        goto rep11;
    }
    cout<<"\n\t\tYour Birth Date (MM) : -";
    cin>>birth2;
    if(birth2>12 && birth2<=1)
    {
        cout<<"\n\t\tNot Found!!!!!! ";
        cin.ignore();
        cin.get();
        goto rep11;
    }
    else
    {
        if(birth2==2)
        {
            if(birth1>29)
            {
                cout<<"\n\t\tDate Not found ";
                cin.ignore();
                cin.get();
                goto rep11;

            }
        }
        else if(birth2%2==0)
        {
            if(birth1>30)
            {
                cout<<"\n\t\tDate Not found ";
                cin.ignore();
                cin.get();
                goto rep11;
            }
        }
    }
    cout<<"\n\t\tYour Birth Date (YYYY) : -";
    cin>>birth3;
    if(birth3>2024 && birth3<1900)
    {
        cout<<"\n\t\tDate Not Found ";
        cin.ignore();
        cin.get();
        goto rep11;
    }
    birth=(birth1*1000000)+(birth2*10000)+birth3;
    cout<<"\n\t\tYOUR AC NUMBER IS "<<birth;
    cout<<"\n\t\tADHARCARD NUMBER :- ";
    cin.ignore();
    cin.getline(adharnumber,50);
    cout<<"\n\t\tYOUR CITY : - ";

    cin.getline(city,50);
    cout<<"\n\t\tENTER YOUR FULL ADDRESS : - ";

    cin.getline(add,50);
    cout<<"\n\t\tYOUR FATHER BUISNESS :- ";
    cin.getline(buisness,50);
    cout<<"\n\t\tYOUR FILD : - ";
    cin.getline(fild,50);
    cout<<"\n\t\tENTER COLLAGE NAME : - ";
    cin.getline(collage_name,50);
    cout<<"\n\t\tENTER YEAR ( FY , SY , TY , LY ) : - ";
    cin.getline(year,50);
    acno1=(birth1*1000000)+(birth2*10000)+(birth3);
    cout<<"\n\t\t ADD MMORE CREATIVITY := ";
    cin.getline(creativity1,100);
    cout<<"\n\n RECORD CREATED...";
    cout<<"\n\t\tENTER PASSWORD (PASSWORD IS 5 NUMBER (ALL NUMBER IS ENTER INTGER) ) : - ";
    cin>>password;
    cout << "\n\n\n\t\t\t\t\tAccount Created..";
    cout<<"\n\n\t\t\t Thanks For Opening Your Ac In DGFB ";

}
void hostel::show_account1() const
{
    cout<<"\n\t\tNAME : - ";
    cout<<name1;
    cout<<"\n\t\t BIRTH DATE : - "<<birth1<<" / "<<birth2<<" / "<<birth3;
    cout<<"\n\t\t CITY : - "<<city;
    cout<<"\n\t\t ADDRESS : - "<<add;
    cout<<"\n\t\t ADHARCAD NUMBER IS : - ";
    cout<<adharnumber;
    cout<<"\n\t\t COLLAGE NAME : - "<<collage_name;
    cout<<"\n\t\t FILD : - "<<fild;
    cout<<"\n\n\n\n\n\t\t THANK YOU FOR DGAWS!! ";
    return ;
    
}
void logo()
{
    system("cls");
    cout<<"\n\n\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    system("COLOR 06");
    cout<<"\n\t\t\t-------- ***********     *************************      -----------------";
    cout<<"\n\t\t\t-------- *            *                                 -----------------";
    cout<<"\n\t\t\t-------- *            *               ************      -----------------";
    cout<<"\n\t\t\t-------- *            *       ********                  -----------------";
    cout<<"\n\t\t\t-------- *            *              *                  -----------------";
    cout<<"\n\t\t\t--------            *   *           *                   -----------------";
    cout<<"\n\t\t\t-------- **********      ***********                    -----------------";
    cout<<"\n\t\t\t--------                                                -----------------";
    cout<<"\n\t\t\t--------                HOSTEL      SYSTEM              -----------------";
    system("COLOR 06");
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\t\t\t\t DGHS CREATED BY DHARMIK GOHIL FILM  ";
    Sleep(2000);
    system("cls");
    cout << "\n\n\n\n\n\n\n\t\t\t\t WELCOME TO DHARMIK GOHIL HOSTEL SYSTEM ";
    cout<<"\n\n\t\t\t\t PLEASE WAIT . ";
    for (int i = 0; i <= 5; i++)
    {
        cout << " . ";
        Sleep(100);
    }

}
int main()
{
    string leftAlignedText = "Left Aligned";
    string rightAlignedText = "Right Aligned";
    rep111:
    int i,ch;
    int pass11,num11,date111;
    logo();
    system("cls");
    system("COLOR 09");
    cout<<"\n\n\n\n\tYOU ARE WHAT!!";
    cout<<"\n\n\t01.HOSTEL USER";
    cout<<"\n\n\t02.HOSTEL MANEGMENT";
    cout<<"\n\n\t03.HOSTEL VISITER";
    cout<<"\n\n\t04.HOSTEL USER PARENTS";
    cout<<"\n\n\tENTER ANY ONE (1 TO 4 ):- ";
    cin>>i;

    switch(i)
    {
        case 1:
        {
            do
             {
                system("cls");
                system("COLOR BC");
                cout << "\n\n\n\tMAIN MENU";
                cout << "\n\n\t01. ADD DAILY DAIRY";
                cout << "\n\n\t02. CREATIVITY";
                cout << "\n\n\t03. PROFILE";
                cout << "\n\n\t04. EXIT";
                cout << "\n\n\t05. ENTER MAIN LOBY";
                cout << "\n\n\tSelect Your Option (1-5) ";
                cin >> ch;
                system("cls");
                switch (ch)
                {
                    case 1:
                        cout<<"\n\tHELLO USER WELCOME HOSTEL SYSTEM";
                        cout<<"\n\n\n\tENTER YOUR ID:=";
                        cin>>num11;
                        cout<<"\n\n\tENTER PASSWORD :=";
                        cin>>pass11;
                       daily_dairy(num11,pass11);
                       cin.ignore();
                        cin.get();
                        break;

                    case 2:
                        cout<<"\n\tHELLO USER WELCOME HOSTEL SYSTEM";
                        cout<<"\n\n\n\tENTER YOUR ID:=";
                        cin>>num11;
                        cout<<"\n\tENTER PASSWORD :=";
                        cin>>pass11;
                        creativity(num11,pass11);

                        break;
                     case 3:
                        cout << "\n\tHELLO USER WELCOME HOSTEL SYSTEM";
                        cout << "\n\n\n\tENTER YOUR ID:=";
                        cin >> num11;
                        cout << "\n\tENTER PASSWORD :=";
                        cin >> pass11;
                        profile(num11, pass11); // Corrected function call
                        system("cls");
                        cout<<"\n YOU SHOW YOUR DAILY DAIRY (YES PRESS 1| OR | NO ENTER 0):- ";
                        int i5;
                        cin>>i5;
                        goto rep111;
                        switch(i5)
                        {
                            case 1:
                            system("cls");
                            cout<<"\n\t\tEnter Date : - ";
                            cin>>date111;
                            show_daily(date111);
                            break;
                            case 0:
                            cout<<"THANKYOU";
                            goto rep111;
                            break;
                            default:
                            {
                                goto rep111;
                            }
                        }
                        break;
                    case 4:
                        cout<<"\n\tTHANKS FOR VISIT OUR SIDE :) ";
                        exit(0);

                        break;
                    case 5:
                        cout<<"\n\tGO FOR LOBBY :)";
                        goto rep111;
                        break;
                default:
                    cout<<"\n\tYOU CHOOSE WRONG GOTO MAIN LOBBY ";
                    cin.ignore();
                    cin.get();
                    goto rep111;
                    break;
                }
             }
             while (ch!=4);
            break;
        }
        case 2:
        {
            rep1111:
            int pass2,pass1;
            pass1=555;
            system("cls");
            cout<<"\n\n\n\tWELLCOME HOSTEL MANEGMENT :)";
            cout<<"\n\n\tMANEGMENT PASS : - ";
            cin>>pass2;
            if(pass2!=pass1)
            {
                goto rep111;
            }
            
            do
             {
                system("cls");
                cout << "\n\n\n\tMAIN MENU";
                cout << "\n\n\t01. NEW ACCOUNT CREATE";
                cout << "\n\n\t02. FEES MENAGE";
                cout << "\n\n\t03. ALL ACCOUNT";
                cout << "\n\n\t04. MODIFY USER PROFILE";
                cout << "\n\n\t05. EXIT";
                cout << "\n\n\t06. ENTER MAIN LOBY";
                cout << "\n\n\tSelect Your Option (1-6) ";
                cin >> ch;
                system("cls");
                switch (ch)
                {
                    case 1:
                        cout<<"\n\tHELLO MENEGMENT WELCOME HOSTEL SYSTEM";
                        new_user1();

                        break;
                    case 2:
                        cout<<"\n\tHELLO MENEGMENT WELCOME HOSTEL SYSTEM";
                        main1();
                        break;
                    case 3:
                        cout<<"\n\tHELLO MENEGMENT WELCOME HOSTEL SYSTEM";
                        display_all11();
                        break;
                    case 4:
                        cout<<"\n\tHELLO MENEGMENT WELCOME HOSTEL SYSTEM";
                        cout<<"\n\n\n\tENTER YOUR ID:=";
                        cin>>num11;
                        cout<<"\n\tENTER PASSWORD :=";
                        cin>>pass11;
                        modify_account1(num11,pass11);
                        break;
                    case 5:
                        cout<<"\n\tTHANKS FOR VISIT OUR SIDE :) ";
                        exit(0);
                        break;
                    case 6:
                        cout<<"\n\tGO FOR LOBBY :)";
                        goto rep111;
                        break;
                default:
                    cout<<"\n\tYOU CHOOSE WRONG GOTO MAIN LOBBY ";
                    cin.ignore();
                    cin.get();
                    goto rep111;
                    break;
                }
             }
             while (ch!=5);
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
             system("cls");
            cout<<"\n\tYOUR CHOOSIS IN WRONG !!";
            cout<<"\n\tTHANKS FOR VISIT THIS SIDE";
            cin.ignore();
            goto rep1111;

        }
    }
    return 0;
}
void modify_account1(int n1,int p1)
{
	bool found = false;
	hostel ac;
	fstream file111;
	file111.open("hostel.txt", ios::binary | ios::in | ios::out);
	if (!file111)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (!file111.eof() && found == false)
	{
		file111.read(reinterpret_cast<char *>(&ac), sizeof(hostel));
		if (ac.retacno1() == n1)
		{
            if(ac.retpassword()==p1)
            {
			ac.show_account1();
			cout << "\n\n\t\tEnter The New Details of account" << endl;
			ac.modify11();
            cin.ignore();
            cin.get();
			int pos = (-1)*static_cast<int>(sizeof(hostel));
			file111.seekp(pos,ios::cur);
			file111.write(reinterpret_cast<char*>(&ac),sizeof(hostel));
			cout << "\n\n\t Record Updated";
			found = true;
            }
            else{
                cout<<"\n\t\tWRONG PASS!!";
                cin.ignore();
                cin.get();
                return;
            }
		}
        else{
                cout<<"\n\t\tWRONG AC NUMBER!!";
                cin.ignore();
                cin.get();
                return;
            }
	}
	file111.close();
	if (found == false)
		cout << "\n\n Record Not Found ";
        cin.ignore();
        cin.get();
        return;
}

void display_all11()
{
	hostel ac;
	ifstream in;
	in.open("hostel.txt", ios::binary);
	if (!in)
	{
		cout << "\n\t\tFile could not be open !! Press any Key...";
		return;
	}
	cout << "\n\n\t\t\t\t\t\tACCOUNT HOSTEL LIST\n\n";
	cout << "=====================================================================================================\n";
	cout << "A/c no.        NAME        ADHARNUMBER         COLLAGE         FILD        PASSWORD        FATHERBISS\n";
	cout << "=====================================================================================================\n";

	while (in.read(reinterpret_cast<char *>(&ac), sizeof(hostel)))
	{
		ac.report11();
	}
	cin.ignore();
    cin.get();
	in.close();
}
void show_daily(int d1)
//void show_daily(int d1,int a1,int p1);

{
    bool found111 = false;
    fstream input("hostel_daily.txt", ios::binary | ios::in);

    if (!input.is_open()) {
        cout << "Error: Could not open file for reading." << endl;
        return;
    }

    hostel ac;
    while (input.read(reinterpret_cast<char *>(&ac), sizeof(hostel))) {
        if (ac.retdailydate1() == d1) {
            ac.show_daily2(d1);
            found111 = true;
            break;
        }
    }

    if (!found111) {
        cout << "\n\t\tRECORD NOT FOUND .... ";
    }

    input.close();
}
void daily_dairy(int n1, int p1) {
    hostel ac;
    fstream output("hostel.txt", ios::binary | ios::in | ios::out);
    fstream output2("hostel_daily.txt", ios::binary | ios::out);

    if (!output.is_open())
     {
        cout << "\n\t\tError: Could not open hostel.txt for reading." << endl;
        return;
    }
    if (!output2.is_open()) 
    {
        cout << "\n\t\tError: Could not open hostel_daily.txt for writing." << endl;
        return;
    }

    bool found11 = false;

    while (output.read(reinterpret_cast<char *>(&ac), sizeof(hostel))) 
    {
        cout << "Read Account Number: " << ac.retacno1() << ", Password: " << ac.retpassword() << endl; // Debug statement

        if (ac.retacno1() == n1) {
            if (ac.retpassword() == p1) {
                output2.write(reinterpret_cast<char *>(&ac), sizeof(hostel));
                ac.daily_dairy1();
                cout << "Data added successfully!" << endl;
                found11 = true;
                break;
            } else {
                cout <<"\n\t\tPASSWORD WRONG";
                return;
            }
        }
    }

    if (!found11) {
        cout << "\n\t\tAC NUMBER IS WRONG ";
    }

    output.close();
    output2.close();
}
void new_user1()
{
    hostel ac;
    ofstream outFile;
     outFile.open("hostel.txt", ios::binary | ios::app);
     if (!outFile)
    {
        cout << "Error: Could not open file for writing read." << endl;
        return;
    }
    ac.create_account1();
    outFile.write(reinterpret_cast<char *>(&ac), sizeof(hostel));
    outFile.close();
}
void creativity(int n1,int p1)
{
    int amt1;
    bool found1 = false;
    hostel ac;
    fstream File12;
    File12.open("hostel.txt", ios::binary | ios::in | ios::out);
    if (!File12.is_open()) {
        cout << "File could not be open !! Press any Key...";
        return;
    }
    while (!File12.eof() && found1 == false) {
        File12.read(reinterpret_cast<char *>(&ac), sizeof(hostel));
        if (ac.retacno1() == n1) { // Corrected function call
            if (ac.retpassword() == p1) { // Corrected function call
                ac.show_account1();
                ac.creativity_main();
                found1 = true;
                break;
            } else {
                cout << "\n\n\t\t! YOUR PASS IS WRRONG ";
                system("cls");
            }
        }
    }

    File12.close();
    if (found1 == false) {
        cout << "\n\n\t\t\t\t\t FILE NOT FOUND";
    }
}
void profile(int n1, int p1) {
    int amt1;
    bool found1 = false;
    hostel ac;
    fstream File1;
    File1.open("hostel.txt", ios::binary | ios::in | ios::out);
    if (!File1.is_open()) {
        cout << "File could not be open !! Press any Key...";
        return;
    }
    while (!File1.eof() && found1 == false) {
        File1.read(reinterpret_cast<char *>(&ac), sizeof(hostel));
        if (ac.retacno1() == n1) { // Corrected function call
            if (ac.retpassword() == p1) { // Corrected function call
                ac.show_account1();
                found1 = true;
                break;
            } else {
                cout << "\n\n\t\t! YOUR PASS IS WRRONG ";
                return;
                system("cls");

            }
        }
    }

    File1.close();
    if (found1 == false) {
        cout << "\n\n\t\t\t\t\t FILE NOT FOUND";
        return;
    }
}
class account
{
    int birth11;
    int birth22;
    int birth33;
    int birth12;
    int acno;
    char name[50];
    int deposit;
    char type;
public:
    void create_account(); // function to get data from user
    void show_account() const; // function to show data on screen
    void modify(); // function to add new data
    void dep(int); // function to accept amount and add to balance amount
    void draw(int); // function to accept amount and subtract from balance amount
    void report() const; // function to show data in tabular format
    int retacno() const; // function to return account number
    int retdeposit() const; // function to return balance amount
    char rettype() const; // function to return type of account
};
void account::create_account()
{
    rep:
    system("cls");
    cout << "\n\nEnter The Name of The account Holder : ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"Your Birth Date (DD) : -";
    cin>>birth11;
    if(birth11>=31 && birth11<=1)
    {
        cout<<"Not Found!!!!!! ";
        goto rep;
    }
    cout<<"Your Birth Date (MM) : -";
    cin>>birth22;
    if(birth22>12 && birth22<=1)
    {
        cout<<"Not Found!!!!!! ";
        cin.ignore();
    cin.get();
        goto rep;
    }
    else
    {
        if(birth22==2)
        {
            if(birth11>29)
            {
                cout<<"Date Not found ";
                cin.ignore();
    cin.get();
                goto rep;
            }
        }
        else if(birth22%2==0)
        {
            if(birth11>30)
            {
                cout<<"Date Not found ";
                cin.ignore();
    cin.get();
                goto rep;
            }
        }
    }
    cout<<"Your Birth Date (YYYY) : -";
    cin>>birth33;
    if(birth33>2024 && birth33<1900)
    {
        cout<<"Date Not Found ";
        cin.ignore();
    cin.get();
        goto rep;
    }
    birth12=2024-birth33;
    cout<<"YOUR AGE IS "<<birth12;
    if(birth12>=18)
    {
        cout<<"\nYOUR AC IS MEJOR ";
    }
    else
    {
        cout<<"\nYOUR AC IS MINOR";
    }
    acno=(birth11*1000000)+(birth22*10000)+(birth33);
    cout<<"\n Your Ac Number is "<<acno;
    cout << "\nEnter Type of The account (C/S) : ";
    cin >> type;
    type = toupper(type);
    cout << "\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
    cin >> deposit;
    if(type=='C')
    {
        if(deposit<500)
        {
            cout<<"Amount is Less Try Again !! ";
            goto rep;
        }
    }
    else if(type=='S')
    {
        if(deposit<1000)
        {
            cout<<"Amount is Less Try again !! ";
            goto rep;
        }
    }
    else
    {
        cout<<"You Choose Wrong Type !! ";
        goto rep;
    }
    cout << "\n\n\nAccount Created..";
    cout<<"\n\n \t\t\t Thanks For Opening Your Ac In DGFB ";
}

void account::show_account() const
{
    cout << "\nAccount No. : " << acno;
    cout << "\nAccount Holder Name : ";
    cout << name;
    cout << "\nType of Account : " << type;
    cout << "\nBalance amount : " << deposit;
}

void account::modify()
{
    cout << "\nAccount No. : " << acno;
    cout << "\nModify Account Holder Name : ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\nModify Type of Account : ";
    cin >> type;
    type = toupper(type);
    cout << "\nModify Balance amount : ";
    cin >> deposit;
}

void account::dep(int x)
{
    deposit += x;
}

void account::draw(int x)
{
    deposit -= x;
}

void account::report() const
{
    cout << acno << setw(10) << " " << name << setw(10) << " " << type << setw(6) << deposit << endl;
}

int account::retacno() const
{
    return acno;
}

int account::retdeposit() const
{
    return deposit;
}

char account::rettype() const
{
    return type;
}

void write_account();
void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_all();
void deposit_withdraw(int, int);
void intro();
void logo1()
{system("COLOR 1F");
    system("cls");
    cout<<"\n\n\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------- ***********     ****************************** -----------------";
    cout<<"\n\t\t\t-------- *           *                                  -----------------";
    cout<<"\n\t\t\t-------- *           *                ***************** -----------------";
    cout<<"\n\t\t\t-------- *           *       **********                 -----------------";
    cout<<"\n\t\t\t-------- *           *                *                 -----------------";
    cout<<"\n\t\t\t--------            *   *           *                   -----------------";
    cout<<"\n\t\t\t-------- **********      ***********                    -----------------";
    cout<<"\n\t\t\t--------                                                -----------------";
    cout<<"\n\t\t\t-------- FEES             MANAGEMENT              SYSTEM ----------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\t\t\t-------------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\t\t\t\t DGFMS CREATED BY DHARMIK GOHIL FILM  ";
    Sleep(2000);
    system("cls");
    cout << "\n\n\n\n\n\n\n\t\t\t\t WELCOME TO DGFMS BANK MANAGMENT SYSTEM ";
    cout<<"\n\n\t\t\t\t PLEASE WAIT . ";
    for (int i = 0; i <= 5; i++)
    {
        cout << " . ";
        Sleep(300);
    }
    system("COLOR 07");

}

int main1()
{
    rep11111:
    int i;
    logo1();
    system("cls");
    int pass=123, pass1;
    if(i=1)
    {

        cout<<"\n\n\t\tEnter Password To Open Staff Page ";
        cout<<"\n\n\t\tEnter password :- ";
        cin>>pass1;

        if(pass1==pass)
        {
            cout<<"\n\t\t WELCOME TO DGFMS STAFF PAGE "<<endl<<endl;
            char ch;
            int num;
            do
            {
                system("cls");
                cout << "\n\n\n\tMAIN MENU";
                cout << "\n\n\t01. BALANCE ENQUIRY";
                cout << "\n\n\t02. ALL ACCOUNT HOLDER LIST";
                cout << "\n\n\t03. CLOSE AN ACCOUNT";
                cout << "\n\n\t04. MODIFY AN ACCOUNT";
		cout << "\n\n\t05. EXIT";
		cout << "\n\n\t06. ENTER LOBY";
		cout << "\n\n\tSelect Your Option (1-5) ";
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case '1':
			cout << "\n\n\tEnter The account No. : ";
			cin >> num;
			display_sp(num);
			break;
		case '2':
			display_all();
		break;
		case '3':
			cout << "\n\n\tEnter The account No. : ";
			cin >> num;
			delete_account(num);
			break;
		case '4':
			cout << "\n\n\tEnter The account No. : ";
			cin >> num;
			modify_account(num);
			break;
		case '5':
			cout << "\n\n\tThanks for using bank managemnt system";
			cin.ignore();
		cin.get();
			 exit(0);
			break;
         case '6':
            cout<<" Goto Loby ";
            goto rep11111;
		default:
			cout << "\a";
		}
		cin.ignore();
		cin.get();
	}
    while (ch != '5');
    }
        }

else if(i!=2)
{
    cout<<"Your PassWord is Wrrong !! ";
    cin.get();
    cout<<"Sorry";
    goto rep11111;
}

    else
    {
        cout<<"\n\n\t\t You Choose Wrong ";
         cin.ignore();
        cin.get();
        goto rep11111;
    }
    return 0 ;
}
void delete_account(int n)
{
	account ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.txt", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.txt", ios::binary);
	inFile.seekg(0, ios::beg);
	while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
	{
		if (ac.retacno() != n)
		{
			outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
		}
	}
	inFile.close();
	outFile.close();
	remove("account.txt");
	rename("Temp.txt", "account.txt");
	cout << "\n\n\tRecord Deleted ..";
}
void write_account()
{
    account ac;
    ofstream outFile;
    outFile.open("account.txt", ios::binary | ios::app);

    if (!outFile)
    {
        cout << "Error: Could not open file for writing." << endl;
        return;
    }

    ac.create_account();
    outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
    outFile.close();
}

void deposit_withdraw(int n, int option)
{
	int amt;
	bool found = false;
	account ac;
	fstream File;
	File.open("account.txt", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char *>(&ac), sizeof(account));
		if (ac.retacno() == n)
		{
			ac.show_account();
			if (option == 1)
			{
				cout << "\n\n\tTO DEPOSITE AMOUNT ";
				cout << "\n\nEnter The amount to be deposited";
				cin >> amt;
				ac.dep(amt);
			}
			if (option == 2)
			{
				cout << "\n\n\tTO WITHDRAW AMOUNT ";
				cout << "\n\nEnter The amount to be withdraw";
				cin >> amt;
				int bal = ac.retdeposit() - amt;
				if ((bal < 500 && ac.rettype() == 'S') || (bal < 1000 && ac.rettype() == 'C'))
					cout << "Insufficience balance";
				else
					ac.draw(amt);
			}
			int pos = (-1) * static_cast<int>(sizeof(ac));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char *>(&ac), sizeof(account));
			cout << "\n\n\t Record Updated";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout<<"\n\n Record Not Found ";
}
void display_sp(int n)
{
	account ac;
	bool flag = false;
	ifstream inFile;
	inFile.open("account.txt", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	cout << "\nBALANCE DETAILS\n";

	while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
	{
		if (ac.retacno() == n)
		{
			ac.show_account();
			flag = true;
		}
	}
	inFile.close();
	if (flag==false)
    {
		cout << "\n\nAccount number does not exist";
    }
}
void display_all()
{
	account ac;
	ifstream inFile;
	inFile.open("account.txt", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout << "====================================================\n";
	cout << "A/c no.      NAME           Type      Balance\n";
	cout << "====================================================\n";
	while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
	{
		ac.report();
	}
	inFile.close();
}
void modify_account(int n)
{
	bool found = false;
	account ac;
	fstream File;
	File.open("account.txt", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char *>(&ac), sizeof(account));
		if (ac.retacno() == n)
		{
			ac.show_account();
			cout << "\n\nEnter The New Details of account" << endl;
			ac.modify();
			int pos = (-1) * static_cast<int>(sizeof(account));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char *>(&ac), sizeof(account));
			cout << "\n\n\t Record Updated";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Record Not Found ";
}
