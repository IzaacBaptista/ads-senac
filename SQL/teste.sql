CREATE TABLE IF NOT EXISTS `SistemaVenda`.`venda` (
  `nro_venda` INT UNSIGNED NOT NULL,
  `vendedor_nro_vend` INT UNSIGNED NOT NULL,
  `cliente_nro_cliente` INT UNSIGNED NOT NULL,
  `data_venda` DATETIME NOT NULL,
  INDEX `fk_vendedor_has_cliente_cliente1_idx` (`cliente_nro_cliente` ASC) VISIBLE,
  INDEX `fk_vendedor_has_cliente_vendedor_idx` (`vendedor_nro_vend` ASC) VISIBLE,
  PRIMARY KEY (`nro_venda`),
  UNIQUE INDEX `vendedor_nro_vend_UNIQUE` (`vendedor_nro_vend` ASC) VISIBLE,
  UNIQUE INDEX `nro_venda_UNIQUE` (`nro_venda` ASC) VISIBLE,
  CONSTRAINT `fk_vendedor_has_cliente_vendedor`
    FOREIGN KEY (`vendedor_nro_vend`)
    REFERENCES `SistemaVenda`.`vendedor` (`nro_vend`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_vendedor_has_cliente_cliente1`
    FOREIGN KEY (`cliente_nro_cliente`)
    REFERENCES `SistemaVenda`.`cliente` (`nro_cliente`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB