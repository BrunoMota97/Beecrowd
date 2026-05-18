SELECT MAX(temperature) AS temperature, COUNT(TEMPERATURE)
AS number_of_records FROM RECORDS  
GROUP BY mark ORDER BY mark;