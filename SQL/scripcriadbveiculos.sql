CREATE DATABASE IF NOT EXISTS carros DEFAULT CHARACTER SET utf8;
USE carros;
CREATE TABLE `carros`.`marca` (
  `idMarca` INT UNSIGNED NOT NULL AUTO_INCREMENT,
  `marca` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idMarca`))
ENGINE = InnoDB;
CREATE TABLE `carros`.`modelo` (
	`idModelo` INT UNSIGNED NOT NULL AUTO_INCREMENT,
	`modelo` VARCHAR(45) NOT NULL,
	`Marca_idMarca` INT UNSIGNED NOT NULL ,
	PRIMARY KEY (`idModelo`),
	CONSTRAINT `fk_Modelo_Marca` FOREIGN KEY (`Marca_idMarca`) REFERENCES `carros`.`marca` (`idmarca`))
ENGINE = InnoDB;
CREATE TABLE `carros`.`Veiculo` (
  `idVeiculo` INT UNSIGNED NOT NULL AUTO_INCREMENT,
  `placa` VARCHAR(7) NULL,
  `chassi` VARCHAR(17) NOT NULL,
  `ano_fabricacao` YEAR(4) NOT NULL,
  `ano_modelo` YEAR(4) NOT NULL,
  `Modelo_idModelo` INT UNSIGNED NOT NULL,
  PRIMARY KEY (`idVeiculo`),
  CONSTRAINT `fk_Veiculo_Modelo1` FOREIGN KEY (`Modelo_idModelo`) REFERENCES `carros`.`modelo` (`idModelo`))
ENGINE = InnoDB;