-- Write a query to fetch employees whose names contain the letter ‘e’.
select id, first_name
from employees
where first_name LIKE '%e%'