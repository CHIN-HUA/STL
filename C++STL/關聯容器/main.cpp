#include <bits/stdc++.h>

namespace Set{
    void testSet(){
        std::set<int> S{2, 1, 1, 1, 10, 2, 017, -1, 2, };
        auto out = [&S](){
            std::cout << "[";
            for(int i : S){
                std::cout << i << ", ";
                std::cout << "]\n";
            }
        };
            out();

        // ? auto [_, x] = S.insert(1);
        auto it = S.find(2);
        puts(it == S.end() ? "NOT" : "Yes");

        S.erase(2), out();

        std::cout << "\n";

        it = S.begin();
        std::advance(it, 2);
        S.erase(S.begin(), it), out();
    }

    /*struct cmp{
        bool operator() (const std::pair<int, int> &a, const std::pair<int, int> &b) const
        return 1LL * a.first * a.second > 1LL * b.first * b.second;
    };*/

    /*void testSet2(){
        std::set<std::pair<int, int>, cmp> S;
    }*/

    void testMultiSet(){

        std::multiset<int, std::greater<>> ms{1, 2, 3, 3, 3, 3, 5};
        std::cout << ms.count(3) << '\n';

        auto [x, y] = ms.equal_range(3);
        ms.erase(x, y);
        std::cout << ms.count(3) << '\n';
    }

    /*void testMerge(){
        std::set<int> S{1, 2, 3, 4};
        S.merge(std::set<int>{5, -1});
        std::cout << S.size() << '\n';
    }*/
}



int main()
{
   //Set::testSet();

   //Set::testMultiSet();

   //Set::testMerge();
    return 0;
}
