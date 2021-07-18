# Write your MySQL query statement below

select emp.name as Employee
from employee as emp, employee as manager
where emp.managerid = manager.id and emp.salary > manager.salary;
