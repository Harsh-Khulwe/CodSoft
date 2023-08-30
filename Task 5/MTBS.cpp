#include <iostream>
#include <cstring>
using namespace std;

int movie, day, mon, year, slot, th, age, n;
int cost = 0;
string name, pno, city, mname;

int main();

void getout()
{
    int sus;

    cout<<"\n\n\t\t(press '1' to go to main menu OR '0' to exit): ";
    cin>>sus;

    if(sus == 1)
        main();
    else
        exit(0);
}

class tickets
{
    public: 
        int ch;
        // int movie, age, slot, day, mon, year, n;
        // int cost = 0;
        char p;
        // string city, mname;

        bool findtick()
        {
            string vname, vpno;

            cout<<"\n\t\tEnter your name: ";
            cin>>vname;

            cout<<"\t\tEnter your phone no: ";
            cin>>vpno;

            if(vname == name && vpno == pno)
                return 1;
            else
                return 0;
        }

        void inputdetails()
        {
            cout<<"\n\n\t\tEnter your name: ";
            cin>>::name;

            cout<<"\n\t\tEnter your age: ";
            cin>>age;

            cout<<"\n\t\tEnter your phone no: ";
            cin>>::pno;

            system("cls");
        }

        void payment()
        {
            cout<<"\n\n\t\t\t\tPayment for booking your tickets :-";

            cout<<"\n\n\n\t\tMovie: "<<mname;
            cout<<"\n\n\t\tDate of the show: "<<day<<"/"<<mon<<"/"<<year;
            
            if(slot == 1)
                cout<<"\n\t\tSlot of the show: Morning (9:00 Am)";
            else if(slot == 2)
                cout<<"\n\t\tSlot of the show: Afternoon (3:00 Pm)";
            else
                cout<<"\n\t\tSlot of the show: Evening (9:00 Pm)";

            cout<<"\n\t\tTotal no. of tickets: "<<n;
            cout<<"\n\t\tTotal cost of tickets: Rs "<<cost<<" /-";

            pay:

            cout<<"\n\n\t\tEnter 'p' to pay: ";
            cin>>p;

            if(p == 'p')
            {   
                cout<<"\n\t\t\tPayment SUCCESSFUL, your bookings for this show are done...\n\n";                
                getout();
            }
            else
            {
                cout<<"\n\t\t\tPlease enter a valid key!!";
                goto pay;
            }
        }

        void seatmat()
        {   
            cout<<"\n\n\t\tEnter the day of show: ";
            cin>>day;
            cout<<"\t\tEnter the month of show: ";
            cin>>mon;
            cout<<"\t\tEnter the year of show: ";
            cin>>year;

            cout<<"\n\n\t\t\tChoose slot for your movie :-";
            cout<<"\n\t\t1. Morning    (9:00 Am)";
            cout<<"\n\t\t2. Afternoon  (3:00 Pm)";
            cout<<"\n\t\t3. Evening    (7:00 Pm)";

            cout<<"\n\n\t\tEnter your slot no: ";
            cin>>slot;

            cout<<"\n\t\t\t\tThe seat matrix for the choosen movie in the theatre :-\n";

            cout<<"\n\t\t\t\tL1    L2    L3    L4    L5    L6    L7    L8    L9    L10";
            cout<<"\n\t\t\t\tK1    K2    K3    K4    K5    K6    K7    K8    K9    K10";
            cout<<"\n\t\t\t\tJ1    J2    J3    J4    J5    J6    J7    J8    J9    J10";
            cout<<"\n\t\t\t\tI1    I2    I3    I4    I5    I6    I7    I8    I9    I10";
            cout<<"\n\t\t\t\tH1    H2    H3    H4    H5    H6    H7    H8    H9    H10";
            cout<<"\n\t\t\t\tG1    G2    G3    G4    G5    G6    G7    G8    G9    G10";
            cout<<"\n\t\t\t\tF1    F2    F3    F4    F5    F6    F7    F8    F9    F10";
            cout<<"\n\t\t\t\tE1    E2    E3    E4    E5    E6    E7    E8    E9    E10";
            cout<<"\n\t\t\t\tD1    D2    D3    D4    D5    D6    D7    D8    D9    D10";
            cout<<"\n\t\t\t\tC1    C2    C3    C4    C5    C6    C7    C8    C9    C10";
            cout<<"\n\t\t\t\tB1    B2    B3    B4    B5    B6    B7    B8    B9    B10";
            cout<<"\n\t\t\t\tA1    A2    A3    A4    A5    A6    A7    A8    A9    A10\n";
            cout<<"\n\t\t\t\t_________________________________________________________";
            cout<<"\n\t\t\t\t                         SCREEN                          ";

            cout<<"\n\n\n\t\t\tTicket pricing :-";
            cout<<"\n\n\t\t* In upper 4 rows  --> Rs 500/-";
            cout<<"\n\t\t* In middle 4 rows --> Rs 650/-";
            cout<<"\n\t\t* In lower 4 rows  --> Rs 360/-";

            cout<<"\n\n\t\t\tHow many seats you want to book: ";
            cin>>n;
            
            string seat;

            myseat:

            for(int i = 0; i < n; i++)
            {
                cout<<"Enter seat no "<<i+1<<" : ";
                cin>>seat;

                if(seat[0] == 'A' || seat[0] == 'B' || seat[0] == 'C' || seat[0] == 'D')
                    cost += 360;

                else if(seat[0] == 'E' || seat[0] == 'F' || seat[0] == 'G' || seat[0] == 'H')
                    cost += 650;

                else if(seat[0] == 'I' || seat[0] == 'J' || seat[0] == 'K' || seat[0] == 'L')
                    cost += 500;

                else
                {
                    cout<<"\n\n\t\t\tPlease provide a valid SEAT!!";
                    goto myseat;
                }
            }
        }

        void movies()
        {   
            cout<<"\n\t\tFollowing movies are listed in this theatre :-\n";
            cout<<"\n\t01. Oppenheimer                           [Christopher Nolan]\n";
            cout<<"\n\t02. Avengers: Endgame                     [Anthony Russo, Joe Russo]\n";
            cout<<"\n\t03. RRR                                   [S. S. Rajamouli]\n";
            cout<<"\n\t04. Barbie                                [Greta Gerwig]\n";
            cout<<"\n\t05. Avatar: The Way of Water              [James Cameron]\n";
            cout<<"\n\t06. Kimetsu No Yaiba: The Mugen Train     [Haruo Sotozaki]\n";
            cout<<"\n\t07. Gadar 2                               [Anil Sharma]\n";
            cout<<"\n\t08. Heart of Stone                        [Tom Harper]\n";
            cout<<"\n\t09. Fantastic Beasts: Part 3              [Tom Harper]\n";
            cout<<"\n\t10. Jujutsu Kaisen 0                      [Sunghoo Park]\n";

            mov:

            cout<<"\n\n\t\tChoose your movie (Enter serial no): ";
            cin>>movie;

            switch(movie)
            {
                case 1:
                    mname = "Oppenheimer";
                    break;
                case 2:
                    mname = "Avengers: Endgame";
                    break;
                case 3:
                    mname = "RRR";
                    break;
                case 4:
                    mname = "Barbie";
                    break;
                case 5:
                    mname = "Avatar: The Way of Water";
                    break;
                case 6:
                    mname = "Kimetsu No Yaiba: The Mugen Train";
                    break;
                case 7:
                    mname = "Gadar 2";
                    break;
                case 8:
                    mname = "Heart of Stone";
                    break;
                case 9:
                    mname = "Fantastic Beasts: Part 3";
                    break;
                case 10:
                    mname = "Jujutsu Kaisen 0";
                    break;
                default:
                    cout<<"\n\n\t\t\tEnter a valid choice!!";
                    goto mov;
                    break;
            }

            system("cls");
        }

};


int main()
{
    system("cls");

    tickets t;

    cout<<"\n\t\t\t\t\t\t----> WELCOME TO BookItNow <----";
    cout<<"\n\n\t\tHow can we help you?\n\n";
    cout<<"\n\t\t\t1. Book movie tickets\n";
    cout<<"\n\t\t\t2. Cancel movie tickets\n";
    cout<<"\n\t\t\t3. Show my tickets\n";
    cout<<"\n\t\t\t4. Payment receipt\n";
    cout<<"\n\t\t\t5. Customer help and Support";

    cout<<"\n\n\t\tPlease enter your choice: ";
    cin>>t.ch;
 
    string query, phn;

    switch(t.ch)
    {
        case 1:
            system("cls");

            cout<<"\n\n\t\t\t\tHere you can book your tickets!";

            cout<<"\n\n\t\tEnter the name of your city: ";
            cin>>city;

            cout<<"\n\n\t\tChoose from the following theatres in your city:-\n";
            cout<<"\n\t1. Bhumika Theatres";
            cout<<"\n\t2. Abhishek MovieHouse";
            cout<<"\n\t3. Akansha Cinemas";
            cout<<"\n\t4. Manjeet Theatres";

            theatre:

            cout<<"\n\n\t\tPlease enter your choice: ";
            cin>>th;

            if(th == 1)
                cout<<"\n\t\t\tBHUMIKA THEATRES\n";
            else if(th == 2)
                cout<<"\n\t\t\tABHISHEK MOVIEHOUSE\n";
            else if(th == 3)
                cout<<"\n\t\t\tAKANSHA CINEMAS\n";
            else if(th == 4)
                cout<<"\n\t\t\tMANJEET THEATRES\n";
            else
            {
                cout<<"\n\t\t\tENTER A VALID CHOICE!!";
                goto theatre;
            }

            t.movies();
            t.seatmat();
            t.inputdetails();
            t.payment();

            break;

        case 2:
            system("cls");

            if(t.findtick() == 1)
            {
                cout<<"\n\n\t\t\tYou have the following bookings :-";
                cout<<"\n\n\n\t\tDate: "<<day<<"/"<<mon<<"/"<<year;
                cout<<"\n\n\t\tMovie: "<<mname;
                cout<<"\n\n\t\tSlot: "<<slot;
                cout<<"\n\n\t\tCity: "<<city;
                cout<<"\n\n\t\tTheatre: ";
                if(th == 1)
                    cout<<"BHUMIKA THEATRES";
                else if(th == 2)
                    cout<<"ABHISHEK MOVIEHOUSE";
                else if(th == 3)
                    cout<<"AKANSHA CINEMAS";
                else if(th == 4)
                    cout<<"MANJEET THEATRES";

                cout<<"\n\n\t\tNo of tickets: "<<n;
                
                can:
                char book;

                cout<<"\n\n\n\t\t\tDo you want to cancel your bookings (y/n): ";
                cin>>book;

                if(book == 'y')
                {
                    name = "NA";
                    pno = -10;

                    cout<<"\n\n\t\tYour bookings are successfully cancelled...";
                }
                else if(book == 'n')
                    cout<<"\n\n\t\tBookings are not cancelled...";
                else
                    goto can;
            }
            else
                cout<<"\n\n\t\tNo booking for this name or phone no is registered...";

            getout();
            break;

        case 3:
            system("cls");

            if(t.findtick() == true)
            {
                cout<<"\n\t\t\t\tTICKETS OVERVIEW";
                cout<<"\n\n\n\t\tTicket holder's name: "<<name;
                cout<<"\n\n\t\tTicket holder's age: "<<age;
                cout<<"\n\n\t\tPhone no: "<<pno;
                cout<<"\n\n\t\tName of the show: "<<mname;
                cout<<"\n\n\t\tDate of the show: "<<day<<"/"<<mon<<"/"<<year;
                cout<<"\n\n\t\tCity: "<<city;
                cout<<"\n\n\t\tTheatre: ";
                if(th == 1)
                    cout<<"BHUMIKA THEATRES";
                else if(th == 2)
                    cout<<"ABHISHEK MOVIEHOUSE";
                else if(th == 3)
                    cout<<"AKANSHA CINEMAS";
                else if(th == 4)
                    cout<<"MANJEET THEATRES";

                cout<<"\n\t\tSlot: "<<slot;
                cout<<"\n\t\tNo of tickets: "<<n;
            }
            else
                cout<<"\n\n\t\tNo booking for this name or phone no is registered...";
            
            getout();
            break;

        case 4:
            system("cls");

            if(t.findtick() == 1)
            {
                cout<<"\n\n\t\tName: "<<name;
                cout<<"\n\n\t\tPhone no: "<<pno;
                cout<<"\n\n\t\tDate of show: "<<day<<"/"<<mon<<"/"<<year;
                cout<<"\n\n\n\t\t\tNo of tickets: "<<n;
                cout<<"\n\n\t\t\tTotal payable amount: "<<"       Rs "<<cost<<".0 /-";
                cout<<"\n\t\t\t-----------------------------------------------";
                cout<<"\n\t\t\tTotal amount paid: "<<"          Rs "<<cost<<".0 /-";
                cout<<"\n\t\t\t-----------------------------------------------";

            }
            else
                cout<<"\n\n\t\tNo booking for this name or phone no is registered...";
            
            getout();
            break;
            
        case 5:
            system("cls");

            cout<<"\n\n\t\tEnter your phone no: ";
            cin>>phn;

            if(phn == pno)
            {
                cout<<"\n\n\t\t\tHello "<<name<<", what help can we provide you?";
                cout<<"\n\t\t\tPlease write your query (use '_' in place of spaces): ";
                cin>>query;
                cout<<"\n\n\n\t\tThanks for asking for help, we will contact you shortly!!";
                cout<<"\n\n\t\t\tYou can also reach us at www.BookItNow@gmail.com";
                cout<<"\n\n\n\t\t- Team BookItNow";
            }
            else
                cout<<"\n\n\t\t\tSorry, you are not a registered user... Make sure you register first!";
            
            getout();
            break;

        default:
            cout<<"\n\n\t\t\tPlease enter a valid choice!!";
            getout();
            break;
    }

    return 0;
}
