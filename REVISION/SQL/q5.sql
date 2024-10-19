-- Write a query to fetch employee records with null salary values.
select first_name, last_name
from employees
where salary is null;