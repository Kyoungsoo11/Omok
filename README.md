# Omok with renju

2022-07-06
-------------
1. Get black turn and white turn
2. Add gotoxy, color function
3. Printing the board(matrix)
4. Determine if winning condition, print ending script and connect to end program

2022-07-07
-------------
1. Visualize board
2. Set a condition to prevent overlap
3. Print scripts about the turns and winner

2022-07-08
-------------
1. Connect menu
2. Print title and menu (ASCII arts)
3. Reset the board After a game ends

2022-07-10
-------------
1. Get stone position by △◁▽▷
2. Print Rules and Credit 

comment
-------------
 타이틀 화면을 출력한 후 메뉴를 출력하고 사용자가 지정하는 메뉴에 따라 해당 화면을 출력하거나 시스템을 종료할 수 있도록 프로그램을 설정했다. 인터페이스는 화면의 중심에 출력자료들을 대칭적으로 배치하는 것에 신경을 썼고 미적인 부분은 사진을 화면에 출력하는 등과 같은 다른 코드를 사용하진 않고 아스키코드를 사용하여 처리했다. 메뉴에는 Play omok, Rules, Credits, Exit Game 이 있고 각각의 메뉴에 해당하는 화면이 출력되고 모든 행동을 수행한 이후에는 다시 메뉴로 돌아오게 프로그램을 구성하였다. 실제 오목을 하는 메뉴인 Play Omok에서는 바둑판 모양을 출력하고 흑의 첫 수는 오목판의 중점에서 이후의 모든 수들은 이전 수가 놓여진 곳에서 방향키를 이용 움직이고 엔터키를 이용하여 돌을 놓는다. 이 때 흑은 렌주룰에 의해 금지되는 위치에는 착수 할 수 없도록 한다.
 이러한 계획 중 흑의 3X3, 4X4, 6목을 오목판에 표시하는 부분을 구현 하지 못하였다. 손 쉽게 프로그래밍 할 수 있는 부분부터 코딩하다보니 코드가 쉬운 부분에 맞추어 정돈되게 짜여졌다. 그러나 렌주율을 설정 할 때 쉽게 코딩 해두었던 이 전 부분들이나 다르게 설정해둔 것 들 때문에 불편한 상황이 생겼다. 이러한 문제는 사실 코드 자체의 문제가 아니라 렌주율의 금수 알고리즘을 짜는 것이 고난이도 이고 C언어 보다 더 고급언어를 사용하면 해결 할 수 있는 부분의 문제 일 수도 있으나, C언어의 학습하고 프로그래밍을 배우는 학생의 관점에서 이렇게 알고리즘이 복잡하게 얽힐 경우 어떠한 방식으로 코딩할 수 있을지에 대해 고민해 볼 수 있어 이러한 문제에 대해 고민해보는 것이 매우 유용한 시간이었다.
