# bubble_sort

Описание сортировки пузырьком:
  Самая медленная и простая сортировка, используется в учебных целях

Краткий псевдокод:
  Берем массив, сохраняем его длину, проходимся циклом по его длинне -1 и сравниваем рядом стоящие элементы, наибольший двигаем вправо.
  Продолжаем так до тех пор, пока не цикл не пройдет полный проход и не убедится, что все числа стоят на своих местах.

Псевдокод:
функция сортировка_пузырьком (массив имя_массива) 
начало
  n = длинна(имя_массива)
    для i от 0 до n-1 
    начало
      для j от 0 до n-i-2 
      начало
        если имя_массива[j] > имя_массива[j+1]
        начало
          t = имя_массива[j]
          имя_массива[j] = имя_массива[j+1]
          имя_массива[j+1] = t
        конец для если
      конец для j
    конец для i
конец функции
