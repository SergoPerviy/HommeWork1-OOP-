#include <iostream>
#include <string>

/*
Задание
Создайте приложение "Телефонная книга". В нём должен быть реализован класс Contact, который хранит контактные данные какого-либо человека.
В классе должны быть реализованы конструктор по умолчанию,параметрический конструктор, геттеры и сеттеры полей, а также деструктор класса.
*/

class Contact {
private:
    std::string Name;
    std::string Phone;
    std::string Mail;
    std::string Memo;

public:
    // Конструктор по умолчанию
    Contact() : Name("Неизвестно"), Phone("Неизвестно"), Mail("Неизвестно"), Memo("Неизвестно") {}

    // Параметрический конструктор
    Contact(std::string Name, std::string Phone, std::string Mail, std::string Memo) : Name(Name), Phone(Phone), Mail(Mail), Memo(Memo) {}

    // Геттеры
    std::string getName() { return Name; }
    std::string getPhone() { return Phone; }
    std::string getMail() { return Mail; }
    std::string getMemo() { return Memo; }

    // Сеттеры
    void setName(std::string Name) { this->Name = Name; }
    void setPhone(std::string Phone) { this->Phone = Phone; }
    void setMail(std::string Mail) { this->Mail = Mail; }
    void setMemo(std::string Memo) { this->Memo = Memo; }

    // Деструктор
    ~Contact() {}
};

int main() {

    setlocale(LC_ALL, "Russian");

    //Демонстрация работы параметрического конструктора
    Contact contact1("Иванов Иван Иванович", "+7(900)123-45-67", "mail@mail.com", "Чувак из бухгалтерии"); 

    //Демонстрация работы конструктора по умолчанию
    Contact contact2;

    //Демонстрация работы геттеров
    std::cout << "Имя контакта: " << contact1.getName() << "\n" << "Телефон: " << contact1.getPhone() << "\n"
        << "Почта: " << contact1.getMail() << "\n" << "Замтека: " << contact1.getMemo() << std::endl;;
    std::cout << "\n**********************************\n\n";
    std::cout << "Имя контакта: " << contact2.getName() << "\n" << "Телефон: " << contact2.getPhone() << "\n"
        << "Почта: " << contact2.getMail() << "\n" << "Замтека: " << contact2.getMemo() << std::endl;
    std::cout << "\n**********************************\n\n";

    //Демонстрация работы сеттера
    contact2.setName("Петров Петр Петрович");
    contact2.setPhone("+7(999)001-01-01");
    contact2.setMail("petro@beretta.com");
    contact2.setMemo("Главный на работе");
    
    std::cout << "Имя контакта: " << contact2.getName() << "\n" << "Телефон: " << contact2.getPhone() << "\n"
        << "Почта: " << contact2.getMail() << "\n" << "Замтека: " << contact2.getMemo() << std::endl;

    return 0;
}