# 숫자 카드 게임

```py
n, m = map(int, input().split())

result = 0

for i in range(n):
    data = list(map(int, input().split()))

    min_value = min(data)

    result = max(result, min_value)

print(result) # 최종 답안 출력

```
