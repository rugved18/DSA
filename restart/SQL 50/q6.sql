--Fetch employee records with non-null phone numbers:
select first_name
from employees
where phone_number is not null
