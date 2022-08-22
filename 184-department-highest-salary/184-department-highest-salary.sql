# Write your MySQL query statement below
select Department.name as Department,Employee.name as Employee,Employee.salary as Salary 
from Employee join Department on Employee.departmentid=department.id 
where (employee.departmentid,salary)in 
(select departmentid,max(salary) from employee group by departmentid);