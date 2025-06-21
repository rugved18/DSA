-- Write a query to find employees whose names end with ‘n’.
select id, first_name
from employees
where first_name LIKE '%n'


select d.dept_name count(employee_id) as employee_count
from employee e
join department d
on e.employee_id = d.employee_id
group by employee_id


select age, AVG(salary) as avg_salary
from employee
GROUP by age


SELECT dept_name, sum(salary) as total_salary
FROM department
group by dept_name
HAVING sum(salary) > $10000


SELECT job_title, max(salary) as max_salary
FROM employee
group by job_title


SELECT employee_name, max(salary) as highest_salary
from employee e
join department d
on e.employee_id = d.employee_id
group by employee_name;
