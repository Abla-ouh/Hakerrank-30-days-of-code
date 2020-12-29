
using namespace std;
class MyBook : Book{

    private:
        int price;
    public :
        MyBook(string title_,string author_,int price_) : Book(title_,author_) ,price(price_){}

        virtual void display(){
            cout << "Title: " <<Book::title << "\nAuthor: " << Book::author << "\nPrice: " << price << endl;
        }
    
};
