# Write your MySQL query statement below
select w.id
from Weather w , Weather wc

where DATEDIFF(w.recordDate,wc.recordDate)=1 and  w.temperature> wc.temperature;