/*
 예제 2.1
 Arduino에서 컴퓨터로 변수와 문자열 전송하기
 */

int num = 0;    // -32768~32767 범위의 변수 number 설정, 초기값은 0

void setup() {
    // 9600bps로 시리얼 통신 설정
    Serial.begin(9600);
}

void loop() {
  Serial.print(num);  // number 변수값 출력
  Serial.println(" msec");  // " sec"를 출력 후 줄 바꿈
  delay(200);  // 1초동안 지연시킨다.
  num += 200;  // number 변수값을 하나 증가시킨다.
  if (num > 5000)
  {
  num = 0;
  }  
}
