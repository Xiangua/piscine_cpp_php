CREATE TABLE ft_table (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	login varchar(8) NOT NULL DEFAULT 'toto',
	groupe ENUM('staff', 'student', 'other') NOT NULL,
	date_de_creation DATE NOT NULL
)