SELECT COUNT(a.prix) AS 'nb_abo', floor(AVG(a.prix)) AS 'moy_abo', SUM(a.duree_abo) % 42 AS 'ft'
FROM abonnement a