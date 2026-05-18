SELECT categories.name,sum(products.amount) FROM PRODUCTS,CATEGORIES WHERE 
products.id_categories = categories.id GROUP BY categories.name;