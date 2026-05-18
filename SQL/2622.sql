SELECT name FROM CUSTOMERS AS cliente WHERE 
EXISTS (SELECT id_customers FROM LEGAL_PERSON WHERE id_customers = cliente.id);