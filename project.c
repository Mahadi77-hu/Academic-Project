#include <stdio.h>

void welcome();
void registerPatient();
void diagnosePatient();

void treatment();
void bill();
void discharge();

int main()
{
    welcome();
    registerPatient();
    diagnosePatient();
    treatment();
    bill();
    discharge();

    printf("\nThank You For Visiting Our Hospital.");
    

    return 0;
}

void welcome()
{
    
    printf("\n     CITY HOSPITAL SYSTEM");
    
    printf("\n   Welcome to City Hospital!\n");
}

void registerPatient()
{
    char name[30];
    int age;

    printf("\n\n----- Patient Registration -----\n");
    printf("Register as a new patient\n");

    printf("Enter Patient Name: ");
    scanf("%[^\n]", name);

    printf("Enter Patient Age: ");
    scanf("%d", &age);

    printf("\nPatient Registered Successfully!\n");
}

void diagnosePatient()
{
    int choice;
    int doctorChoice;

    printf("\n----- Doctor Diagnosis -----\n");
    printf("Select Patient Problem:\n");
    printf("1. Fever\n");
    printf("2. Accident\n");
    printf("3. Stomach Pain\n");
    printf("4. Chest Pain\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nDiagnosis: Viral Fever\n");
            printf("  \n Suggested DDoctor \n ");
            printf("1. Dr. Smith\n");
            printf("2. Dr. Johnson\n");
            printf("3. Dr. Williams\n");
            printf("Select a doctor:\n ");
            scanf("%d", &doctorChoice);
            if (doctorChoice == 1)
            {
                printf("\n Dr. Smith.\n");
                printf("Specialist : Medicine\n");
                printf("Experience : 10 years\n");
                printf("Contact : 017XXXXXXXX\n");
            }
            else if (doctorChoice == 2)
            {
                printf("\n Dr. Johnson.\n");
                printf("Specialist : Medicine & Surgery\n");
                printf("Experience : 15 years\n");
                printf("Contact : 018XXXXXXXX\n");
            }
            else if (doctorChoice == 3)
            {
                printf("\n Dr. Williams.\n");
                printf("Specialist : Medicine & Cardiology\n");
                printf("Experience : 20 years\n");
                printf("Contact : 019XXXXXXXX\n");
            }
            else
            {
                printf("\nInvalid doctor choice!\n");
            }
            break;

        case 2:
            printf("\nDiagnosis: Bone Fracture\n");
            printf("  \n Suggested DDoctor \n ");
            printf("1. Dr. As.Somrat\n");
            printf("2. Dr. Mr.Tamim\n");
            printf("3. Dr. Abir Ahmed\n");
            printf("Select a doctor:\n ");
            scanf("%d", &doctorChoice);
            if (doctorChoice == 1)
            {
                printf("\n Dr. As.Somrat.\n");
                printf("Specialist : Orthopedics & Gynecology\n");
                printf("Experience : 10 years\n");
                printf("Contact : 017XXXXXXXX\n");
            }
            else if (doctorChoice == 2)
            {
                printf("\n Dr. Mr.Tamim.\n");
                printf("Specialist : Orthopedics\n");
                printf("Experience : 15 years\n");
                printf("Contact : 018XXXXXXXX\n");
            }
            else if (doctorChoice == 3)
            {
                printf("\n Dr. Abir Ahmed.\n");
                printf("Specialist : Orthopedics & Traumatology\n");
                printf("Experience : 20 years\n");
                printf("Contact : 019XXXXXXXX\n");  
            }
            else
            {
                printf("\nInvalid doctor choice!\n");
            }
            break;

        case 3:
            printf("\nDiagnosis: Food Poisoning\n");
            printf("  \n Suggested DDoctor \n ");
            printf("1. Dr. Mejba\n");
            printf("2. Dr. Anupom\n");
            printf("3. Dr. Mujahid\n");
            printf("Select a doctor:\n ");
            scanf("%d", &doctorChoice);
            if (doctorChoice == 1)
            {
                printf("\n Dr. Mejba.\n");
                printf("Specialist : Gastroenterology\n");
                printf("Experience : 10 years\n");
                printf("Contact : 017XXXXXXXX\n");
            }
            else if (doctorChoice == 2)
            {
                printf("\n Dr. Anupom.\n");
                printf("Specialist : Gastroenterology & Hepatology\n");
                printf("Experience : 15 years\n");
                printf("Contact : 018XXXXXXXX\n");
            }
            else if (doctorChoice == 3)
            {
                printf("\n Dr. Mujahid.\n");
                printf("Specialist : Gastroenterology & Nutrition\n");
                printf("Experience : 20 years\n");
                printf("Contact : 019XXXXXXXX\n");
            }
            else
            {
                printf("\nInvalid doctor choice!\n");
            }
            break;

        case 4:
            printf("\nDiagnosis: Heart Problem\n");
            printf("  \n Suggested DDoctor \n ");
            printf("1. Dr. Anik\n");
            printf("2. Dr. Rakib\n");
            printf("3. Dr. Fahim\n");
            printf("Select a doctor:\n ");
            scanf("%d", &doctorChoice);
            if (doctorChoice == 1)
            {
                printf("\n Dr. Anik.\n");
                printf("Specialist : Cardiology\n");
                printf("Experience : 10 years\n");
                printf("Contact : 017XXXXXXXX\n");
            }
            else if (doctorChoice == 2)
            {
                printf("\n Dr. Rakib.\n");
                printf("Specialist : Cardiology & Internal Medicine\n");
                printf("Experience : 15 years\n");
                printf("Contact : 018XXXXXXXX\n");
            }
            else if (doctorChoice == 3)
            {
                printf("\n Dr. Fahim.\n");
                printf("Specialist : Cardiology & Surgery\n");
                printf("Experience : 20 years\n");
                printf("Contact : 019XXXXXXXX\n");
            }
            else
            {
                printf("\nInvalid doctor choice!\n");
            }
            break;

        default:
            printf("\nInvalid Choice!\n");
    }
}

void treatment()
{
    int choice;
   
    printf("------Doctor Assigned Successfully.-----\n");
    printf(" Make a Schedule.\n");
    printf(" 1. Consultation Time: 10:00 AM - 12:00 PM\n");
    printf(" 2. Consultation Time: 02:00 PM - 04:00 PM\n");
    printf(" 3. Consultation Time: 05:00 PM - 07:00 PM\n");
    printf("Select a time slot for consultation: ");
    scanf("%d", &choice);
    printf("Medicine Prescribed.\n");
    printf("Patient Under Observation.\n");
}

void bill()
{
    int doctorFee = 500;
    int medicine = 400;
    int test = 600;
    int total;

    total = doctorFee + medicine + test;

    printf("\n----- Hospital Bill -----\n");
    printf("Doctor Fee : %d Tk\n", doctorFee);
    printf("Medicine   : %d Tk\n", medicine);
    printf("Test Fee   : %d Tk\n", test);
    printf("---------------------------\n");
    printf("Total Bill : %d Tk\n", total);
}

void discharge()
{
    int choice;

    printf("\n----- Discharge -----\n");
    printf("Is Patient Recovered?\n");
    printf("1. Yes\n");
    printf("2. No\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("\nPatient Discharged Successfully.\n");
        printf("Take Medicine For 7 Days.\n");
    }
    else
    {
        printf("\nPatient Needs More Treatment.\n");
    }
}