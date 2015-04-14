SELECT COUNT(h.date) AS 'films' 
FROM historique_membre h
WHERE DATE(h.date) BETWEEN '2006-10-30' AND '2007-07-27' OR (MONTH(h.date) = 12 AND DAY(h.date) = 24);
LIMIT 3 5;