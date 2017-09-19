#include <vector>

class calcBase{
    private:
        double (*func)(std::vector<double> input);
        double (*diffFunc)(std::vector<double> input);
    public:
        void setup(double function(std::vector<double> input), double diffFunction(std::vector<double> input));
        double forword(std::vector<double> input);
        double backword(std::vector<double> input);
};

void calcBase::setup(double function(std::vector<double> input), double diffFunction(std::vector<double> input)){
    this->func = function;
    this->diffFunc = diffFunction;
}

double calcBase::forword(std::vector<double> input){
    return (this->calcBase::func)(input);
}

double calcBase::backword(std::vector<double> input){
    return (this->calcBase::diffFunc)(input);
};