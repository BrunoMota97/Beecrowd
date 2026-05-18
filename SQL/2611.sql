SELECT movies.id,movies.name FROM MOVIES,GENRES 
WHERE movies.id_genres = genres.id AND genres.description LIKE 'Action';