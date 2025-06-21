--Write a query to find employees with duplicate email addresses.
select email
from employees
group by email
having count(email) >1
