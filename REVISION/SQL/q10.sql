-- Write a query to fetch employees with names starting with ‘A’
select id, first_name
from employees
where first_name LIKE 'A%'