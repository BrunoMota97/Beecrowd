SELECT products.id,products.name FROM PRODUCTS,CATEGORIES WHERE 
products.id_categories = categories.id AND categories.name LIKE 'super%';