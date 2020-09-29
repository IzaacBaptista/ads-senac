create database if not exists `Academia`;

use `Academia`;

CREATE TABLE `Academia`.`Instrutor` (
    `id_instrutor` INT NOT NULL AUTO_INCREMENT,
    `cpf` VARCHAR(11) NOT NULL,
    `nome` VARCHAR(45) NULL,
    `nascimento` DATE NULL,
    `titulacao` VARCHAR(45) NULL,
PRIMARY KEY (`id_instrutor`));

CREATE TABLE `Academia`.`Atividade` ( 
    `id_atividade` INT NOT NULL AUTO_INCREMENT, 
    `nome` VARCHAR(45) NOT NULL,  
PRIMARY KEY (`id_atividade`));


CREATE TABLE `Academia`.`Turma` (
    `id_turma` INT NOT NULL AUTO_INCREMENT,
    `horario` DATETIME NOT NULL,
    `duracao` SMALLINT(5) UNSIGNED NULL,
    `data_inicio` TIMESTAMP NOT NULL,
    `data_fim` TIMESTAMP NOT NULL,
    `id_atividade` INT NOT NULL,
    `id_instrutor` INT NOT NULL,
PRIMARY KEY (`id_turma`),
CONSTRAINT `fk_id_atividade`
FOREIGN KEY (`id_atividade`)
REFERENCES `Academia`.`Atividade` (`id_atividade`)
ON DELETE NO ACTION
ON UPDATE NO ACTION,
CONSTRAINT `fk_id_instrutor`
FOREIGN KEY (`id_instrutor`)
REFERENCES `Academia`.`Instrutor` (`id_instrutor`)
ON DELETE NO ACTION
ON UPDATE NO ACTION);

CREATE TABLE `Academia`.`Aluno` (
  
`id_aluno` INT NOT NULL AUTO_INCREMENT,
  
`data_Matricula` TIMESTAMP NOT NULL,
  
`nome` VARCHAR(45) NOT NULL,
  
`data_nascimento` TIMESTAMP NOT NULL,
  
`altura` DOUBLE NOT NULL,
  
`peso` DOUBLE NOT NULL,
  
`id_turma` INT NOT NULL,
  
PRIMARY KEY (`id_aluno`),
  
CONSTRAINT `fk_id_turma`
    
FOREIGN KEY (`id_turma`)
    
REFERENCES `Academia`.`Turma` (`id_turma`)
    
ON DELETE NO ACTION
    
ON UPDATE NO ACTION);

CREATE TABLE `Academia`.`Matricula` (
  
`aluno_id_aluno` INT NOT NULL,
  
`turma_id_turma` INT NOT NULL,
   
PRIMARY KEY (`aluno_id_aluno`, `turma_id_turma`),
  
CONSTRAINT `fk_aluno_has_turma_aluno`
    
FOREIGN KEY (`aluno_id_aluno`)
    
REFERENCES `Academia`.`Aluno` (`id_aluno`)
    
ON DELETE NO ACTION
    
ON UPDATE NO ACTION,
  
CONSTRAINT `fk_aluno_has_turma_turma1`
    
FOREIGN KEY (`turma_id_turma`)
    
REFERENCES `Academia`.`Turma` (`id_turma`)
    
ON DELETE NO ACTION
    
ON UPDATE NO ACTION);



INSERT INTO `Academia`.`Aluno` (`id_aluno`, `data_matricula`, `nome`, `data_nascimento`, `altura`, `peso`, `id_turma`) VALUES
(1, '2019-07-01', 'Fulano da Silva', '1990-05-01', 1.76, 80, 3),
(2, '2019-07-04', 'Joseph Climber', '1991-06-01', 1.65, 75, 2),
(3, '2019-07-05', 'Allan Lee', '1992-07-07', 1.69, 68, 1);

INSERT INTO `Academia`.`Instrutor` (`id_instrutor`, `cpf`, `nome`, `nascimento`, `titulacao`) VALUES
(1, 34567843521, 'Beto Alberto', '1988-04-03', 'Fisioterapeuta'),
(2, 12356543222, 'Caio Levanto', '1988-06-06', 'Educa��o F�sica'),
(3, 67278678736, 'Halterino Halteres', '1989-07-07', 'Educa��o F�sica');

INSERT INTO `Academia`.`Turma` (`id_turma`, `horario`, `duracao`, `data_inicio`, `data_fim`, `id_atividade`, `id_instrutor`) VALUES
(1, 14-00, '02-00', 2019-08-08, 2019-12-20, 2,1),
(2, 09-00, '01-00', 2019-09-09, 2020-01-01, 1,2),
(3, 10-30, '01-00', 2019-10-07, 2020-02-01, 3,2);

INSERT INTO `Academia`.`Matricula` (`id_aluno`, `id_turma`) VALUES
(1, 2),
(2, 3),
(3, 1);

INSERT INTO `Academia`.`Atividade` (`id_atividade`, `nome`) VALUES
(1, 'Muscula��o'),
(2, 'Pilates'),
(3, 'Corrida');

INSERT INTO `empresaAvaliacao`. `transportadoras` (`id`, `nome`, `numero_caminhoes`, `preco_medio_frete`) VALUES
(1, 'FreteBras', 26, 800.00),
(2, 'Transcargas', 300, 1400.00),
(3, 'RodoCargas', 190, 500.00),
(4, '1001', 201, 900.00),
(5, 'FreteDoisIrm�os', 33, 880.00);

UPDATE `empresaAvaliacao`.`transportadoras` SET `numero_caminhoes` = '303' WHERE (`id` = '2');

DELETE FROM `empresaAvaliacao`.`transportadoras` WHERE (`id` = '1');


