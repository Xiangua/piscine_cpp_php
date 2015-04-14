SELECT nom AS 'films' 
FROM distrib
WHERE id_distrib = 42 OR (62 <= id_distrib  AND id_distrib <= 71) OR LOWER(nom) = "%y%y"
LIMIT 3, 5;