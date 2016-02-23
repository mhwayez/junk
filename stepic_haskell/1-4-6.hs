--Вспомним функцию discount, которая возвращала итоговую сумму покупки с возможной скидкой. В качестве параметров ей передавались сумма без скидки sum, процент скидки proc, причем скидка начислялась, если переданная сумма превышает порог limit. Все эти параметры, как и возвращаемое значение, можно хранить в типе Double. (Здесь следует отметить, что в реальных финансовых приложениях использовать тип с плавающей точкой для хранения подобной информации не рекомендуется.) Тип функции можно задать в файле исходного кода вместе с ее определением:

--discount :: Double -> Double -> Double -> Double
--discount limit proc sum = if sum >= limit then sum * (100 - proc) / 100 else sum

--Отметим, что объявление типа необязательно, хотя часто рекомендуется в качестве документации. Его обычно располагают перед определением функции, хотя это объявление верхнего уровня можно расположить в любом месте файла с исходным кодом.

--Запишите тип функции standardDiscount, определенной как частичное применение функции discount:

--standardDiscount :: ???
--standardDiscount = discount 1000 5

discount :: Double -> Double -> Double -> Double
discount limit proc sum = if sum >= limit then sum * (100 - proc) / 100 else sum

standardDiscount :: Double -> Double
standardDiscount = discount 1000 5