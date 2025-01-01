--Write a query to fetch employees whose name contains exactly 5 characters.
select first_name
from employees
where length(first_name) = 5;
