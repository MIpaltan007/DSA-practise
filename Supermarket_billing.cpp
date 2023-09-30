#include<bits/stdc++.h>
using namespace std;
class Shopping{
    private:
    int Product_Code;
    double Price;
    double Discount;
    string Product_Name;

    public:
    void Menu();
    void Administrator();
    void Buyer();
    void Add();
    void Edit();
    void Remove();
    void List();
    void Receipt();

};
void Shopping::Menu(){
    M:
int choice;
string email;
string password;
cout<<"\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cout<<"\t\t\t\t\t`               GOTHAPATNA SUPER MARKET                  `\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cout<<"\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cout<<"\t\t\t\t\t`  AVAILABLE OPTIONS ------                              `\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cout<<"\t\t\t\t\t` 1) ADMINISTRATOR                                       `\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cout<<"\t\t\t\t\t` 2) BUYER                                               `\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cout<<"\t\t\t\t\t` 3) EXIT:                                               `\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cout<<"\t\t\t\t\t` PLEASE SELECT:-                                        `\n";
cout<<"\t\t\t\t\t`                                                        `\n";
cin>>choice;
switch(choice){
    case 1:
    cout<<"\t\t\t\t\t` PLEASE LOGIN---                                         `\n";
    cout<<"\t\t\t\t\t` ENTER YOUR EMAIL ID                                     `\n";
    cin>>email;
    cout<<"\t\t\t\t\t` ENTER YOUR PASSWORD                                     `\n";
    cin>>password;
    if(email=="adityabikramjena2002@gmail.com" && password=="B121004" ){
Administrator();
    }
    else{
    cout<<"\t\t\t\t\t` INVALID LOGIN CREDENTIALS: CHECK YOUR EMAIL-ID/PASSWORD `\n";
    cout<<"\t\t\t\t\t`             PLEASE  TRY  AGAIN                          `\n";
    cout<<"\t\t\t\t\t`_________________________________________________________`\n";
    }
    break;
    case 2:
    {
        Buyer();
    }
    case 3:
    {
        exit(0);
    }
    default:
    {
    cout<<"\t\t\t\t\t`        PLEASE SELECT FROM THE AVAILABLE OPTIONS         `\n";
    }
}
goto M;
}
void Shopping::Administrator(){
    M:
    int choice;
    cout<<"\n\t\t\t\t\t`************** WELCOME****ADMINISTRATOR****************`\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`--------------SELECT THE FOLLOWING OPTIONS--------------`\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`  1) ADD A NEW PRODUCT                                  `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`  2) MODIFY A PRODUCT                                   `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`  3) DELETE A PRODUCT                                   `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`  4) MAIN-MENU: RETURN                                  `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`  ENTER YOUR CHOICE                                     `\n";
    cin>>choice;
    switch(choice){
        case 1:
            Add();
            break;
        case 2:
            Edit();
            break;
        case 3:
            Remove();
            break;
        case 4:
            Menu();
            break;
        default:
            cout<<"\t\t\t\t\t`*************PLEASE ENTER A VALID CHOICE****************`\n";
            cout<<"\t\t\t\t\t`------YOUR REQUESTED CHOICE MAY NOT BE AVAILABLE--------`\n";
            cout<<"\t\t\t\t\t`                                                        `\n";
    }
    goto M;
}

void Shopping::Buyer(){
    M:
    int choice;
    cout<<"\t\t\t\t\t```````````WELCOME TO GOTHAPATNA SUPER MARKET`````````````\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`    ENTER YOUR CHOICE:-                                 `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`  1) BUY PRODUCTS                                       `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`  2) RETURN TO MAIN MENU                                `\n";
    cin>>choice;
    switch(choice){
        case 1:
        Receipt();
        break;
        case 2:
        Menu();
        break;
        default:
           cout<<"\t\t\t\t\t`************PLEASE ENTER A VALID CHOICE*****************`\n";
           cout<<"\t\t\t\t\t`------YOUR REQUESTED CHOICE MAY NOT BE AVAILABLE--------`\n";   
           cout<<"\t\t\t\t\t`                                                        `\n";  
         
    }
    goto M;
}

void Shopping::Add(){
    M:
    fstream data;
    int c,token=0;
    double p,d;
    string n;
          cout<<"\t\t\t\t\t`+++++++++++++++++++ADDING NEW PRODUCT++++++++++++++++++++`\n";
          cout<<"\t\t\t\t\t`                                                         `\n";
          cout<<"\t\t\t\t\t`_______________PLEASE ENTER PRODUCT CODE_________________`\n";
          cin>>Product_Code;
          cout<<"\t\t\t\t\t`                                                         `\n";
          cout<<"\t\t\t\t\t`-------------------ENTER PRODUCT NAME--------------------`\n";
          cin>>Product_Name;
          cout<<"\t\t\t\t\t`---------------------PRODUCT PRICE-----------------------`\n";
          cin>>Price;
          cout<<"\t\t\t\t\t`******************DISCOUNT ON PRODUCT********************`\n";
          cin>>Discount;
          data.open("database.txt",ios::in);
          if(!data){
            data.open("database.txt",ios::app|ios::out);
            data<<"  "<<Product_Code<<"  "<<Product_Name<<"  "<<Price<<"  "<<Discount<<"\n";
            data.close();
          }
          else{
            data>>c>>n>>p>>d;
            while(!data.eof()){
                if(c==Product_Code){
                    token++;
                }
                data>>c>>n>>p>>d;
            }
            data.close();
          
          if(token==1)
          goto M;
          else{
            data.open("database.txt",ios::app|ios::out);
            data<<"  "<<Product_Code<<"  "<<Product_Name<<"  "<<Price<<"  "<<Discount<<"\n";
            data.close();
          }
          }
         cout<<"\n\t\t\t\t\t`^^^^^^^^^^^^^^^^^^^^^RECORD INSERTED^^^^^^^^^^^^^^^^^^^^^`\n";
}
void Shopping::Edit(){
    
    fstream data,data1;
    int Product_key,token=0,c;
    double p,d;
    string n;
         cout<<"\t\t\t\t\t`...................MODIFYING PRODUCT.....................`\n";
         cout<<"\t\t\t\t\t`                                                         `\n";
         cout<<"\t\t\t\t\t`******************ENTER PRODUCT CODE*********************`\n";
         cin>>Product_key;
         data.open("database.txt",ios::in);
         if(!data){
         cout<<"\t\t\t\t\t`   YOUR REQUESTED FILE DOESN'T EXIST IN OUR DATABASE     `\n";
         }
         else{
            data1.open("database1.txt",ios::app|ios::out);
            data>>Product_Code>>Product_Name>>Price>>Discount;
            while(!data.eof()){
                if(Product_key==Product_Code){
                    cout<<"\t\t\t\t\t`****************ENTER PRODUCT'S NEW CODE*****************`\n";
                    cin>>c;
                    cout<<"\t\t\t\t\t````````````````````NAME OF THE PRODUCT````````````````````\n";
                    cin>>n;
                    cout<<"\t\t\t\t\t`$#$#$#$#$#$#$#$#$#$#$# PRICE #$#$#$#$#$#$#$#$#$#$#$#$#$#$`\n";
                    cin>>p;
                    cout<<"\t\t\t\t\t`--------------------- DISCOUNT --------------------------`\n";
                    cin>>d;
                    data<<"      "<<c<<"        "<<n<<"        "<<"        "<<p<<"       "<<d<<"\n";
                    cout<<"\t\t\t\t\t`                                                         `\n";
                    cout<<"\t\t\t\t\t`=+=+=+=+=+=+=+= RECORD EDITED SUCCESSFULLY!!! =+=+=+=+=+=`\n";
                    token++;
                }
                else{
                    data1<<"  "<<Product_Code<<"  "<<Product_Name<<"  "<<Price<<"  "<<Discount<<"\n";
                }
                data>>Product_Code>>Product_Name>>Price>>Discount;
            }
            data.close();
            data1.close();

            remove("database.txt");
            rename("database1.txt","database.txt");
            if(token==0){
                cout<<"\t\t\t\t\t`   YOUR REQUESTED FILE DOESN'T EXIST IN OUR DATABASE     `\n";
            }
         }
         
}
void Shopping::Remove(){
    fstream data,data1;
    int Product_key,token=0;
    cout<<"\t\t\t\t\t` /|/|/|/|/|/|/|  DELETING  PRODUCT'S RECORD |/|/|/|/|/|/ `\n";
    cout<<"\t\t\t\t\t`                                                         `\n";
    cout<<"\t\t\t\t\t`<><><><><><><><><>  ENTER PRODUCT CODE <><><><><><><><><>`\n";
    cin>>Product_key;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\t\t\t\t\t`   YOUR REQUESTED FILE DOESN'T EXIST IN OUR DATABASE     `\n";
    
    }
    else{
        data1.open("database1.txt",ios::app|ios::out);
        data>>Product_Code>>Product_Name>>Price>>Discount;
        while(!data.eof()){
            if(Product_Code==Product_key)
            {
                cout<<"\t\t\t\t\t`!!!!!!!!!!!!! RECORD DELETED SUCCESSFULLY !!!!!!!!!!!!!!!`\n";
                token++;
            }
            else{
                data1<<"  "<<Product_Code<<"  "<<Product_Name<<"  "<<Price<<"  "<<Discount<<"\n";
            }
           data>>Product_Code>>Product_Name>>Price>>Discount;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");
        if(token==0){
            cout<<"\t\t\t\t\t`   YOUR REQUESTED FILE DOESN'T EXIST IN OUR DATABASE     `\n";
        }
    }
}
void Shopping::List(){
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\t\t\t\t\t`                                                         `\n";
    cout<<"\t\t\t\t\t` PRODUCT NUMBER    ||   PRODUCT NAME    ||  PRICE        `\n";
    cout<<"\t\t\t\t\t`                                                         `\n";
    data>>Product_Code>>Product_Name>>Price>>Discount;
    while(!data.eof()){
        data<<"  "<<Product_Code<<"  "<<Product_Name<<"  "<<Price<<"  "<<Discount<<"\n";
        data>>Product_Code>>Product_Name>>Price>>Discount;
    }
    data.close();
}

void Shopping::Receipt(){
    
    fstream data;
    int Codes[100];
    int Quantity[100];
    char choice;
    int c=0,i;
    double amount=0,discount=0,total=0;
    cout<<"\t\t\t\t\t`*********************** RECEIPT *************************`\n";
    cout<<"\t\t\t\t\t`                                                         `\n";
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\t\t\t\t\t`__________________ DATABASE IS EMPTY ____________________`\n";
        cout<<"\t\t\t\t\t`                                                         `\n";
    }
    else{
        data.close();
        List();
        cout<<"\t\t\t\t\t`^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^`\n";
        cout<<"\t\t\t\t\t`                                                         `\n";
        cout<<"\t\t\t\t\t`                   PLACE YOUR ORDER                      `\n";
        cout<<"\t\t\t\t\t`                                                         `\n";
        cout<<"\t\t\t\t\t`*********************************************************`\n";
        do{
            M:
            cout<<"\t\t\t\t\t`     ------ENTER  PRODUCT  CODE-----                     `\n";
            cin>>Codes[c];
            cout<<"\t\t\t\t\t`     ------ENTER PRODUCT QUANTITY------                  `\n";
            cin>>Quantity[c];
            for(i=0;i<c;i++){
                if(Codes[c]==Codes[i]){
                    cout<<"\t\t\t\t\t`  YOUR ENTERED CODE IS ALREADY EXISTING IN OUR DATABASE  `\n";
                    cout<<"\t\t\t\t\t`           PLEASE ENTER A UNIQUE PRODUCT CODE            `\n";
                    goto M;
                }
            }
            c++;
            cout<<"\t\t\t\t\t`          DO YOU WANT TO BUY ANOTHER PRODUCT?             `\n";
            cout<<"\t\t\t\t\t`                Y/y FOR YES, N/n FOR NO                       `\n";
            cin>>choice;

        }
        while(choice=='Y'||choice=='y');
        cout<<"\t\t\t\t\t`*********************** RECEIPT *************************`\n";
        cout<<"\t\t\t\t\t`PRODUCT NO.\t PRODUCT NAME\t PRODUCT QUANTITY\t PRICE\t AMOUNT\t DISCOUNT`\n";
        for(i=0;i<c;i++){
            data.open("database.txt",ios::in);
            data>>Product_Code>>Product_Name>>Price>>Discount;
            while(!data.eof()){
                if(Product_Code==Codes[i]){
                    amount=Price*Quantity[i];
                    discount=amount-(amount*discount/100);
                    total=total+discount;
                    cout<<"\n"<<Product_Code<<"  "<<Product_Name<<"  "<<Quantity[i]<<"  "<<Price<<"  "<<amount<<"  "<<discount;
                }
                data>>Product_Code>>Product_Name>>Price>>Discount;
            }
        }
        data.close();
    }
     cout<<"\t\t\t\t\t```````````````````````````````````````````````````````````\n";
     cout<<"\t\t\t\t\t`$$$$$$$$$$$$$$$$$$$$ TOTAL  AMOUNT $$$$$$$$$$$$$$$$$$$$$$`\n";
}
int main(){
    Shopping s;
    s.Menu();

}