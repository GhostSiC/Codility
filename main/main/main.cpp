#include <iostream>
#include <algorithm>

int solution(vector<int> &A) {

    vector<int> answer;
    vector<int>::iterator it;

    for(auto& i : A){
        it = find(answer.begin(), answer.end(), i);
        if(it != answer.end())
            answer.erase(it);
        else
            answer.push_back(i);
    }

    return answer.front();

}

int main()
{
    std::cout << "Hello World!\n";
}

