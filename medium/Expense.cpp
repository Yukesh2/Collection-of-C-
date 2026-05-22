
#include<iostream>
#include<string>

//reference for the class istream  cin object to the input

std::istream &input = std::cin;

//class for organizing the data types 


class Organized{
	public:
		//monthly income
		int monthly=0;

		//expenses name
	
		std::string expenses;

		//spent here 

		int spent = 0 ;

		//tracking the expenses numbers 
		
		int track=0;

		//calculating 

		float cal=0;

		//to display the monthly income 

		int Original=0;


		//function to take the input from the user 

		void Input(){
			std::cout<<'\n';
			
			std::cout<<"Enter your monthly salary"<<std::endl;
			input>>monthly;
			Original = monthly;
		}

		//function to calcualte the expense and entering the expenses 
		
		void Calculate(){
			std::cout<<"Enter the number of expenses you have"<<std::endl;
			input>>track;
			input.ignore();

			//using for loop to get the expensess and calculate with the total

			for(int i =0 ; i<track;i++){
				std::cout<<'\n'<<'\n'<<'\n';
				std::cout<<"Enter the expense name"<<std::endl;
				std::getline(input,expenses);
				std::cout<<"Enter the amount"<<std::endl;
				input>>spent;
				input.ignore();
				cal = monthly - spent;
				monthly = cal;
				std::cout<<'\n';
				std::cout<<'\n';
				std::cout<<'\n';



		}
		}

		//function to calculate the output of the expenses 

		void Output(){
			std::cout<<'\n'<<'\n';
			std::cout<<"Monthly income: "<< Original <<std::endl;
			std::cout<<"Remaining balance after expenses: " << monthly<<std::endl;

		}
};

//main function 

int main(){

	
	

	Organized hello;

	std::cout<<"1. Enter montly amount"<<std::endl;
	std::cout<<"2. Expenses calculate"<<std::endl;
	std::cout<<"3. Display " <<std::endl;
	std::cout<<"4. exit"<<std::endl;

	//getting the input from the user 
	
	int a ;
	input>>a;
	if(input.fail()){
		input.clear();
		input.ignore(1000,'\n');
	}

	//switching statement 
	while(a!=4){


	switch(a)
	{
		case 1:
			hello.Input();
			break;
		case 2:
			hello.Calculate();
			break;
		case 3:
			hello.Output();
			break;

		default:
			std::cout<<"Something is wrong"<<std::endl;
			break;
	}

	std::cout<<"Select an options"<<std::endl;
	input>>a;
	if(input.fail()){
		input.clear();
		input.ignore(1000,'\n');

	
	

	}


	}
	return 0;

}
