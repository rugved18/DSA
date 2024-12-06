--Find employees who joined after 2015:
select first_name
from employees 
where joining_date > '2015-12-31';
