SELECT customers.id, customers.name FROM CUSTOMERS  WHERE 
customers.id  NOT IN (SELECT id_customers FROM LOCATIONS);