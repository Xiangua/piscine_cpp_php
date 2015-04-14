SELECT UPPER(f.nom) AS 'NOM', f.prenom, a.prix
FROM membre as m
INNER JOIN fiche_personne f ON m.id_fiche_perso = f.id_perso
INNER JOIN abonnement a ON a.id_abo = m.id_abo
WHERE a.prix > 42
ORDER BY f.nom, f.prenom;