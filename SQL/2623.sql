SELECT products.name,categories.name FROM PRODUCTS,CATEGORIES WHERE 
products.id_categories = categories.id AND
amount>100 AND products.id_categories IN (1,2,3,6,9);