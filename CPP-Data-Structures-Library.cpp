#include <iostream>
#include "DS/clsDynamicArray.h"

using namespace std;

int main()
{
    cout << "\n\t\t--- 📦 Testing Custom Dynamic Array ---\n\n";

    // إنشاء مصفوفة ديناميكية بحجم 5 وتحديد نوع البيانات كـ int
    clsDynamicArray <int> MyArray(5);

    // تعبئة المصفوفة بالبيانات
    MyArray.SetItem(0, 10);
    MyArray.SetItem(1, 20);
    MyArray.SetItem(2, 30);
    MyArray.SetItem(3, 40);
    MyArray.SetItem(4, 50);

    cout << "Original Array:\n";
    MyArray.PrintList();

    cout << "\n-----------------------------------\n";
    cout << "1. Testing InsertAt(Index 2, Value 500):\n";
    MyArray.InsertAt(2, 500);
    MyArray.PrintList();

    cout << "\n-----------------------------------\n";
    cout << "2. Testing DeleteItemAt(Index 1):\n";
    MyArray.DeleteItemAt(1);
    MyArray.PrintList();

    cout << "\n-----------------------------------\n";
    cout << "3. Testing Reverse():\n";
    MyArray.Reverse();
    MyArray.PrintList();

    cout << "\n-----------------------------------\n";
    cout << "Array Size: " << MyArray.Size() << "\n";

    system("pause>0");
    return 0;
}