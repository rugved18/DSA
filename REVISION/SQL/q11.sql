-- Write a query to find employees whose names end with ‘n’.
select id, first_name
from employees
where first_name LIKE '%n'