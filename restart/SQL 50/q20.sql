--Write a query to fetch employees whose date of joining is today.
select first_name
from employees
where date_joining = curdate();
