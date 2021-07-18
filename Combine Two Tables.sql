# Write your MySQL query statement below

select p.FirstName, p.LastName, a.City, a.State
from person as p
left join address as a 
on p.personid = a.personid;
