SELECT nom, prenom, DATE(date_naissance) as 'date de naissance'
FROM fiche_personne
WHERE YEAR(date_naissance) = 1987
ORDER BY nom ASC;