#include <iostream>
#include <string>

using namespace std;

void prompt_name(string &);
void greet_player(const string &);

template <class T1, class T2>
void print_menu();

template <class T1, class T2>
void prompt_nums(T1 &, T2 &);

template <class T1, class T2>
T1 addition(const T1 &, const T2 &);

template <class T1, class T2>
T1 subtraction(const T1 &, const T2 &);

template <class T1>
void multiplication(const T1 &, const T1 &, T1 &);

template <class T1, class T2>
void print_answer(const T1&, const T2&, const T1&, const char&);

int main(int argc, char* argv[]) {
    if (argc == 2 && (string)argv[1] == "test") {
        // test();
        return 0;
    }
    string pname;

    prompt_name(pname);
    greet_player(pname);

    print_menu<int, int>();


    return 0;
}

template <class T1, class T2>
T1 addition(const T1 &num1, const T2 &num2) {
    T1 answer;
    answer = num1 + num2;
    return answer;
}

template <class T1, class T2>
T1 subtraction(const T1 &num1, const T2 &num2) {
    return num1 - num2;
}

template <class T1>
void multiplication(const T1 &num1, const T1 &num2, T1 &mul_ans) {
    mul_ans = num1*num2;
}

template <class T1, class T2>
void print_answer(const T1 &num1, const T2 &num2, const T1 &answer, const char &opp) {
    cout << "Your calculation is: ";
    cout << num1 << " " << opp << " " << num2 << " = " << answer << endl;
}

template <class T1, class T2>
void prompt_nums(T1 &num1, T2 &num2) {
    cout << "Please enter 2 numbers spearated by a space: ";
    cin >> num1 >> num2;
    // cout << "DEBUG: " << num1 << " " << num2 << endl;
}

template <class type1, class T2>
void print_menu() {
    int selection = 0;
    // int num1, num2;
    type1 num1;
    T2 num2;
    // prompt_nums<int, int>(num1, num2);
    prompt_nums<type1, T2>(num1, num2);
    cout << "1: Addition\n2: Subtraction\n3: Multiplication" << endl;
    cout << "Please enter a selection: ";
    cin >> selection;
    switch(selection) {
        case 1: {
            type1 add_num;
            add_num = num1 + num2;
            // cout << "DEBUG: " << add_num << endl;
            // add_num = addition<int, int>(num1, num2);
            // cout << num1 << " + " << num2 << " = " << add_num << endl;
            print_answer<type1, T2>(num1, num2, add_num, '+');
            break;
        }
        case 2: {
            type1 sub_num;
            sub_num = subtraction<type1, T2>(num1, num2);
            // cout << num1 << " - " << num2 << " = " << sub_num << endl;
            print_answer<type1, T2>(num1, num2, sub_num, '-');
            break;
        }
        case 3: {
            type1 multi_ans;
            multiplication<type1>(num1, num2, multi_ans);
            // cout << num1 << " * " << num2 << " = " << multi_ans << endl;
            print_answer<type1, T2>(num1, num2, multi_ans, '*');
            break;
        }
        default: {
            cout << "Not a valid entry" << endl;
            break;
        }
    }
}

void prompt_name(string &name) {
    cout << "Please enter your first name: ";
    cin >> name;
}

void greet_player(const string &name) {
    cout << "Welcome " << name << " to our program!" << endl;
    cout << "This will calculate 2 numbers." << endl;
}