use `SistemaVenda`;

INSERT INTO `SistemaVenda`. `venda` (vendedor_nro_vend, cliente_nro_cliente, data_venda) VALUES (
1, 2, '17/05/2001'),
(4, 3, '18/07/2006'),
(4, 6, '04/04/2010'),
(4, 7, '24/06/2011'),
(2, 2, '04/05/2012'),
(3, 4, '04/07/2016'),
(5, 5, '24/06/2019'),
(1, 4, '28/09/2019'),
(1, 6, '28/06/2020'
);

INSERT INTO `SistemaVenda`. `vendedor` (nro_vend, nome_vend, sexo_vend) VALUES (
1, 'Rafaela Barros Costa', 0),
(2, 'José Castro Barbosa', 1),
(3, 'Leila Ferreira Alves', NULL),
(4, 'Danilo Barros Ferreira', NULL),
(5, 'Laura Souza Melo', 0
);

INSERT INTO `SistemaVenda`. `cliente` (nro_cliente, nome_cliente, logradouro, numero, complemento, cep) VALUES (
1, 'Kaua Carvalho Fernandes', 'Rua F', 627, 'casa', 12945771),
(2, 'Samuel Barbosa Melo', NULL, NULL, NULL, NULL),
(3, 'Isabela Barros Ribeiro', 'Rua Felipe dos Santos', 531, NULL, NULL),
(4, 'Sofia Silva Alves', 'Rua C-11', 1474, NULL, 53405560),
(5, 'Rebeca Rocha Barbosa', 'Rua Manuel Albano', 1420, 'Ap 701', 60861460),
(6, 'Leila Carvalho Ribeiro', 'Praça Hermínio G. Bordim', 178, 'Quadra 2- casa 7', 19807324),
(7, 'Tiago Martins Alves', 'Vila Nova Esperança', 1607, NULL, 40391226
);

UPDATE `SistemaVenda`.`venda`
SET
`nro_venda` = 3,
`vendedor_nro_vend` = 4,
`cliente_nro_cliente` = 6,
`data_venda` = '04/04/2010'
WHERE `vendedor_nro_vend` = 2;

UPDATE `SistemaVenda`.`cliente`
SET
`nro_cliente` = 5,
`nome_cliente` = 'Rebeca Rocha Barbosa',
`logradouro` = 'Rua Manuel Albano',
`numero` = 1420,
`complemento` = 'Ap 701',
`cep` = 60861460
WHERE `nome_cliente` = 'Rebecca Rocha Barbosa';

DELETE FROM `SistemaVenda`.`cliente`
WHERE `nome_cliente` = 'Tiago Martins Alves';



