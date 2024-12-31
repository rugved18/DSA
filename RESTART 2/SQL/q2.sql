-- Write a query to find employees with duplicate email addresses.
select email, count(*)
from employees
group by email
having count(*) >1
