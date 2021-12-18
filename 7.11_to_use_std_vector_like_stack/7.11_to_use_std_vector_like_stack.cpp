#include <iostream>
#include <vector>

#define endl '\n'
using namespace std;

void printStack(const vector<int>& stack);

int main()
{
	vector<int> v{ 1,2,3 }; 	//int *v_ptr = new int[3]{ 1,2,3 };

	// 내부에서 사용되는 new와 delete을 적게 사용하도록 만들어짐
	// size(capacity 중 몇개만 사용), capacity(할당된 최대 용량 - 실제 가지고 있는 용량)
	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << endl;
	cout << endl;


	v.resize(10);
	//for (unsigned int i = 0; i < size(); i++)
	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;
	cout << endl;


	v.resize(2);
	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;
	cout << endl;

	// resize() 때문에 error
	//cout << v.at(2) << endl;
	//cout << v[2] << endl;

	// 강제로 데이터 가져오기
	int* ptr = v.data();
	cout << ptr[2] << endl;
	cout << endl;


	// 메모리의 용량을 미리 확보해 놓겠다는 의미
	// 뒤에 원소가 추가가 될 때 reserve에 남아 있는 용량이 많으면 추가적인 작업이 줄어들고 속도가 빨라짐
	v.reserve(1024);	

	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;
	cout << endl;


	/* std::vector를 스택처럼 사용하기 */
	vector<int> stack;
	
	// 작은 프로그램에서는 상관없지만 하면 속도측면에서 좋음 단, 메모리 낭비가 있을 수 있으니 reserve()를 정할 때 주의
	//stack.reserve(1024);	

	// push_back() and pop_back()
	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);
	
	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);


	return 0;
}

void printStack(const vector<int> &stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}