SELECT eUNI.unique_id , emp.name
FROM Employees as emp
LEFT JOIN EmployeeUNI as eUNI
ON emp.id = eUNI.id;
