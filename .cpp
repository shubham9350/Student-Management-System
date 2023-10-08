#include <iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total;

void enter()
{
    int choice;
    cout << endl;
    cout << "How many Students do you want to Enter: ";
    cin >> choice;
    if (total == 0)
    {

        total = total + choice;
        for (int i = 0; i < choice; i++)
        {
            cout << "Enter Data of Student: " << i + 1;
            cout << endl;
            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "Enter rollno: ";
            cin >> arr2[i];
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "Enter contact: ";
            cin >> arr5[i];
            cout << endl;
        }
    }

    else
    {

        for (int i = total; i < total + choice; i++)
        {
            cout << "Enter data of student: " << i + 1 << endl;
            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "Enter rollno: ";
            cin >> arr2[i];
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "Enter contact: ";
            cin >> arr5[i];
            cout << endl;
        }
    }
}
void show()
{
    cout << endl;

    for (int i = 0; i < total; i++)
    {
        cout << "Data of student: " << i + 1 << endl;
        cout << "Name: " << arr1[i] << endl;
        cout << "Rollno: " << arr2[i] << endl;
        cout << "Course: " << arr3[i] << endl;
        cout << "Class: " << arr4[i] << endl;
        cout << "Contact: " << arr5[i] << endl;
        cout << endl;
    }
}
void search()
{
    cout << endl;
    string rollno;
    cout << "Enter Rollno of Student which you want to Search: ";
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << "Data of student: " << i + 1;
            cout << endl;
            cout << "Name: " << arr1[i] << endl;
            cout << "Rollno: " << arr2[i] << endl;
            cout << "Course: " << arr3[i] << endl;
            cout << "Class: " << arr4[i] << endl;
            cout << "Contact: " << arr5[i] << endl;
            cout << endl;
        }
    }
}

void update()
{
    cout << endl;
    string rollno;
    cout << "Enter Rollno of student which you want to Update: ";
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << "Previous Data of Student: " << i + 1 << endl;
            cout << "Name: " << arr1[i] << endl;
            cout << "Rollno: " << arr2[i] << endl;
            cout << "Course: " << arr3[i] << endl;
            cout << "Class: " << arr4[i] << endl;
            cout << "Contact: " << arr5[i] << endl;
            cout << endl;
            cout << "Enter New Data of Student: " << i + 1 << endl;
            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "Enter rollno: ";
            cin >> arr2[i];
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "Enter contact: ";
            cin >> arr5[i];
            cout << endl;
        }
    }
}

void deleterecord()
{
    cout << endl;
    int a;
    cout << "Rress 1 to Delete Full Record" << endl;
    cout << "Press 2 to Delete Specific Record" << endl;
    cin >> a;
    if (a == 1)
    {
        total = 0;
        cout << endl;
        cout << "ALL RECORD IS DELETED !!!";
    }

    else
    {
        string rollno;
        cout << "Enter Roll which you want to Delete" << endl;
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                for (int j = i; j < total; j++)
                {
                    arr1[j] = arr1[j + 1];
                    arr2[j] = arr2[j + 1];
                    arr3[j] = arr3[j + 1];
                    arr4[j] = arr4[j + 1];
                    arr5[j] = arr5[j + 1];
                }
                total--;
                cout << "Required Record is Deleted..!!" << endl;
            }
        }
    }
}

int main()
{
    int value;
    cout << " STUDENT MANAGEMENT SYSTEM " << endl;
    cout << endl;
    while (true)
    {
        cout << "Press 1 to Enter Data" << endl;
        cout << "Press 2 to Show Data" << endl;
        cout << "Press 3 to Search data" << endl;
        cout << "Press 4 to Update Data" << endl;
        cout << "Press 5 to Delete Data" << endl;
        cout << "Press 6 to Exit" << endl;

        cin >> value;
        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleterecord();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }

    return 0;
}