SELECT titre, ABS(DATEDIFF(date_fin_affiche, date_debut_affiche)) AS 'uptime' 
FROM film;