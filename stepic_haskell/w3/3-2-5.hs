--Напишите реализацию функции qsort. Функция qsort должная принимать на вход список элементов и сортировать его в порядке возрастания с помощью сортировки Хоара: для какого-то элемента x изначального списка (обычно выбирают первый) делить список на элементы меньше и не меньше x, и потом запускаться рекурсивно на обеих частях.

--GHCi> qsort [1,3,2,5]
--[1,2,3,5]

--Разрешается использовать только функции, доступные из библиотеки Prelude.

qsort :: Ord a => [a] -> [a]
qsort [] = []
qsort (x:xs) = qsort [y|y<-xs, y<=x] ++ [x] ++ qsort [y|y<-xs, y>x]