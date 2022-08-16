include<iostream>
#include<fstream>
using namespace std;


class patient
{
  public:
   string name,address,blood_group,vacci_name,type_patient,issue,email_id;
   char gender;
   int age,ch,vacci_no;
   int long long phone_number;

 
     patient()
     {
       name=address=blood_group=vacci_name=type_patient=issue=email_id="NIL";
       age=ch=vacci_no=0;
       phone_number=0;

     }
     
     
     
     void get_data()
     {
 cout<<"Please enter your name"<<endl;
 cin>>name;
 v:
 try
 {
   cout<<"Please enter your gender\nEnter M for male and F for female"<<endl;
   cin>>gender;
   if(gender!='m'||gender!='F'||gender!='f'||gender!='M')
   goto h;
   else 
   throw 911;

 }
 catch(int u)
 {
   cout<<"\nXXXXXXXXXX Please Provide Correct Input XXXXXXXXXX\n";
   goto v;
 }
 h:
 cout<<"Please enter your age"<<endl;
 cin>>age;
 cout<<"Please enter your blood group"<<endl;
 cin>>blood_group;
  cout<<"\033[1;33m";
 cout<<"Are you vaccinated?"<<endl;

 cout<<"1.YES 2.NO "<<endl;
 cout<<"\033[0m";
 cout<<"Please enter your choice"<<endl;
 cin>>ch;
 do{
 switch(ch)
 {
       case 1:
       cout<<"Please enter the name of the Vaccine"<<endl;
       cin>>vacci_name;
       cout<<"Please enter the number of doses"<<endl;
       cin>>vacci_no;
       break;
       default:
       cout<<"Please enter the correct choice"<<endl;
       break;
 }
 }while(ch!=1);
    
 

 cout<<"Please enter your address"<<endl;
 cin>>address;
 ui:
 try
 {
    cout<<"\nEnter 10 digit Phone number: ";
    cin>>phone_number;
    if(phone_number>999999999&&phone_number<=9999999999)
    goto x;
    else 
    throw 911;
 }
 catch(int u)
 {
   cout<<"\nXXXXXXXXXX Please Provide Correct Input XXXXXXXXXX\n";
   goto ui;
 }
 x:
 cout<<"Please enter your email address"<<endl;
 cin>>email_id;

 ofstream fout;
 fout.open("patientdata.txt",ios::app);

 fout<<"Name:"<<name<<endl; fout<<"Gender:"<<gender<<endl; fout<<"Age:"<<age<<endl;
 fout<<"Blood Group:"<<blood_group<<endl; fout<<"Vaccine name:"<<vacci_name<<endl; fout<<"Number of doses:"<<vacci_no<<endl;
 fout<<"Address:"<<address<<endl; fout<<"Phone Number:"<<phone_number<<endl; fout<<"Email id:"<<email_id<<endl;
 fout.close();

}

void display()
{ cout<<"\033[1;31m";
   cout<<"Your entred information is as follows"<<endl;
   cout<<"NAME:"<<name<<endl;
   cout<<"GENDER:"<<gender<<endl;
   cout<<"AGE:"<<age<<endl;
   cout<<"BLODD GROUP:"<<blood_group<<endl;
   cout<<"NAME OF THE VACCINE:"<<vacci_name<<endl;
   cout<<"NUMBER OF DOSES:"<<vacci_no<<endl;
   cout<<"ADDRESS:"<<address<<endl;
   cout<<"PHONE NUMBER:"<<phone_number<<endl;
   cout<<"EMAIL ID:"<<email_id<<endl;
    cout<<"\033[0m";
  }
   
};

template<typename T>
class feedback:public patient
{
  T rating[7];
  T overall_rating = 0;

public:
void patient_feedback()
{
  
        fstream f1;
        f1.open("feedback.txt", ios::app);
        cout<<"Please enter your name"<<endl;
 cin>>name;
  cout<<"Please enter your age"<<endl;
 cin>>age;
 cout<<"Please enter your gender"<<endl;
   cin>>gender;
 cout<<"Please enter your blood group"<<endl;
 cin>>blood_group;
cout<<"\nEnter 10 digit Phone number: ";
    cin>>phone_number;
        cout << "Rate the following surveys out of 5 " << endl;

        cout << "The Hospital Enviornment : ";
        cin >> rating[0];
        cout << "The Hospital Cleanliness : ";
        cin >> rating[1];
        cout << "The service of attending doctors : ";
        cin >> rating[2];
        cout << "The service of attending nurses : ";
        cin >> rating[3];
        cout << "The enqiury service : ";
        cin >> rating[4];
        cout << "The admission process : ";
        cin >> rating[5];
        cout << "The discharge process : ";
        cin >> rating[6];

        for (int i = 0; i < 7; i++)
            overall_rating = overall_rating + rating[i];
        overall_rating = overall_rating / 7;

        f1 << "Name : " << name << "\tAge : " << age << "\tGender : " << gender << "\tBlood group : " << blood_group << "\tPhone no : " << phone_number;
        f1 << "\nOverall Rating : " << overall_rating << endl;
        f1.close();
}

};

class covid:public patient
{
    public:
    int covid_vaccine = 0;
    int covid_beds = 0;
    int dose_no;
    
    
    

    void vaccine_registration()
    {
        if (covid_vaccine < 100)
        {
            cout << "\nEnter your name : ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter mobile no: ";
            cin >> phone_number;
            cout << "Is it your 1st or 2nd dose : ";
            cin >> dose_no;

            cout << "\n\n SUCCESSFULLY REGISTERED FOR VACCINATION";
        }
        else
        {
            cout << "Stock of vaccine is finished";
        }
        covid_vaccine++;
    }
    void bed_allowance()
    {
        if (covid_beds < 200)
        {
            cout << "\nEnter your name : ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter mobile no: ";
            cin >> phone_number;
            cout << "\n\n SUCCESSFULLY ALLOWANCE OF BEDS";
        }
        else
        {
            cout << "The hospital beds are not available";
        }
    }

};

class lab_test: public patient
{
  public:
  char test_choice;
  int cost=0;
  int Labtest()
  {
    cout<<"Please enter your name"<<endl;
    cin>>name;
  cout<<"Please enter your age"<<endl;
 cin>>age;
 cout<<"Please enter your gender"<<endl;
   cin>>gender;
 cout<<"Please enter your blood group"<<endl;
 cin>>blood_group;
cout<<"\nEnter 10 digit Phone number: ";
    cin>>phone_number;
    char choice;
    cout<<"***** CHOOSE WHICH TEST IS RECOMMENDED BY YOUR DOCTOR *****"<<endl;
    
     do
    {
      cout<<"Enter 1: CBC(Complete Blood Count"<<endl;
      cout<<"Enter 2: Thyroid Test (T3, T4,Tsh)"<<endl;
      cout<<"Enter 3: LFT Test"<<endl;
      cout<<"Enter 4: Malaria Test"<<endl;
      cout<<"Enter 5: Dengue Test"<<endl;
      cout<<"Enter 6: Bone Profile Test"<<endl;
      cout<<"Enter 7: Visual Activity Test"<<endl;
      cout<<"Enter 0: Exit "<<endl;
      cout<<": ";
      cin>>choice;
      cout<<endl;
      switch(choice)
      {
        case '3':
        cout<<"\033[1;36m";
        cout<<"\nLiver Function Test\t\t\t\t\t\t₹ 1045"<<endl;
        cout<<"\nWhat is liver function test?\nLiver function tests are mainly used to estimate the severity of a disease like alcoholic hepatitis or viral hepatitis, to detect liver infections like hepatitis or scarring of a liver (cirrhosis), to know the effectiveness of a treatment, to detect the side effects of certain medicines."<<endl;
        cout<<"\n\nDo u want to perform the test?(Y/N)\n";
        cin>>test_choice;
        if(test_choice=='y'||test_choice=='Y')
        cost+=1045;
         cout<<"\033[0m";

        break;
        case '1':
        cout<<"\033[1;36m";
        cout<<"\nComplete Blood Count Test\t\t\t\t\t\t₹ 190"<<endl;
        cout<<"\nWhat is this test?\nComplete Blood Count (CBC) is a blood test that measures Red blood cells (RBC), White blood cells (WBC), Platelets (PLTs), Hemoglobin (Hb), and Hematocrit (Hct) in the blood. This test is used to determine the overall health and screen for any diseases that affect the blood cells."<<endl;
        cout<<"\n\nDo u want to perform the test?(Y/N)\n";
        cin>>test_choice;
        if(test_choice=='y'||test_choice=='Y')
        cost+=190;
         cout<<"\033[0m";
        break;
        case '2':
        cout<<"\033[1;36m";
        cout<<"\nThyroid(T3, T4, Tsh) test\t\t\t\t\t\t₹ 495"<<endl;
        cout<<"\nWhat is this test?\nThyroid Function Test panel measures the levels of total thyroxine T-4, total triiodothyronine T-3 and thyroid stimulating hormone (TSH) in blood."<<endl;
        cout<<"\n\nDo u want to perform the test?(Y/N)\n";
        cin>>test_choice;
        if(test_choice=='y'||test_choice=='Y')
        cost+=495;
         cout<<"\033[0m";
        break;
        case '4':
        cout<<"\033[1;36m";
        cout<<"\nMalarial Parasite Smear Blood\t\t\t\t\t\t₹ 275\n";
        cout<<"\nWhat is this test?\nMalaria tests are used to diagnose malaria. If malaria is diagnosed and treated early, it can usually be cured.\n";
        cout<<"\n\nDo u want to perform the test?(Y/N)\n";
        cin>>test_choice;
        if(test_choice=='y'||test_choice=='Y')
        cost+=275;
         cout<<"\033[0m";
        break;
        case '5':
        cout<<"\033[1;36m";
        cout<<"\nDengue Fever Test\t\t\t\t\t\t₹ 400"<<endl;
        cout<<"\nWhat is this test?\nA dengue fever test is used to find out if you have been infected with the dengue virus. It is mostly used for people who have symptoms of illness and have recently traveled to an area where dengue infections are common.\n";
        cout<<"\n\nDo u want to perform the test?(Y/N)\n";
        cin>>test_choice;
        if(test_choice=='y'||test_choice=='Y')
        cost+=400;
         cout<<"\033[0m";
        break;
        case '6':
        cout<<"\033[1;36m";
        cout<<"\nBone Profile Test\t\t\t\t\t\t₹ 1800"<<endl;
        cout<<" A bone profile of blood tests helps to determine how well your body's metabolic processes are affecting your skeleton.\n";
        cout<<"\n\nDo u want to perform the test?(Y/N)\n";
        cin>>test_choice;
        if(test_choice=='y'||test_choice=='Y')
        cost+=1800;
         cout<<"\033[0m";
        break;
        case '7':
        cout<<"\033[1;36m";
        cout<<"\nVisual Activity Test\t\t\t\t\t\t₹ 200"<<endl;
        cout<<" Among the first tests performed in a comprehensive eye exam are visual acuity tests that measure the sharpness of your eyesight.\n";
        cout<<"\n\nDo u want to perform the test?(Y/N)\n";
        
        cin>>test_choice;
        if(test_choice=='y'||test_choice=='Y')
        cost+=200;
        cout<<"\033[0m";
        break;
        case '0':
        break;
        default:
        cout<<"\033[1;31m";
        cout<<"XXXXXXXXXXX ENTER CORRECT CHOICE XXXXXXXXXXXXX"<<endl;
        cout<<"\033[0m";
        break;
      }
    }while(choice!='0');
    return cost;
  }
};

void printthank();
int main()
{
  int ch,ch_2,slot;
  string line;
  patient p1;
  covid obj1;
  lab_test object;
  int labcost;
       
  do{ 
    cout<<"\033[1;35m";
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";  
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t __________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                                              |\n";
cout<<"\t\t\t\t\t\t|             1  >> Emergency Seat booking                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> To book appoinment with doctor                |\n";
cout<<"\t\t\t\t\t\t|             3  >> Pathology Section                             |\n";
cout<<"\t\t\t\t\t\t|             4  >> Covid Section                                 |\n";
cout<<"\t\t\t\t\t\t|             5  >> Please give your feedback                     |\n";
cout<<"\t\t\t\t\t\t|             6  >> Display Patient Data                          |\n";
cout<<"\t\t\t\t\t\t|             7  >> Exit the program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
cout<<"\033[0m";
    
    cout<<"Please enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    { 
      case 1:
   
       p1.get_data();
        cout<<"\033[1;35m";
       cout<<"Your seat is booked"<<endl;
       cout<<"\033[0m";
       break;
         
       case 2:
       
        cout<<"First please enter your information as follow"<<endl;
         p1.get_data();
         cout<<"1.General Treatment"<<endl;
         cout<<"2.Bone Treatment"<<endl;
        cout<<"3.Neuro Consultancy"<<endl;
        cout<<"4.Eye Treatment"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>ch_2;
        switch(ch_2)
        {
                case 1:
                cout<<"NAME :Dr.Sushmita Das"<<endl;
                cout<<"AGE : 29"<<endl;
                cout<<"GENDER : Female"<<endl; 
                cout<<"SPECIALIST : General Physcian"<<endl; 
                cout<<"QUALIFICATION : MBBS"<<endl; 
                cout<<"EXPERIENCE : 2 years"<<endl; 
                cout<<"EMAIL ID : sushmitadas29@gmail.com"<<endl; 
               cout<<"The slot for appoinemt are as follows"<<endl;
               cout<<"1. 9 am to 12 pm 2. 2 pm TO 5 pm"<<endl;
               cout<<"Please enter the slot"<<endl;
               cin>>slot;
               
           if(slot==1 || slot==2){
             cout<<"\033[1;31m";
             cout<<"Your appoinment is booked with Dr.Sushmita Das Suceessfully"<<endl;
            cout<<"\033[0m";
           } else{
             cout<<"Please enter the correct slot"<<endl;
           }   
               
               break;
                
                case 2:
                cout<<"NAME :Dr.Shrinivas Reddy"<<endl;
                cout<<"AGE :39 "<<endl;
                cout<<"GENDER :Male  "<<endl; 
                cout<<"SPECIALIST :Orthopedic Surgeon "<<endl; 
                cout<<"QUALIFICATION :MD  Orthopedic Surgeon  "<<endl; 
                cout<<"EXPERIENCE :9 years "<<endl; 
                cout<<"EMAIL ID :shrinivasreddy47@gmail.com "<<endl; 
               cout<<"The slot for appoinemt are as follows"<<endl;
               cout<<"1. 9 am to 12 pm 2. 2 pm TO 5 pm"<<endl;
               cout<<"Please enter the slot"<<endl;
               cin>>slot;
               do{
           if(slot==1 || slot==2){
             cout<<"\033[1;31m";
             cout<<"Your appoinment is booked with Dr.Shrinivas Reddy Suceessfully"<<endl;
             cout<<"\033[0m";
           } else{
             cout<<"Please enter the correct slot"<<endl;
           }   
               }while(slot==1);  

                
                break;
                case 3:
                cout<<"NAME :Dr.Ram Verma"<<endl;
                cout<<"AGE :35 "<<endl;
                cout<<"GENDER :Male  "<<endl; 
                cout<<"SPECIALIST :Neuro surgeon "<<endl; 
                cout<<"QUALIFICATION :MD  neuro surgan  "<<endl; 
                cout<<"EXPERIENCE :7 years "<<endl; 
                cout<<"EMAIL ID :ramverma77@gmail.com   "<<endl; 
               cout<<"The slot for appoinemt are as follows"<<endl;
               cout<<"1. 9 am to 12 pm 2. 2 pm TO 5 pm"<<endl;
               cout<<"Please enter the slot"<<endl;
               cin>>slot;
               do{
           if(slot==1 || slot==2){
             cout<<"\033[1;31m";
             cout<<"Your appoinment is booked with Dr.Ram Verma Suceessfully"<<endl;
             cout<<"\033[0m";
           } else{
             cout<<"Please enter the correct slot"<<endl;
           }   
               }while(slot==1);  

                break;
                case 4:
                 cout<<"NAME :Dr.Isha Deshmukh"<<endl;
                cout<<"AGE :32   "<<endl;
                cout<<"GENDER :Female   "<<endl; 
                cout<<"SPECIALIST :Eye surgeon "<<endl; 
                cout<<"QUALIFICATION : MBBS "<<endl; 
                cout<<"EXPERIENCE :7 years "<<endl; 
                cout<<"EMAIL ID : ishadeshmukh18@gmail.com "<<endl; 
               cout<<"The slot for appoinemt are as follows"<<endl;
               cout<<"1. 9 am to 12 pm 2. 2 pm TO 5 pm"<<endl;
               cout<<"Please enter the slot"<<endl;
               cin>>slot;
               do{
           if(slot==1 || slot==2){
             cout<<"\033[1;31m";
             cout<<"Your appoinment is booked with Dr.Isha Deshmukh Suceessfully"<<endl;
             cout<<"\033[0m";
           } else{
             cout<<"Please enter the correct slot"<<endl;
           }   
               }while(slot==1);  

                break;
        }
        
      

        break;

        case 3:
        labcost=object.Labtest();
        cout<<"The total cost of labtest is: ₹ "<<labcost;
        break;

        case 4:  
        int ch_3;
        cout << "1.Vaccine Registration" << endl;
        cout << "2.Bed Allowance" << endl;
        cout << "Enter your choice : ";
        cin >> ch_3;
        if (ch_3 == 1)
            obj1.vaccine_registration();
        else if (ch_3 == 2)
            obj1.bed_allowance();
        break;
        case 6:
        p1.display();
        break;
        case 7:
        printthank();
        default:
        break;
        case 5:
        // p1.get_data();
        feedback<int> obj;
        obj.patient_feedback();
        break;
    }
       

    }while(ch!=7);


  return 0;
}

void printthank()
{
  cout<<"\033[1;36m";
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@|______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@|                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
cout<<"\033[0m";
}

