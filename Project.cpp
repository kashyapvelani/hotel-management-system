#include<iostream>
#include <conio.h>
#include<string>
using namespace std;

void bookRooms()
{
    int opt;
    do
    {
        system("cls");
        int i, dRoom=3000, pRoom=7000, sRoom=15000,price,gst,totalGST ;
        long long cPhone;
        string cName, cAdd;
        cout << "\n\nROOM BOOKING" << endl;

        cout<<"\nEnter Customer Name (First Name): ";
        cin>>cName;

        cout<<"\nEnter Address (only city): ";
        cin>>cAdd;

        cout<<"\nEnter Phone: ";
        cin>>cPhone;

        cout<<"Select Room Type: "<<endl;
        cout<<"\n1. Deluxe Villa"<<endl;
        cout<<"\n2. PoolView Villa"<<endl;
        cout<<"\n3. SeaView Villa"<<endl;
        cout << "Please select the Room you wish to book: ";
        cin>>i;
        switch (i)
        {
        case 1:
            cout<<"You have selected Deluxe Villa"<<endl;
            price=dRoom;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Your Bill is: "<< totalGST<<"Rs "<<endl;
            cout<<"\nYour Room is Booked Successfully for 1 Day!"<<endl;
            cout<<"\n####### Details #######"<<endl;
            cout<<"\nName: "<<cName<<endl;
            cout<<"Address: "<<cAdd<<endl;
            cout<<"Phone No: "<<cPhone<<endl;
            break;
        case 2:
            cout<<"You have selected PoolView Villa"<<endl;
            price=pRoom;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Your Bill is: "<< totalGST<<"Rs "<<endl;
            cout<<"\nYour Room is Booked Successfully for 1 Day!"<<endl;
            cout<<"\n####### Details #######"<<endl;
            cout<<"\nName: "<<cName<<endl;
            cout<<"Address: "<<cAdd<<endl;
            cout<<"Phone No: "<<cPhone<<endl;
            break;
        case 3:
            cout<<"You have selected SeaView Villa"<<endl;
            price=sRoom;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Your Bill is: "<< totalGST<<"Rs "<<endl;
            cout<<"\nYour Room is Booked Successfully for 1 Day!"<<endl;
            cout<<"\n####### Details #######"<<endl;
            cout<<"\nName: "<<cName<<endl;
            cout<<"Address: "<<cAdd<<endl;
            cout<<"Phone No: "<<cPhone<<endl;
            break;
        
        default:
            cout<<"\nPlease Enter correct option";
            break;
        }
        
        
        system("pause");    

    } while (opt!=4);
    
}

void orderFood()
{
    int opt;
    do
        {
        system("cls");
        int i,j ;
        float price1=240, price2=200, price3=160, price4=220, price5=250, price6=15, price, gst, totalGST;
        cout << "\n\nHOTEL RESTRO" << endl;
	    cout << "\nMenu:" << endl;
	    cout << "1. Cheese Paneer Butter Masala \n2. Paneer Angare \n3. Kaju Curry\n4. Mix Veg\n5. Veg Maratha\n6. Vada Pav\n7. return\n";
	    cout << "Please select the food items you wish to buy: ";
	    cin >> i;

	    switch (i)
	    {
		case 1:
			cout << "You have selected Cheese Paneer Butter Masala" << endl;
            price=price1;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Bill is: "<<totalGST<<"Rs with GST"<<endl;
			break;
		case 2:
			cout << "You have selected Paneer Angare" << endl;            
            price=price2;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Bill is: "<<totalGST<<"Rs with GST"<<endl;
			break;
		case 3:
			cout << "You have selected Kaju Curry" << endl;
			price=price3;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Bill is: "<<totalGST<<"Rs with GST"<<endl;
            break;
		case 4:
			cout << "You have selected Mix Veg" << endl;
			price=price4;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Bill is: "<<totalGST<<"Rs with GST"<<endl;
            break;
		case 5:
			cout << "You have selected Veg Maratha" << endl;
			price=price5;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Bill is: "<<totalGST<<"Rs with GST"<<endl;
            break;
		case 6:
			cout << "You have selected Vada Pav" << endl;
			price=price6;
            gst=price*18/100;
            totalGST=price+gst;
            cout<<"Bill is: "<<totalGST<<"Rs with GST"<<endl;
            break;
        case 7:
            //nothing to do
        break;
        default:
			cout << "Invalid Item!!!" << endl;
			break;
	    }
        system("pause");
        }while(opt!=7);
}


int main()
{
int i,j,opt,rno;
char ch;
char pname[100];

system("cls");

do
{
system("cls");
cout<<"\n######## Hotel Management #########\n";
cout<<"\n1. Book Rooms";
cout<<"\n2. Order Food";
cout<<"\n3. Exit";
cout<<"\n\nEnter Option: ";
cin>>opt;
switch(opt)
{
case 1:
bookRooms();
break;
case 2:
orderFood();
break;
case 3:
cout<<"\nTHANK YOU! FOR USING MY SOFTWARE";
break;
default:
cout<<"\nPlease Enter correct option";
break;
}
}while(opt!=3);
system("pause");
return 0;
}