#include <bits/stdc++.h>

namespace Sequence{
    void testArray(){
        std::array<int, 7> arr{1, 2, 3};
        auto out = [&arr](){
            std::cout << "[";
            /* ? for(int i = 0; i < (int)(arr.size()); ++i){
                std::cout << arr[i] << ", ";
            }*/
            for(auto i : arr){
                std::cout<< i << ", ";
            }
            std::cout << "]\n";
        };
        out();
        std::sort(arr.begin(), arr.end());
        out();
        std::sort(arr.rbegin(), arr.rend());
        out();

        arr.front() = -1, arr.back() = 114514;
        out();

        //�ޥ�refernce
        arr.at(3) = 8, out();

        //���`�ɮ�
        try{
            arr.at(7) = 8, out();
        }catch(...){
            out();
        }

    }

    void testVector(){
        std::vector<int> a(7, -1);
        /*for(int i = 0; i < 8; ++i){
            a.push_back(i);
            std::cout << a.size() << ' ' << a.capacity() << '\n';
        }*/

        auto out = [&a](){
            std::cout << "[";
            for(auto i : a){
                std::cout<< i << ", ";
            }
            std::cout << "]\n";
        };
        out();
        a.clear(), out();
        a.shrink_to_fit();//�վ��@�ˤj�p
        std::cout << a.capacity() << '\n';

        std::vector<int>(20).swap(a);
        std::iota(a.begin(), a.end(), 1), out();

        a.insert(a.begin(), {1, 2, 3, 4, }), out();
        a.erase(std::find(a.begin(), a.end(), 3), a.end()), out();
    }

    void testString(){
        std::string s(20, '*');
        //�᭱�l�[
        s.append("+++++");
        s.append(1, 'F');
        std::cout << s << '\n';

        std::cout << s.substr(1, 4) << '\n';
    }

}

namespace Deque{
    void testDeque(){
        std::deque<int> dq;
        dq.push_front(1);
        dq.pop_front();
    }

    void testQueue(){
        //* [1, 2, 3, 4]
        std::queue<int> Q;
        std::queue<int>().swap(Q);
    }

    void testStack(){
        std::stack<int>S;
    }

    struct node{
        int a, b, c;
    };

    struct cmp{
        bool operator() (const node &a, const node &b){
            return a.c > b.c;
        }
    };

    void testPriorityQueue(){
        std::priority_queue<node, std::vector<node>, cmp> n;
        n.push({1, 2, 3});
    }
}

int main()
{
    //Sequence::testArray();
    //Sequence::testVector();
    //Sequence::testString();

    Deque::testPriorityQueue();
    return 0;
}
