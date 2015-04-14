SELECT f.id_genre AS 'id_genre', g.nom AS 'nom genre', f.id_distrib, d.nom AS 'nom distrib', titre AS 'titre film'
FROM film f
LEFT JOIN genre g ON g.id_genre = f.id_genre
LEFT JOIN distrib d ON d.id_distrib = f.id_distrib
WHERE f.id_genre >= 4 AND f.id_genre <= 8;
