template <typename T>
class list {
	struct Data{
		T key;
		Data *next;
	}*pData;

	list() {
		pData = nullptr;
	}

	bool empty() {
		return pData == nullptr;
	}

	bool full() {
		try {
			Data *temp = new Data;
		}
		catch () {
			return true;
		}
		return false;
	}

	void push(T elem) {
		try {
			Data *temp = new Data;
		}
		catch () {
			throw "list is full";
		}
		while (temp != nullptr)
			temp = temp->next;


	}

	T pop() {
		if (empty())
			throw "list is empty";
		T temp = pData->key;
		Data *p = pData->next;
		delete pData;
		pData = p;
		return temp;
	}
};