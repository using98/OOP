#pragma once

template<class Type>
class String
{

protected:
	String();
	String( unsigned int size);
	~String();


	bool operator ==(String<Type>);
	bool operator>(String<Type>);

	int top ,maxSize;
	int  i,j, d, col;
private:
	Type *str1;

};

template <class Type>

class StringInterface final : protected String<Type>
{
public:
	StringInterface() : String(){};
	StringInterface(unsigned int size) : String(size){};

	StringInterface<Type> operator +(StringInterface<Type>);
	StringInterface<Type> operator -(Type d);
	StringInterface<Type> operator =(StringInterface<Type>);
	void output_str(Type el);
};