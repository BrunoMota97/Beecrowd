SELECT name AS type, CASE  WHEN type='A' THEN 20.0
                   WHEN type='B' THEN 70.0
                   else 530.5
             END as price
FROM PRODUCTS ORDER BY PRODUCTS.type, products.id DESC;