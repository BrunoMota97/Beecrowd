SELECT amount AS most_frequent_value 
FROM VALUE_TABLE GROUP BY amount ORDER BY COUNT(*) DESC LIMIT 1;