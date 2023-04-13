//#include <stdio.h> // 밑에 printf라는 함수를 사용하기 위해서 stdio.h 라는 문서를 포함해달라고 요청함.
//
//int main() 
//{
//	//float minusFA = -3.4E-38; // %f를 써서 출력 // 부동 소수점수 방식으로 값을 입력함
//	//float plusFA = 3.4E38; // %f를 써서 출력
//
//	//double minusDA = -1.79769e-308; // %lf를 써서 출력
//	//double plusDA = 1.79769e308; // %lf를 써서 출력
//
//	//printf("minusFA = %.42f \nplusFA = %.6f \n", minusFA, plusFA);
//	//                   // .42를 붙인건 소숫점 42자리까지 출력하라는 의미
//	//printf("minusDA = %.320lf \nplusDA = %.6lf \n", minusDA, plusDA);
//
//
//	//float a = 1.2345f; // f를 리터럴(literal)이라고 부르며 저걸 붙여야 제대로 출력됨
//	//double b = 3.45434; // 고정 소수점수 방식 으로 값을 입력한것
//
//	//printf("a = %f, b = %lf \n", a, b); // %f와 %lf를 왼쪽과 같은 형식으로 사용하면 된다.
//
//	//char H; // 문자형 저장 변수들을 만듦
//	//unsigned char e; // 문자형(접미사 unsigned이 붙음) 저장변수를 만듦
//	//char l;
//	//char o;
//	//char W;
//	//char r;
//	//char d;
//
//	//H = 72; // 각 변수에 Ascii 코드값을 저장
//	//e = 101;
//	//l = 108;
//	//o = 111;
//	//W = 87;
//	//r = 114;
//	//d = 100;
//
//
//	//printf("%c%c%c%c%c %c%c%c%c%c \n", H, e, l, l, o, W, o, r, l, d);
//	
//	// 위의 방식으로 Hello World 라는 문자열을 출력해보세요.
//	char H;
//	char e;
//	char l;
//	char o;
//	char W;
//	char r;
//	char d;
//
//	H = 72;
//	e = 101;
//	l = 108;
//	o = 111;
//	W = 87;
//	r = 114;
//	d = 100;
//
//	printf("%c%c%c%c%c %c%c%c%c%c \n", H, e, l, l, o, W, o, r, l, d);
//
//	return 0;
//}