package ex02_value_type;

public class Ex2_valueType {
	public static void main(String[] args) {	// main + ctrl + spacebar 포맷 자동완성
		// 기본자료형
		/*
		 	논리형: boolean ..... 1bit 
		 	문자형: char ........ 2byte 
		 	정수형: byte ........ 1byte	-> -120 ~ 127
		 		  short ....... 2byte	- 크기가 애매해 사용하지않음	-> -32768 ~ 32767
		 		  int ......... 4byte	-> -21억 ~ 21억
		 		  long ........ 8byte 	-> -900경 ~ 900경		주식시장 일하시는 사람들 주로 사용
		 	실수형: float ....... 4.?byte
		 		  double ...... 8.?byte	
		 */
		
		// 변수: 특정 값을 기억시키기 위해 사용
		// 변수 이름 지정의 유의점
		// 1) _를 제외하고 특수문자를 사용할 수 없다.
		// 2) 숫자로 시작되는 이름을 지을 수 없다.
		// 3) 소문자로 시작하되, 한글등은 사용하지 않는다.
		
		// 변수선언의 규칙
		// 1) 자료형 변수명; (선언)	int a;
		// 2) 변수명 = 값; (대입)	a = 10;
		// 3) 자료형 변수명 = 값; (선언과 대입을 동시에: 초기화)
		
		// 논리형(boolean)
		// true, false의 두가지 값만을 저장할 수 있는 자료형 타입
		boolean b = true;
		b = false;
		
		System.out.println("b : "+ b);
		
	}
}
