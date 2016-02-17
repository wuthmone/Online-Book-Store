#include "ItemInfo.hpp"
#include "Book.hpp"
#include "AudioCD.hpp"
#include "VideoGame.hpp"
#include "Customer.hpp"
#include "Order.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    cout << "\t*******************************************************\n";
    cout << "\t\t           Welcome from e-leisure.com                \n" ;
    cout << "\t*******************************************************\n";

    cout << endl << endl;
    cout <<"\tPlease choose your preferred interface.\n";
    cout <<"\tPlease choose 1 for Admin Interface.\n";
    cout <<"\tAnd choose other number for Customer Interface.\n";
    cout <<"\tThank you.\n"<< endl;



    int interface;
    cin >> interface;
    system("CLS");
// Admin Interface
if (interface==1)
{
         vector<Book> bookvec;
    vector<AudioCD> audvec;
    vector<VideoGame> vGameVec;

    VideoGame vGame;
    Book books;
    AudioCD aud;
    cout << endl;
    cout << "\n\t************************************************\n" << endl;
    cout << "\t           Welcome to Admin Interface!             " << endl;
    cout << "\n\t************************************************\n" << endl;
    cout << "In this Interface, you can create, remove, or modify items.\n";
    cout << "\t                 1.Book                                   \n";
    cout << "\t                 2.AudioCd                                \n";
    cout << "\t                 3.VideoGame                              \n\n";


    int itemToCreate;
    int select;
    int extraItem;
    do
    {

        cout << "Please select 1 to create Book. " << endl;
        cout << "Please select 2 to create AudioCD." << endl;
        cout << "Please select 3 create VideoGame.\nThank you." << endl;
        cin >> itemToCreate;

system ("CLS");

    // Creating Book
       if (itemToCreate==1)
                {
                    cout << endl;
                    cout << "Books to be created!" << endl;
                    cout << "\nPlease enter number of book to be created : " ;
                    int bookCre;
                    cin >> bookCre;
                    cout << endl;
                    int bookId, bookQuan,  bookISBN;
                    double bookPrice;
                    string bookName, bookAuth, bookPub;

            //for creating books
                   for (int i = 0; i < bookCre; i++)
                    {
                        cout << "Book ID : ";
                        cin >> bookId;
                        cin.ignore(256,'\n');
                        cout << "Book Title : ";
                        getline(cin,bookName);
                        cout << "Book Phubliher : ";
                        getline(cin,bookPub);
                        cout << "Book Authour : " ;
                        getline(cin,bookAuth);
                        cout << "Book Price : " ;
                        cin>> bookPrice;
                        cout << "Book Quantity : ";
                        cin >> bookQuan;
                        cout << "Book ISBN : ";
                        cin >> bookISBN;

                        books.setInfo(bookId,bookName,bookPrice,bookQuan,bookAuth,bookPub,bookISBN);
                        bookvec.push_back(books);
                        cout << endl;
                    }
        // for sorting books
                for (int i = 0; i < bookvec.size(); i++)
                    books.sortBook(bookvec);
                    cout << endl;
                }
    // Creating AudioCD
        else if (itemToCreate==2)
        {
                cout << endl;
                cout << "AudioCD to be created!" << endl;
                int audioCDId, audioCDQuan;
                double audioCDPrice;
                string audioCDName, audioCDArtist, audioCDComp;

                    cout << "\nPlease enter number of AudioCD to be created : " ;
                    int AudioCre;
                    cin >> AudioCre;
                    cout << endl;
            // Creating AudioCD
                   for (int i = 0; i <AudioCre ; i++)
                    {
                        cout << "AudioCD ID : ";
                        cin >> audioCDId;
                        cin.ignore(256,'\n');

                        cout << "AudioCD Title : ";
                        getline(cin,audioCDName);

                        cout << "Record Company : ";
                        getline(cin,audioCDComp);

                        cout << "AudioCD Artist : " ;
                        getline(cin,audioCDArtist);
                        cout << "AudioCD Price : " ;
                        cin>> audioCDPrice;

                        cout << "AudioCD Quantity : ";
                        cin >> audioCDQuan;

                        aud.setInfo(audioCDId,audioCDName,audioCDPrice,audioCDQuan,audioCDArtist,audioCDComp);
                        audvec.push_back(aud);
                        cout << endl;
                    }

            // For Sorting AudioCD
                    for (int i = 0; i < audvec.size(); i++)
                        aud.sortAudioCD(audvec);
                    cout << endl;
        }
    //Creating VideoGame
        else if ( itemToCreate==3)
        {
                cout << endl;
                cout << "VideoGame to be created!" << endl;
                int videoGameId, videoGameQuan;
                double videoGamePrice;
                string videoGameName, videoGameComp, videoGamePlat;

                    cout << "\nPlease enter number of Video Game to be created : " ;
                    int videoGameCre;
                    cin >> videoGameCre;
                    cout << endl;
        // Creating AudioCD
                   for (int i = 0; i <videoGameCre ; i++)
                    {
                        cout << "VideoGame ID : ";
                        cin >> videoGameId;
                        cin.ignore(256,'\n');

                        cout << "VideoGame Title : ";
                        getline(cin,videoGameName);

                        cout << "VideoGame Company : ";
                        getline(cin,videoGameComp);

                        cout << "VideoGame Platform : " ;
                        getline(cin,videoGamePlat);
                        cout << "VideoGame Price : " ;
                        cin>> videoGamePrice;

                        cout << "VideoGame Quantity : ";
                        cin >> videoGameQuan;

                        vGame.setInfo(videoGameId,videoGameName,videoGamePrice,videoGameQuan,videoGameComp, videoGamePlat);
                        vGameVec.push_back(vGame);
                        cout << endl;
                    }

        // For Sorting AudioCD
                    for (int i = 0; i < vGameVec.size(); i++)
                        vGame.sortVideoGame(vGameVec);
                    cout << endl;

            }

        else
        {
            cout << "Wrong Selection! " << endl << endl;
        }

        cout << "If you select wrongly or want to add new item, press 1.\nOtherwise, press 0. " << endl;
        cin >> extraItem;

        system ("CLS");

    } while( extraItem == 1);


 // for mdifying
    cout << "Do you want to make any changes?\nPress 1 to modify Book Items.\nPress 2 to modify AudioCd Items.\nPress 3 to modify VideoGame Item.\nOtherwise, press other number.\n" ;
    int change;
    cin >> change;

system ("CLS");
        if (change == 1)
            {
                // To modify the inputs
                        cout << endl;
                        cout << "To remove book , Select 1."   << endl
                             << "To change Price, Select 2."     << endl
                             << "To change Quantity , Select 3." << endl
                             << "Nothing to change, Select 4." << endl;

                    cout << endl;
                    cout << "Selected No : ";
                    cin >> select;

                    switch(select)
                        {
                            case 1:
                                cout << endl;
                                cout << "Please enter the Book No. to erase : ";
                                int i ;
                                cin >> i;
                                books.removedBook(bookvec,i);
                                cout << "The Book No." << i << " have been erased." << endl;

                                break;

                                case 2:
                                    cout << endl;
                                    cout << "Select Book No. to change Price : " ;
                                    int x ;
                                    cin>> x ;
                                    int changePrice;
                                    cout << "New Price : " ;
                                    cin >> changePrice;
                                    bookvec[x-1].setPrice(changePrice);
                                    cout << "Your New Price for the VideoGame No." << x-1 << " have been changed to " << changePrice <<".\nThank you!";
                                    break;

                                    case 3:
                                        cout << "Select the Book No. to change Quantity: " ;
                                        int z ;
                                        cin>> z ;
                                        int changeQuan;
                                        cout << endl;
                                        cout << "New Quantity  : " ;
                                        cin >> changeQuan;
                                        bookvec[z-1].setQuan(changeQuan);
                                         cout << "Your New Quantity for the Book No." << z-1 << " have been changed to " << changeQuan <<".\nThank you!";
                                    break;
                                    default :
                                        cout << "Books are being added. Thank you!" << endl ;

                                }
            }
        else if (change == 2)
        {
             // To modify the inputs
                            cout << endl;
                            cout << "To remove Audio , Select 1."   << endl
                             << "To change Price, Select 2."     << endl
                             << "To change Quantity , Select 3." << endl
                             << "Nothing to change, Select 4." << endl;


                    cout << endl;
                    cout << "Selected No : ";
                    cin >> select;

                        switch(select)
                            {

                                case 1 :
                                    cout << "Please enter the AudioCD no. to erase : " ;
                                    int y ;
                                    cin >> y;
                                    aud.removedAudioCD(audvec,y);
                                    cout << endl;
                                    cout <<"The AudioCD No." << y << " have been erased."<< endl;
                                    break;

                                case 2 :
                                    cout << "Select the number of AudioCD to change Price : " ;
                                    int i ;
                                    cin>> i ;
                                    int changePrice;
                                    cout << "New Price : " ;
                                    cin >> changePrice;
                                    audvec[i-1].setPrice(changePrice);
                                    cout << "Your New Price for the AudioCD No." << i-1 << " have been changed to " << changePrice <<".\nThank you!";
                                break;

                                case 3 :
                                    cout << "Select the AudioCD number to change Quantity: " ;
                                    int z ;
                                    cin>> z ;
                                    int changeQuan;
                                    cout << endl;
                                    cout << "New Quantity  : " ;
                                    cin >> changeQuan;
                                    audvec[z-1].setQuan(changeQuan);
                                    cout << "Your New Quantity for the AudioCD No." << z-1 << " have been changed to " << changeQuan <<".\nThank you!";
                                    cout << endl;

                                break;

                                default :
                                    cout << "AudioCD are being added. Thank you!" << endl ;

                            }
        }

        else if (change == 3)
        {
             // To modify the inputs
                            cout << endl;
                            cout << "To remove VideoGame  , Select 1."   << endl
                             << "To change Price, Select 2."     << endl
                             << "To change Quantity , Select 3." << endl
                             << "Nothing to change, Select 4." << endl;


                    cout << endl;
                    cout << "Selected No : ";
                    cin >> select;
                        switch(select)
                            {

                                case 1 :
                                     cout << "Please enter the no. to erase : " ;
                                    int y ;
                                    cin >> y;
                                    vGame.removedVideoGame(vGameVec,y);
                                    cout << "The VideoGame No." << y << " have been erased." << endl;
                                    break;

                                case 2 :
                                    cout << "Select the VideoGame No. to change Price : " ;
                                    int i ;
                                    cin>> i ;
                                    int changePrice;
                                    cout << "New Price : " ;
                                    cin >> changePrice;
                                    vGameVec[i-1].setPrice(changePrice);
                                    cout << "Your New Price for the VideoGame No." << i-1 << " have been changed to " << changePrice <<".\nThank you!";

                                break;

                                case 3 :
                                    cout << "Select the VideoGame  No. to change Quantity: " ;
                                    int z ;
                                    cin>> z ;
                                    int changeQuan;
                                    cout << endl;
                                    cout << "New Quantity  : " ;
                                    cin >> changeQuan;
                                    vGameVec[z-1].setQuan(changeQuan);
                                    cout << "Your New Quantity for the VideoGame No." << z-1 << " have been changed to " << changeQuan <<".\nThank you!";
                                    cout << endl;
                                break;

                                default :
                                    cout << "VideoGame  are being added. Thank you!" << endl ;

                            }
        }

        else
            cout << "Wrong user input." << endl<< endl;

    system ("CLS");
// Displaying the items list
    if ( itemToCreate== 1 || itemToCreate==2 || itemToCreate == 3)
    {
                    cout << "Your Book Record : " << endl;
                    for (int i = 0; i < bookvec.size(); i++)
                    {
                        cout << "Book No." << i +1 << ":\n" <<endl;
                        bookvec[i].getInfo();
                        cout << endl;
                    }
                    cout << "Your AudioCD Record : " << endl;
                    for (int i = 0; i < audvec.size(); i++)
                    {
                        cout << "AudioCD No." << i +1 << ":\n" <<endl;
                        audvec[i].getInfo();
                        cout << endl;
                    }

                    cout << "Your VideoGame Record : " << endl;
                    for (int i = 0; i < vGameVec.size(); i++)
                    {
                        cout << "VideoGame  No." << i +1 << ":\n" <<endl;
                        vGameVec[i].getInfo();
                        cout << endl;
                    }
    }


    }

// Custommer Interface
else
{
     Customer cus;
    int idChosen;
    int chooseItem;
    int orderQuan;
    vector<Order> ordBookVec;
    Order a0(100, "Harry Potter and the Goblet", 20.00, 10);
    Order a1(101, "The Hobbit", 30.00, 5);
    Order a2(102, "The Official Highway Code", 40.00, 6);
    Order a3(103, "Fifty Shades of Grey", 20.00, 10);
    Order a4(104, "Pride and Prejudice", 15.00, 20);
    ordBookVec.push_back(a0);
    ordBookVec.push_back(a1);
    ordBookVec.push_back(a2);
    ordBookVec.push_back(a3);
    ordBookVec.push_back(a4);

    vector<Order>  ordAudioVec;
    Order b0(200, "Like a Rolling Stone", 10.00, 10);
    Order b1(201, "Imagine", 12.00, 14);
    Order b2(202, "What's Going On", 13.00, 16);
    Order b3(203,"Smells Like Teen Spirit", 14.00, 18);
    Order b4(204,"What'd I Say", 15.00, 20);
    ordAudioVec.push_back(b0);
    ordAudioVec.push_back(b1);
    ordAudioVec.push_back(b2);
    ordAudioVec.push_back(b3);
    ordAudioVec.push_back(b4);

    vector<Order>  ordGameVec;
    Order c0(300, "Pac-Man", 15.00, 20);
    Order c1(301, "Pitfall!", 16.00, 30);
    Order c2(302,"Asteroids", 15.00,20);
    Order c3(303,"Space Invaders", 19.00, 25);
    Order c4(304, "E.T. the Extra-Terrestrial", 20.00,20);
    ordGameVec.push_back(c0);
    ordGameVec.push_back(c1);
    ordGameVec.push_back(c2);
    ordGameVec.push_back(c3);
    ordGameVec.push_back(c4);

    cout << "\n\t\t*******************************************" <<endl;
    cout << "\t\t\tWelcome to Customer Interface!" <<endl;
    cout << "\t\t*******************************************\n" <<endl;


    cout << "These are the three Catagory that you can make order.\n" << endl;
    cout << "1.Book\n2.AudioCD \n3.VideoGame \n" << endl;
    cout << endl;
    cout << "Please enter your detail to make an order.\n" ;

    string cusName,cusAddress,cusContactNo;
    cout << "Please enter your Name: "  ;
    getline(cin,cusName);
    cout << "Please enter your Address: "  ;
    getline(cin,cusAddress);
    cout << "Please enter your Contact Number: "  ;
    getline(cin,cusContactNo);
    cout << endl;
    cout << "Enter 1 for book.\nEnter 2 for AudioCD.\nEnter 3 for VideoGame.\nThanks!\n";
    cin>> chooseItem;
    system("CLS");
    if (chooseItem==1)
    {
        cout<< endl;
        cout<< "For BOOK Catogry:"<<endl;
        cout<<"Item ID|             Item Name              | Quantity |      Price |" << endl;
        cout<<"====================================================================" << endl;
        for (int i = 0; i < ordBookVec.size(); i++)
            {
                ordBookVec[i].getItemInfo();
            }
        cout << "Please choose the Item ID to make an order:" << endl;
        cin>>idChosen;
        cout << "Please Enter the quantity : " << endl;
        cin>>orderQuan;
        cout << endl;
        system("CLS");
        cout << "These are your order confirmation.\n" << endl;
        cus.displayCusInfo(cusName, cusAddress,  cusContactNo);
        cout << endl;
        cout<<"Item ID|             Item Name              | Quantity | Price | TotalPrice    |" << endl;
        cout<<"================================================================================" << endl;
        if (idChosen == 100 ){
                ordBookVec[0].getQuan(orderQuan);
                ordBookVec[0].getItemInfoOrder();}
        if (idChosen == 101 ){
            ordBookVec[1].getQuan(orderQuan);
            ordBookVec[1].getItemInfoOrder();}
        if (idChosen == 102 ){
            ordBookVec[2].getQuan(orderQuan);
            ordBookVec[2].getItemInfoOrder();}
        if (idChosen == 103 ){
            ordBookVec[3].getQuan(orderQuan);
            ordBookVec[3].getItemInfoOrder();}
        if (idChosen == 104 ){
            ordBookVec[4].getQuan(orderQuan);
            ordBookVec[4].getItemInfoOrder();}
        cout << endl;
        cout<< "Thank You!"<< endl;
    }

    else if (chooseItem==2)
    {
        cout<< endl ;
        cout<< "For AudioCD Catogry:"<<endl;
        cout<<"Item ID|             Item Name              | Quantity |       Price" << endl;
        cout<<"====================================================================" << endl;
        for (int i = 0; i < ordAudioVec.size(); i++)
            {
                ordAudioVec[i].getItemInfo();
            }
        cout<< endl ;
        cout << "Please choose the Item ID to make an order:\n" << endl ;
        cin>>idChosen;
        cout << "Please Enter the quantity : " << endl;
        cin>>orderQuan;
        cout << endl;
        system("CLS");
        cout << "These are your order confirmation.\n" << endl;
        cus.displayCusInfo(cusName, cusAddress,  cusContactNo);
        cout << endl;
        cout<<"Item ID|             Item Name              | Quantity | Price | TotalPrice    |" << endl;
        cout<<"================================================================================" << endl;
        if (idChosen == 200 ){
                ordAudioVec[0].getQuan(orderQuan);
                ordAudioVec[0].getItemInfoOrder();}
        if (idChosen == 201 ){
            ordAudioVec[1].getQuan(orderQuan);
            ordAudioVec[1].getItemInfoOrder();}
        if (idChosen == 202 ){
            ordAudioVec[2].getQuan(orderQuan);
            ordAudioVec[2].getItemInfoOrder();}
        if (idChosen == 203 ){
            ordAudioVec[3].getQuan(orderQuan);
            ordAudioVec[3].getItemInfoOrder();}
        if (idChosen == 204 ){
            ordAudioVec[4].getQuan(orderQuan);
            ordAudioVec[4].getItemInfoOrder();}
        cout<< endl;
        cout<< "Thank You!"<< endl;
    }
    else if (chooseItem==3)
     {
        cout<< endl;
        cout<<"For VideoGame Catogry:\n";
        cout<<"Item ID|             Item Name              | Quantity |       Price" << endl;
        cout<<"====================================================================" << endl;
        for (int i = 0; i < ordGameVec.size(); i++)
            {
                ordGameVec[i].getItemInfo();
            }
        cout<< endl ;
        cout << "Please choose the Item ID to make an order:" << endl ;
        cin>>idChosen;
        cout << "Please Enter the quantity : " << endl;
        cin>>orderQuan;
        cout << endl;
        system("CLS");
        cout << "These are your order confirmation.\n";
        cus.displayCusInfo(cusName, cusAddress,  cusContactNo);
        cout << endl;
        cout<<"Item ID|             Item Name              | Quantity | Price | TotalPrice    |" << endl;
        cout<<"================================================================================" << endl;
        if (idChosen == 300 ){
                ordGameVec[0].getQuan(orderQuan);
                ordGameVec[0].getItemInfoOrder();}
        if (idChosen == 301 ){
            ordGameVec[0].getQuan(orderQuan);
            ordGameVec[1].getItemInfoOrder();}
        if (idChosen == 302 ){
            ordGameVec[0].getQuan(orderQuan);
            ordGameVec[2].getItemInfoOrder();}
        if (idChosen == 303 ){
            ordGameVec[0].getQuan(orderQuan);
            ordGameVec[3].getItemInfoOrder();}
        if (idChosen == 304 ){
            ordGameVec[0].getQuan(orderQuan);
            ordGameVec[4].getItemInfoOrder();}
        cout << endl;
        cout<< "Thank You!"<< endl;
     }
    else
        {cout << "Wrong choice!" << endl;
        exit(1);}

}

    return 0;
}
