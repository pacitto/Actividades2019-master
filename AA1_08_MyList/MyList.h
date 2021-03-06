class MyList {
	struct node {

		int info;
		node* next;
		node* previous; 

		node() {
			info = 0;
			next = nullptr;
			previous = nullptr; 
		}
		node(int _info, node* _next, node* _previous) {
			info = _info;
			next = _next;
			previous = _previous; 
		}
	};
private:
	node* last;
	node* first; 
	int totalElements; 
public:
	MyList();
	MyList(const MyList& list);
	~MyList();

	void push_back(int value);
	void pop_back(); 
	void push_front(int value);
	void pop_front(); 
	int front();
	int back();
	int getElementPos(int position);
	int maxElement();
	int minElement();
	void insert(int value, int position);
	void deletePosition(int position);
	void deleteAll(int value);
	void deleteDuplicates();
	void change(); 
	int getNumElements(); 
	bool empty(); 

};