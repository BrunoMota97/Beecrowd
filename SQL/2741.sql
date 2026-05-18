SELECT CONCAT('Approved: ',name) AS name,grade FROM STUDENTS 
WHERE grade>=7 ORDER BY grade DESC;