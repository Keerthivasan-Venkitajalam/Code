class Overload{
    int alpha, beta, gamma;
    double result;
    Overload(){
        alpha = beta = gamma = 10;
        result = 0;
    }
    Overload(int a, int b, int c){
        alpha = a;
        beta = b;
        gamma = c;
        result = 0;
    }
    double test(char ch){
        if(ch == '+'){
            result = alpha + beta + gamma;
        }
        else if(ch == '*'){
            result = alpha * beta * gamma;
        }
        return result;
        }
    double test(){
        result = alpha - beta - gamma;
        return result;
    }
}

