#include "fluid_project/CFluidTimerUI.h"


class Student
{

public:
	static int m_RollNo;
	int m_RollNoUnique;

	Student()
	{
		m_RollNoUnique = m_RollNo++;
	}

	int GetRollNo()
	{

		Student *pCurrStu = this;
		m_RollNo;

		this->m_RollNoUnique;
		return this->m_RollNoUnique;
	}
};

int  Student::m_RollNo=0;

//void myFLTKCallBack()
//{
//	printf("Callback function called");
//
//}


void MyCallBackFunc(int a)
{


}


void YourCallBackFunc(double a)
{


}
//typedef (void)abcdFuncPtr(int) CallBackDemo;

typedef void(*CallbackType)(int);

typedef int(*intCallBackToDouble)(double);

int main()
{
	CFluidTimerUI window;


	intCallBackToDouble pointerToDouble;

	//CFluidTimerUI window2;

	int aa = 5;
	int bb = 25;
//	double * pDbl = &aa;
	int * p = &aa;
	
	*p = 66;

	p = &bb;
	*p = 66;



	/*CallbackType clbkObj;
	//clbkObj = &YourCallBackFunc;

	clbkObj(5);

	clbkObj = &MyCallBackFunc;

	clbkObj(25);

	*/


	for (int i = 0; i < 5; i++)
	{
		static int something = 0;

		int a = something;

		++something;
	}
	//Student::m_RollNo = 55;

	Student obj1, obj2;

	obj1.GetRollNo();
	obj2.GetRollNo();


	window.m_win_timer->show();
	return Fl::run();
}