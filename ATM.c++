#include <iostream>
using namespace std;
// المتغيرات
float balance = 1000;
float deposit = 0;
float withdDraw = 0;
int choise = 0;
int passward = 1234;

// نهايه المتغيرات
//  بدايه قايمه العرض
void show()

{
    cout << "*****Menu*****\n";
    cout << "1: balance\n";   // المزانيه اللي في حسابك
    cout << "2: withdDraw\n"; // لو عاوز تسحب فلوس
    cout << "3: deposit\n";   // لو عاوز تودع فلوس
    cout << "4: exist\n";     // لو عاوز تخرج برا ATM
    cout << "************\n";
}
// نهايه قايمه العرض
// بدايه الشغل الحقيقي

void process()
{
    cout << "enter your passward\n";
    cin >> passward;
    // هنبدا نعمل جمله للتكرار علشان لو كلمه السر غلط
    do
    {

        if (passward == 0000)
        {

            cout << "enter your choise\n";
            cin >> choise;

            // دي الحاجات اللي هتتعمل بعد كلمه السر لو طلعت صح
            switch (choise)
            {

            case 1:
                cout << "your balance is" << balance << endl;
                break;
            // الحاله الاولي اللي هتظهر علي الشاشه المبلغ اللي في حسابك
            case 2:
                cout << "NOT: your balance is " << balance << endl;
                cout << "enter your amount  \n";
                cin >> withdDraw;
                // لو عاوز تسحب فلوس
                if (withdDraw > balance)
                {
                    cout << "sorry you cannot withdDraw this amount\n";
                    // هيظهر الجمله دي لو انت ممعكش الملغ اللي انت دخلته
                }
                else
                {
                    balance -= withdDraw;
                    cout << "NOW: your balance is : " << balance << endl;
                    // هيخصم المبلغ دا من حسابك طبعا لو المبلغ ممكن يتسحب
                }

                break;
            // الحله 3 دي  لو انت عاوز تودع فلوس
            case 3:
                cout << "your current balance is : " << balance << endl;
                cout << "enter the deposit money  :    \n";
                cin >> deposit;
                balance += deposit;
                cout << "your new palance is : " << balance << endl;
                break;
            // الحاله 4 دي لو انت عاوز تخرج برا ATM
            case 4:
                cout << "thank you\n";
                break;
            }
        }
        // كتبنا الاكواد دي كلها في حاله انت دخلت كلمه السر غلط
        else
        {
            char option = 'o';
            cout << "your passward is not correct ; Do you want try again ? ; enter [Y] ofr yes ' enter [N] ofr no\n ";
            cin >> option;
            if (option == 'Y' || option == 'y')
            {
                cout << "enter your passward again\n";
                cin >> passward;
            }
            else
            {
                // اختارنا رقم 4 علشان هيا بتاعه الخروج من البرنامج
                choise = 4;
            }
        }
    } while (choise < 4);
}
// استعملنا جمله do whileعلشان لو في عمليات تاتيه عاوز اعملها

// الشغل كله هنا

int main()
{
    show();
    process();
    return 0;
}