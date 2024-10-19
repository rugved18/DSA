-- Write a query to find employees who joined after 2015.
select first_name
from Employees
where join_date > '2015-12-31';
