// Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;
void _bar(const char* str, int stk){
  for (int j = 0; j < stk; ++j) cout << "____";
  cout << str;
}
void solve(int stk)
{
  _bar("\"����Լ��� ������?\"\n", stk);
  if (stk == n) _bar("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n", stk);
  else{
    _bar("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n", stk);
    _bar("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n", stk);
    _bar("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n", stk);
    solve(stk + 1);
  }
  _bar("��� �亯�Ͽ���.\n", stk);
}
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
  solve(0);
}