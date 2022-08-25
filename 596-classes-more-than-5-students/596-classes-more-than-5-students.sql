# Write your MySQL query statement below
SELECT class
from  Courses
GROUP BY 1 HAVING  count(student)>=5
