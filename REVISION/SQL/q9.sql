-- Write a query to find employees with the  highest salary.
select id, first_name
from employees
order by salary DESC
limit 1 OFFSET 0

-- Write a query to find employees with the SECOND  highest salary.
select id, first_name
from employees
order by salary DESC
limit 1 OFFSET 1