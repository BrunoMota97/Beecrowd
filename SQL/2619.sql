SELECT products.name,providers.name,products.price FROM PRODUCTS,PROVIDERS,CATEGORIES
WHERE products.id_providers = providers.id AND products.id_categories = categories.id
AND categories.name LIKE 'Super Luxury' AND price>1000;