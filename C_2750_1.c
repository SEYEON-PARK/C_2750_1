/*
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, A[1000], B[1000], temp=-1000, j=0; // 변수 및 배열 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 1씩 늘어나며 반복
        scanf("%d", &A[i]); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<2001;i++, temp++) // i가 0부터 2001보다 작을 때까지 1씩 늘어나고, temp도 1씩 늘어나며 반복 
    {
        for(int k=0;k<N;k++) // k가 0부터 N보다 작을 때까지 1씩 늘어나며 반복
        {
            if(A[k]==temp) // 만약 A[k]가 temp와 같다면
            {
                B[j]=A[k]; // B[j]에 A[k] 대입하기
                j++; // j에 1 더하기
                break; // 가장 가까운 반복문 빠져나가기
            }
        }
    }
    
    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 1씩 늘어나며 반복
    {
        printf("%d\n", B[i]); // 결과 출력하기
    }
    
    return 0;
}
