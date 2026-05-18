SELECT life_registry.name, round(life_registry.omega * 1.618,3)
       AS "Fator N" FROM LIFE_REGISTRY,DIMENSIONS
       WHERE 
       dimensions.id = life_registry.dimensions_id
       AND life_registry.name LIKE 'Richard%'
       AND (dimensions.name = 'C774' OR dimensions.name = 'C875')
       ORDER BY life_registry.omega;