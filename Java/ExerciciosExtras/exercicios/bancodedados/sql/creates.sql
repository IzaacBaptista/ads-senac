DROP TABLE IF EXISTS usuario;

CREATE TABLE IF NOT EXISTS usuario (
  id MEDIUMINT NOT NULL AUTO_INCREMENT,
  user_name char(255) NOT NULL,
  password char(255) NOT NULL,
  name char(255) NOT NULL,
  PRIMARY KEY (id)
);


SELECT * FROM usuario;

INSERT INTO usuario (user_name, password, name) VALUES ('administrador','123456','Administrador');
INSERT INTO usuario (user_name, password, name) VALUES ('usuario1','123456','Usuario 1');
INSERT INTO usuario (user_name, password, name) VALUES ('usuario2','123456','Usuario 2');

UPDATE usuario SET password = '654321' WHERE id = 2;

DELETE FROM usuario WHERE id = 3;