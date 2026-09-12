#include <iostream>
#include <string>
#include <cmath> 

int displayAnswer(double ans);
int displayAnswerPytha(double ans);
double numRound(double num, double ans);
int errorMessage(std::string errorText);

int main() {
    std::string errorText = "syntax error";
    std::string whichRoot;
    double num;//for roots
    char operation;
    double num1;
    double num2;
    double ans;
    double a;
    double b;
    std::string root;
    //which type of function
    std::cout << "roots (can either be square or cubic root) or round or trigonomic functions(trig) or hyperbolic functions(hyper) or hypotenuse(hyp) or simple(s): ";
    std::getline(std::cin, root);
    if (root == "roots") {
        std::cout << "square root(sqr) or cubic root(cbr)";
        std::cin >> whichRoot;

        if (whichRoot == "sqr") { //for square root
            std::cout << "number: ";
            std::cin >> num;
            ans = sqrt(num);
            displayAnswer(ans);
        }
        if (whichRoot == "cbr") { //for cubic root
            std::cout << "number: ";
            std::cin >> num;
            ans = cbrt(num);
            displayAnswer(ans);
        }
    }
    
    else if (root == "trig") { //trigonomic functions start
        char sinTanCos;
        std::cout << "Sin(s) or Tan(t) or Cos(c) or Acos(a) or Asin(b) or Atan(d): ";
        std::cin >> sinTanCos;

        switch (sinTanCos) {
        case 's':
            std::cout << "number: ";
            std::cin >> num;
            ans = sin(num);
            displayAnswer(ans);
            break;
        case 't':
            std::cout << "number: ";
            std::cin >> num;
            ans = tan(num);
            displayAnswer(ans);
            break;
        case 'c':
            std::cout << "number: ";
            std::cin >> num;
            ans = cos(ans);
            displayAnswer(ans);
            break;
        case 'a':
            std::cout << "number: ";
            std::cin >> num;
            ans = acos(num);
            displayAnswer(ans);
            break;
        case 'b':
            std::cout << "number: ";
            std::cin >> num;
            ans = asin(num);
            displayAnswer(ans);
            break;
        case 'd':
            std::cout << "number: ";
            std::cin >> num;
            ans = atan(num);
            displayAnswer(ans);
            break;
        default:
            errorMessage(errorText);
            break;
        }

    }//trigonomic functions end

    else if (root == "hyper") { //hyperbolic functions start
        char hyperbolicFunc;
        std::cout << "cosh(c), sinh(s), tanh(t), acosh(a), asinh(b) or atanh(c): ";
        std::cin >> hyperbolicFunc;

        switch (hyperbolicFunc) {
            case 'c':
                std::cout << "number: ";
                std::cin >> num;
                ans = cosh(num);
                displayAnswer(ans);
                break;
            case 's':
                std::cout << "number: ";
                std::cin >> num;
                ans = sinh(num);
                displayAnswer(ans);
                break;
        }

    }//hyperbolic functions end
    

    else if (root == "hyp") {
        std::cout << "a: ";
        std::cin >> a;
        std::cout << "b: ";
        std::cin >> b;
        ans = hypot(a, b);
        displayAnswerPytha(ans);
    }
    
    else if (root == "s") { //normal calculator start
        
        std::cout << "number1: " << '\n';
        std::cin >> num1;

        std::cout << "operation(* + / p %): " << '\n';
        std::cin >> operation;

        std::cout << "number2: \n";
        std::cin >> num2;


        switch (operation) {
        case '*':
            ans = num1 * num2;
            displayAnswer(ans);
            break;
        case '+':
            ans = num1 + num2;
            displayAnswer(ans);
            break;
        case 'p':
            ans = pow(num1, num2);
            displayAnswer(ans);
            break;
        case '/':
            ans = num1 / num2;
            displayAnswer(ans);
            break;
        case '%':
            ans = remainder(num1, num2);
            displayAnswer(ans);
            break;
        default:
            errorMessage(errorText);
            break;
        }

        
        

    }//root end

    else if (root == "round") {
        numRound(num, ans);
    }
    
    else {
        errorMessage(errorText);
    }

    return 0;
} //main end

//display the ans variable
int displayAnswer(double ans) {
    std::cout << "answer: " << ans;
    return 0;
}

//display the ans variable while using pythagorean theorem
int displayAnswerPytha(double ans) {
    std::cout << "c = " << ans;
    return 0;
}

//round num
double numRound(double num, double ans) {
    std::cout << "number: ";
    std::cin >> num;
    ans = nearbyint(num);
    displayAnswer(ans);
    return 0;
}

//display syntax error/error
int errorMessage(std::string errorText) {
    std::cout << errorText;
    return 0;
}



