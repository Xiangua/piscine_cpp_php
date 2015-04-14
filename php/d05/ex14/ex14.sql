SELECT etage_salle, nbr_siege
FROM salle
GROUP BY etage_salle
ORDER BY nbr_siege ASC;