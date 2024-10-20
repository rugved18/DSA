-- Write a query to find employees who are not managers.
select id, first_name
from employees
where job_title != 'managers'