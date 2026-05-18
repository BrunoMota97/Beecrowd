SELECT products.name, providers.name, categories.name 
FROM PRODUCTS,PROVIDERS,CATEGORIES
WHERE products.id_providers = providers.id AND
categories.id = products.id_categories AND
providers.name LIKE 'Sansul SA' AND categories.name LIKE 'Imported';