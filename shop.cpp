#include <iostream>
using namespace std;

class shop
{
private:
    string itemName[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setData(void);
    void display(void);
};

void shop ::setData(void)
{
    int num;
    cout << "Enter the number of items ";
    cin >> num;
    for (counter = 0; counter < num; counter++)
    {
        cout << "Enter the name of the item no. " << counter + 1 << endl;
        cin >> itemName[counter];
        cout << "Enter the Price of the item no. " << counter + 1 << endl;
        cin >> itemPrice[counter];
    }
}

void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item " << itemName[i] << " is Rs." << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setData();
    dukaan.display();
    return 0;
}
