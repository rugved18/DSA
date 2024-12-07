--Find employees with the highest salary:
select first_name
from employees
where salary = (select max(salary) from employees)
