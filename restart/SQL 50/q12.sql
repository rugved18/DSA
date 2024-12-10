--Write a query to fetch employees whose names contain the letter ‘e’.
select *
from employees
where first_name like '%e%';
