use SistemaVenda;
CREATE TABLE IF NOT EXISTS `SistemaVenda`.`cliente` (
  `nro_cliente` INT UNSIGNED NOT NULL AUTO_INCREMENT,
  `nome_cliente` VARCHAR(50) NOT NULL,
  `logradouro` VARCHAR(75) NULL,
  `numero` INT UNSIGNED NULL,
  `complemento` VARCHAR(50) NULL,
  `bairro_nro_bairro` INT NOT NULL,
  `CEP` INT(8) UNSIGNED NULL,
  PRIMARY KEY (`nro_cliente`),
  UNIQUE INDEX `nro_cliente_UNIQUE` (`nro_cliente` ASC) VISIBLE,
  INDEX `fk_cliente_bairro1_idx` (`bairro_nro_bairro` ASC) VISIBLE,
  CONSTRAINT `fk_cliente_bairro1`
    FOREIGN KEY (`bairro_nro_bairro`)
    REFERENCES `SistemaVenda`.`bairro` (`nro_bairro`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
