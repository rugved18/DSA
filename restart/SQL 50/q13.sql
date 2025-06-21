--Write a query to find employees who are not managers.
select first_name
from employees
where manager_id is null;
