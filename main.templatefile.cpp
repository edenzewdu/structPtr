/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<fstream>
#include<string.h>
#include<iomanip>
#include<iostream>

using namespace std;

int choice;
int option;
int num,i=0,quant;//quant used to denote the quantity entered  by customer
int j=0;//i and j for an array
char press;
void baglist( );
void shoelist();
void clothlist();

template<class T1,class T2,class T3>

class Administrator
 {
    T1 fullName,email,password1,password2,city;
    T2 phoneNo,housenum,admin_id;
    T3 gender;
   

   
    
public:
    
    void Registration()
{
    cout<<"Please enter carefully admin's ID number which is \"270515073\": "<<endl;
    int admin_ID=1234567878;
    cin>>admin_id;
    while (admin_ID != admin_id)
    {
        int count=0;
        cout<<"You are not approved to use this service!!! \nplease try again"<<endl;
        cin>>admin_id;
        if( count==2)
        {cout<<"failed";
        exit;}
        count++;
    }
        
     cout<<"Enter your full Name:"<<endl;
     cin>>fullName;
     cout<<"Enter your city You live in :"<<endl;
     cin>>city;
     cout<<"Enter your email:"<<endl;
     cin>>email;
     cout<<"Enter your phone number:"<<endl;
     cin>>phoneNo;
     cout<<"Enter your password:"<<endl;
     cin>>password1;
     cout<<"Re-enter your password:"<<endl;
     cin>>password2;
    if(password1 != password2)
    {
        cout<<"wrong password!!\nplease write your password again"<<endl;
        cin>>password2;
    }
    cout<<"you have successfully Registered...."<<endl;
    cout<<"what do you want to do\n1.Login\n2.exit"<<endl;
    b:cin>>choice;
    switch(choice)
    {
        case 1:
        login();break;
        case 2:
        exit;
        default:
        {  
            cout<<"enter correct value"<<endl;
         goto b;
            
        }
    }
 }
 
 void login()
{
    string password,fullname1;
    cout<<"enter your username:"<<endl;//user name refer to fullname
    cin>>fullname1;
    cout<<"password: "<<endl;
    cin>>password;
    while(fullname1 != fullName)
    {
        int count=0;
        cout<<"wrong comcination!!\nplease enter your full Name"<<endl;
        cin>>fullname1;
        
        if( count==2)
        {cout<<"failed";
        exit;}
         count++;    
    }
    while(password != password2)
    {
        int count=0;
        cout<<"wrong password!!\nplease try again"<<endl;
        cin>>password;
        
         if( count==2)
        {cout<<"1.forgot password\n2.retry";
        int n;
        cin>>n;}
        
        if( count==3)
        {cout<<"failed";
        exit;}
        count++;
        
    }
    cout<<"you have successfully signed up...."<<endl;
}
 };
 
class Cust
 {
	string name;
	int phone_number;
    string city;
	int housenum;
	public:
	void customer_info()
	{
 	cout<<"##############################################################################################\n";
	cout<<"######################## WELCOME TO SHOPPING MANAGMENT SYSTEM ###############################################\n";
	cout<<"Enter your Name: ";
	cin.ignore();
	getline(cin,name);
	cout<<"Enter your Phone Number: ";
	cin>>phone_number;
	cout<<"Enter your city that you live in : ";
	cin>>city;
	cout<<"Enter your House Number: ";
	cin>>housenum;
	cout<<"You can buy......";
    }

 }cust;
 
 template<class t1,class t2,class t3>
class product
{   
    	public:
   t2 product_num,quantity;
   t1 product_name,product_type;
   t3 price,discount_price,total_price,discount;// discout is by percent


 
	void create_product()
	{
		cout<<endl<<"Please Enter The Product Number: ";
		cin>>product_num;
		cout<<endl<<"Please Enter The Name of The Product: ";
		cin>>product_name;
	    cin.ignore();
		cout<<endl<<"Please Enter The Price of The Product: ";
		cin>>price;
		cout<<"The quantity of your product :";
	   	cin>>quantity;
	   	quantity;
		cout<<endl<<"Please Enter The Discount (%): ";
		cin>>discount;
	}
	
	void show_product()
	{
	cout<<"Product ID "<<setw(23)<<"Product Name"<<setw(23)<<"Quantity"<<setw(23)<<"Price"<<setw(23)<<"Discount\n";
	cout<<product_num<<setw(28)<<product_name<<setw(26)<<price<<setw(23)<<quantity<<setw(23)<<discount<<endl;
	   	
	}
	
t2 getProduct()
	{
		return product_num;
	}
	
t3 getPrice()
	{
		return price;
	}
		float getQuantity()
	{
		return quantity;
	}
	
 t1 getName()
	{
		return product_name;
	}
	
t3 getDiscount()
	{
		return discount;
	}
};

fstream fp;
product<string,int ,float> produc;
product<string,int,float>cloth_list[100];
product<string,int,float>shoe_list[100];
product<string,int,float>bag_list[100];
 


template<class t1,class t2,class t3>

void save_product()
{
	fp.open("database.dat",ios::out|ios::app);
	produc.create_product();
	fp.write((char*)&produc,sizeof(product< t1,t2,t3>));
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    fp<<"Pruduct Num "<<setw(23)<<"Product Name"<<setw(23)<<"Quantity"<<setw(23)<<"Price"<<setw(23)<<"Discount\n";
    fp<<cloth_list[0].product_num<<setw(28)<<cloth_list[0].product_name<<setw(26)<<cloth_list[0].quantity<<setw(23)<<cloth_list[0].price<<setw(23)<<cloth_list[0].discount<<endl;
 	fp<<cloth_list[1].product_num<<setw(28)<<cloth_list[1].product_name<<setw(26)<<cloth_list[1].quantity<<setw(23)<<cloth_list[1].price<<setw(23)<<cloth_list[1].discount<<endl;
 	fp<<cloth_list[2].product_num<<setw(28)<<cloth_list[2].product_name<<setw(26)<<cloth_list[2].quantity<<setw(23)<<cloth_list[2].price<<setw(23)<<cloth_list[2].discount<<endl;
    fp<<cloth_list[3].product_num<<setw(28)<<cloth_list[3].product_name<<setw(26)<<cloth_list[3].quantity<<setw(23)<<cloth_list[3].price<<setw(23)<<cloth_list[3].discount<<endl;
    fp<<cloth_list[4].product_num<<setw(28)<<cloth_list[4].product_name<<setw(26)<<cloth_list[4].quantity<<setw(23)<<cloth_list[4].price<<setw(23)<<cloth_list[4].discount<<endl;
 	fp<<cloth_list[5].product_num<<setw(28)<<cloth_list[5].product_name<<setw(26)<<cloth_list[5].quantity<<setw(23)<<cloth_list[5].price<<setw(23)<<cloth_list[5].discount<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	fp.close();
	cout<<endl<<endl<<"The Product Has Been Sucessfully Created...";
	getchar();
}

template<class t1,class t2,class t3> 
 
void show_all_product()
{
	system("cls");
	cout<<endl<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<endl<<"\t\tRECORDS.";
	cout<<endl<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	fp.open("database.dat",ios::in);
	while(fp.read((char*)&produc,sizeof(product< t1,t2,t3>)))
	{
		produc.show_product();
		cout<<endl<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"<<endl;
		getchar();
	}
	fp.close();
}
 
template<class t1,class t2,class t3>
void display_record(int num)
{
	bool found=false;
	fp.open("database.dat",ios::in);
	while(fp.read((char*)&produc,sizeof(product< t1,t2,t3>)))
	{
		if(produc.getProduct()==num)
		{
			system("cls");
			produc.show_product();
			found=true;
		}
	}
	
	fp.close();
	if(found == true)
	cout<<"\n\nNo record found";
	getchar();
}
 
 
 template<class t1,class t2,class t3>
void edit_product()
{
	int num;
	bool found=false;
	system("cls");
	cout<<endl<<endl<<"\tPlease Enter The Product number: ";
	cin>>num;
	
	fp.open("database.dat",ios::in|ios::out);
	while(fp.read((char*)&produc,sizeof(product< t1,t2,t3>)) && found==false)
	{
		if(produc.getProduct()==num)
		{
			produc.show_product();
			cout<<"\nPlease Enter The New Details of Product: "<<endl;
			produc.create_product();
			int pos=1*sizeof(produc);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&produc,sizeof(product< t1,t2,t3>));
			cout<<endl<<endl<<"\t Record Successfully Updated...";
			found=true;
		}
	}
	fp.close();
	if(found==false)
		cout<<endl<<endl<<"Record Not Found...";
	getchar();
}
 
template<class t1,class t2,class t3>
void delete_product()
{
	int num;
	system("cls");
	cout<<endl<<endl<<"Please Enter The product number: ";
	cin>>num;
	fp.open("database.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&produc,sizeof(product< t1,t2,t3>)))
	{
		if(produc.getProduct()!=num)
		{
			fp2.write((char*)&produc,sizeof(product< t1,t2,t3>));
		}
	}
	fp2.close();
	fp.close();
	remove("database.dat");
	rename("Temp.dat","database.dat");
	cout<<endl<<endl<<"\tRecord Deleted...";
	getchar();
}
 
template<class t1,class t2,class t3>
void product_menu()
{
	/*system("cls");
	fp.open("database.dat",ios::out);
 
	
	while(fp.write((char*)&produc,sizeof(product)))
	{
		cout<<produc.getProduct()<<"\t\t"<<produc.getName()<<"\t\t"<<produc.getPrice()<<"\t\t"<<produc.getQuantity()<<"\t\t"<<produc.getDiscount()<<endl;
	}
	fp.close();*/
	
	
	fp.open("database.dat",ios::in);
	cout<<endl<<endl<<"\t\tProduct MENU\n\n";
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"P.NO.\t\tNAME\t\tPRICE\t\tQUANTITY\t\tDISCOUNT\n";
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	while(fp.read((char*)&produc,sizeof(product< t1,t2,t3>)))
	{
		cout<<produc.getProduct()<<"\t\t"<<produc.getName()<<"\t\t"<<produc.getPrice()<<"\t\t"<<produc.getQuantity()<<"\t\t"<<produc.getDiscount()<<endl;
	}
	fp.close();
}
 
 
 
void place_order()
{
	int order_arr[50],quan[50],c=0;
	float amt,damt,total=0;
	char ch='Y';
	baglist();
	shoelist();
	clothlist();
	cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n PLACE YOUR ORDER";
	cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	do{
		cout<<"\n\nEnter The Product number: ";
		cin>>order_arr[c];
		if(order_arr[c]!=produc.product_num||order_arr[c]!=bag_list[100].product_num||order_arr[c]!=shoe_list[100].product_num||order_arr[c]!=cloth_list[100].product_num)
		{
		    cout<<"The object is not found..."<<endl;
		    exit(0);
		}
		cout<<"\nQuantity: ";
		cin>>quan[c];
		c++;
		cout<<"\nDo You Want To Order Another Product ? (y/n)";
		cin>>ch;
		}while(ch=='y' ||ch=='Y');
	cout<<"\n\nThank You...";
	getchar();
	system("cls");
		/*cout<<"\n\n********************************INVOICE************************\n";
	cout<<"\nPr No.\tPr Name\tQuantity \tPrice \tAmount \tAmount after discount\n";
for(int x=0;x<=c;x++)
	{
		fp.open("database.dat",ios::in);
		fp.read((char*)&produc,sizeof(product));
		while(!fp.eof())
		{	
			if(produc.getProduct()==order_arr[x])
			{
				amt=produc.getPrice()*quan[x];
				damt=amt-(amt*produc.getDiscount()/100);
				cout<<"\n"<<order_arr[x]<<"\t"<<produc.getName()<<"\t"<<quan[x]<<"\t\t"<<produc.getPrice()<<"\t"<<amt<<"\t\t"<<damt;
				total+=damt;
			}
			fp.read((char*)&produc,sizeof(product));
		}
		fp.close();
	}*/
	cout<<"\n\n\t\t\t\t\tTOTAL = "<<total;
	getchar();
}
 
 
 
void admin_menu()
{
	system("cls");
	int option;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\tPress 1 to CREATE PRODUCT";
	cout<<"\n\tPress 2 to DISPLAY ALL PRODUCTS";
	cout<<"\n\tPress 3 to DISPLAY SPECIFIC PRODUCTS";
	cout<<"\n\tPress 4 to MODIFY PRODUCT";
	cout<<"\n\tPress 5 to DELETE PRODUCT";
	cout<<"\n\tPress 6 to GO BACK TO MAIN MENU";
	cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
 
	cout<<"\n\n\tOption: ";
	cin>>option;
	switch(option)
	{
		case 1: system("cls");
				save_product< string,int,char>();
				break;
				
		case 2: show_all_product< string,int,char>();
				break;
				
		case 3:
				int num;
				system("cls");
				cout<<"\n\n\tPlease Enter The Product Number: ";
				cin>>num;
				display_record< string,int,char>(num);
				break;
				
		case 4: edit_product< string,int,char>();
		break;
		
		case 5: delete_product< string,int,char>();
		        break;
				
		case 6: system("cls");
				break;
		
		default:admin_menu();
	}
}
 

int main()
{
    Administrator<string,int ,char>admin_1;
    product<string,int,float>cloth_list[100];
	system("cls");
	
  	cout<<"\t\t\t\t*\t\t*\n";
  	cout<<"\t\t\t\t**\t\t**\n";
   	cout<<"\t\t\t\t***\t\t***\n";
   	cout<<"\t\t\t\t****\t\t****\n";
   	cout<<"\t\t\t\t*****\t\t*****\n";
    cout<<"\t\t\t\t******\t\t******\t\t\t\t";cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
   	cout<<"\t\t\t\t*******\t\t*******\t\t\t\t";	cout<<"\t1. CUSTOMER\n";
   	cout<<"\t\t\t\t********\t********\t\t\t\t";	cout<<"2. ADMINISTRATOR\n";
   	cout<<"\t\t\t\t*******\t\t*******\t\t\t\t";	cout<<"\t3. EXIT\n";
   	cout<<"\t\t\t\t******\t\t******\t\t\t\t";cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
   	cout<<"\t\t\t\t*****\t\t*****\n";
   	cout<<"\t\t\t\t****\t\t****\n";
   	cout<<"\t\t\t\t***\t\t***\n";
   	cout<<"\t\t\t\t**\t\t**\n";
   	cout<<"\t\t\t\t*\t\t*\n";
	int option;
	cin>>option;
		
	switch(option)
		{
			case 1:
			{
			    system("cls");
					cust.customer_info();
					place_order();
					getchar();
					break;
			}
					
			case 2: admin_1.Registration();
					break;
					
			case 3: 
					cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
					cout<<"\n\tGood Bye!";
					cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
					exit(0);
			
			default :cout<<"Invalid Input...\n";
		}
 
	
}


void clothlist(){
   
	int clothnum;
	system("cls");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||| CLOTH LIST ||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cloth_list[0].product_num=1;   cloth_list[0].product_name="Sweater"; 	cloth_list[0].quantity=3; 	 cloth_list[0].price=1200.00; cloth_list[0].discount=0;
	cloth_list[1].product_num=2;   cloth_list[1].product_name="Jeans";      cloth_list[1].quantity=4;    cloth_list[1].price=1000.00;  cloth_list[1].discount=0;
	cloth_list[2].product_num=3;   cloth_list[2].product_name="Sweat pants";cloth_list[2].quantity=7;    cloth_list[2].price=2500.00;  cloth_list[2].discount=0.01;
	cloth_list[3].product_num=4;   cloth_list[3].product_name="Jackets";   	cloth_list[3].quantity=10;   cloth_list[3].price=2000.00;  cloth_list[3].discount=0.01;
	cloth_list[4].product_num=5;   cloth_list[4].product_name="Dresses";   	cloth_list[4].quantity=2;    cloth_list[4].price=3000.00;  cloth_list[4].discount=0.03;
	cloth_list[5].product_num=6;   cloth_list[5].product_name="Coats";   	cloth_list[5].quantity=5;    cloth_list[5].price=3500.00;  cloth_list[5].discount=0.03;
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"Pruduct Num "<<setw(23)<<"Product Name"<<setw(23)<<"Quantity"<<setw(23)<<"Price"<<setw(23)<<"Discount\n";
 	cout<<cloth_list[0].product_num<<setw(28)<<cloth_list[0].product_name<<setw(26)<<cloth_list[0].quantity<<setw(23)<<cloth_list[0].price<<setw(23)<<cloth_list[0].discount<<endl;
 	cout<<cloth_list[1].product_num<<setw(28)<<cloth_list[1].product_name<<setw(26)<<cloth_list[1].quantity<<setw(23)<<cloth_list[1].price<<setw(23)<<cloth_list[1].discount<<endl;
 	cout<<cloth_list[2].product_num<<setw(28)<<cloth_list[2].product_name<<setw(26)<<cloth_list[2].quantity<<setw(23)<<cloth_list[2].price<<setw(23)<<cloth_list[2].discount<<endl;
 	cout<<cloth_list[3].product_num<<setw(28)<<cloth_list[3].product_name<<setw(26)<<cloth_list[3].quantity<<setw(23)<<cloth_list[3].price<<setw(23)<<cloth_list[3].discount<<endl;
 	cout<<cloth_list[4].product_num<<setw(28)<<cloth_list[4].product_name<<setw(26)<<cloth_list[4].quantity<<setw(23)<<cloth_list[4].price<<setw(23)<<cloth_list[4].discount<<endl;
 	cout<<cloth_list[5].product_num<<setw(28)<<cloth_list[5].product_name<<setw(26)<<cloth_list[5].quantity<<setw(23)<<cloth_list[5].price<<setw(23)<<cloth_list[5].discount<<endl;
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	 
}
void shoelist(){
    
	int shoenum;
	system("cls");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||| SHOE LIST ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
shoe_list[0].product_num=7; 	shoe_list[0].product_name="Sandals"; 	shoe_list[0].quantity=3; 	shoe_list[0].price=450.00; 	shoe_list[0].discount=0.0;
	shoe_list[1].product_num=8;   shoe_list[1].product_name="Heels";    shoe_list[1].quantity=1;     shoe_list[1].price=2500.00;  shoe_list[1].discount=0.01;
	shoe_list[2].product_num=9;   shoe_list[2].product_name="Sneakers";    shoe_list[2].quantity=5;     shoe_list[2].price=3450.00;  shoe_list[2].discount=0.03;
	shoe_list[3].product_num=10;   shoe_list[3].product_name="Hiking boots";   	shoe_list[3].quantity=6;     shoe_list[3].price=3000.00;  shoe_list[3].discount=0.03;
	shoe_list[4].product_num=11;   shoe_list[4].product_name="sports shoes";   	shoe_list[4].quantity=7;    shoe_list[4].price=3450.00;  shoe_list[4].discount=0.03;
	 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 	cout<<"Pruduct Num"<<setw(23)<<"Product Name"<<setw(23)<<"Quantity"<<setw(23)<<"Price"<<setw(23)<<"Discount\n";
 	cout<<shoe_list[0].product_num<<setw(28)<<shoe_list[0].product_name<<setw(26)<<shoe_list[0].quantity<<setw(23)<<shoe_list[0].price<<setw(23)<<shoe_list[0].discount<<endl;
 		cout<<shoe_list[1].product_num<<setw(28)<<shoe_list[1].product_name<<setw(26)<<shoe_list[1].quantity<<setw(23)<<shoe_list[1].price<<setw(23)<<shoe_list[1].discount<<endl;
 		cout<<shoe_list[2].product_num<<setw(28)<<shoe_list[2].product_name<<setw(26)<<shoe_list[2].quantity<<setw(23)<<shoe_list[2].price<<setw(23)<<shoe_list[2].discount<<endl;
 		cout<<shoe_list[3].product_num<<setw(28)<<shoe_list[3].product_name<<setw(26)<<shoe_list[3].quantity<<setw(23)<<shoe_list[3].price<<setw(23)<<shoe_list[3].discount<<endl;
 		cout<<shoe_list[4].product_num<<setw(28)<<shoe_list[4].product_name<<setw(26)<<shoe_list[4].quantity<<setw(23)<<shoe_list[4].price<<setw(23)<<shoe_list[4].discount<<endl;
 		 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 	 
  }
void baglist( ){
    
	int bagnum;
	system("cls");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||| BAG LIST ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	bag_list[0].product_num=12; 	bag_list[0].product_name="Backpack"; 	bag_list[0].quantity=6; 	bag_list[0].price=1500.00; 	bag_list[0].discount=0.01;
	bag_list[1].product_num=13;   bag_list[1].product_name="Suitcase";    bag_list[1].quantity=2;     bag_list[1].price=2400.00;  bag_list[1].discount=0.02;
	bag_list[2].product_num=14;   bag_list[2].product_name="Shopping bag";    bag_list[2].quantity=4;     bag_list[2].price=1000.00;  bag_list[2].discount=0.0;
	bag_list[3].product_num=15;   bag_list[3].product_name="Briefcase";   	bag_list[3].quantity=11;     bag_list[3].price=800.00;  bag_list[3].discount=0.0;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	 
 	cout<<"Pruduct Num "<<setw(23)<<"Product Name"<<setw(23)<<"Quantity"<<setw(23)<<"Price"<<setw(23)<<"Discount\n";
 	cout<<bag_list[0].product_num<<setw(28)<<bag_list[0].product_name<<setw(26)<<bag_list[0].quantity<<setw(23)<<bag_list[0].price<<setw(23)<<bag_list[0].discount<<endl;
 		cout<<bag_list[1].product_num<<setw(28)<<bag_list[1].product_name<<setw(26)<<bag_list[1].quantity<<setw(23)<<bag_list[1].price<<setw(23)<<bag_list[1].discount<<endl;
 		cout<<bag_list[2].product_num<<setw(28)<<bag_list[2].product_name<<setw(26)<<bag_list[2].quantity<<setw(23)<<bag_list[2].price<<setw(23)<<bag_list[2].discount<<endl;
 		cout<<bag_list[3].product_num<<setw(28)<<bag_list[3].product_name<<setw(26)<<bag_list[3].quantity<<setw(23)<<bag_list[3].price<<setw(23)<<bag_list[3].discount<<endl;
 	 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
