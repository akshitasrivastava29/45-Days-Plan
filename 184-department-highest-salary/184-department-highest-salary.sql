# Write your MySQL query statement below


# SELECT t1.Department,t1.Employee,t1.salary
# FROM (SELECT d.name as Department,e.name as Employee,e.salary as salary,RANK() OVER(PARTITION BY d.id ORDER BY salary desc ) as RK 
# FROM DEPARTMENT as d
# JOIN  Employee as e ON  e.departmentId=d.id) as t1 where rk=1

SELECT d.name Department,e.name Employee,e.salary salary
FROM  Employee e JOIN Department d
ON e.departmentId=d.id
WHERE (salary,departmentId)IN (select max(salary),departmentId from Employee group by departmentId);

