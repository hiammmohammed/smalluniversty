#include <iostream>
using namespace std;

class Course{
		private :
			string course_name;
			string course_code;
			int course_hours;
			vector<string> prerequisites;
			professor professor_name;
			vector<Student> student_name;
			
		public :
				//defult constructor
				Course (){
				course_name="";
				course_code = "";
				course_hours = 0;
			}
			
				//parameterized constractor
				Course (string name, int code, int hour, vector<string> prereq, professor prof_name, vector<Student> stud_name){
				course_name = name;
				course_code = code;
				course_hours = hour;
				prerequisites = prereq;
				professor_name = prof_name;
				student_name = stud_name;
			}
			
				//setter
			void set_name(string name) {
	        	course_name = name;
	    	}
			void set_code(int code){
				course_code = code;
			}
			void set_hours(int hour){
				course_hours = hour;
			}
			void set_prereq(vector<string> prereq){
				prerequisites = prereq;
			}
			void set_prof_name(professor prof_name){
				professor_name = prof_name;
			}
			void set_stud_name(vector<Student> student_name) {
	        	student_name = student_name;
	    	}
			
				//getter
			string get_name(){
	        	return course_name;
	    	}
			string get_code(int code){
				return course_code ;
			}
			int get_hours(int hour){
				return course_hours ;
			}
			vector<string> get_prereq(string prereq){
				return prerequisites ;
			}
			professor get_prof_name(string prof_name){
				return professor_name ;
			}
			vector<Student> get_stud_name() {
	        return student_name;
	    	}
			
	};
	
	class Singleton{
		
		privite :
	    static Singleton *instancePtr;
	    Singleton(){}
	    
		public:
	    Singleton(const Singleton& obj) = delete;
	    static Singleton *getInstance(){
	        if(instancePtr == NULL){
	            instancePtr = new Singleton();
	            return instancePtr;
	        }
	        
	            return instancePtr;
	        
	    
		};
		Singleton* Singleton::instancePtr = NULL;
		
	
	int main(){
		
	}
