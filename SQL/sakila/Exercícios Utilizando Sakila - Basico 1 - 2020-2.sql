/*1. Listar todos os dados da tabela ATOR.*/ 
SELECT * FROM sakila.ator;

/*2. Listar apenas o primeiro nome e último nome dos registros da tabela CLIENTE*/
SELECT primeiro_nome, ultimo_nome FROM `sakila`.`cliente`;

/*3. Listar as cidades cujo nome iniciam com a letra C*/
SELECT cidade FROM `sakila`.`cidade` WHERE `cidade` > 'C';

/*4. Listar todos os dados dos clientes cujo primeiro nome a segunda letra é a letra ‘s’; */
SELECT * FROM `cliente` WHERE `primeiro_nome` like '_s%';

/*5. Listar o título do filmes com duração_do_filme entre 60 e 80 minutos*/
SELECT titulo FROM `sakila`.`filme` WHERE `duracao_do_filme` BETWEEN 60 AND 80;
 
/*6. listar os dados dos filmes com preço de locação abaixo de 1 dólar, ordenar pelo título*/
SELECT * FROM `sakila`.`filme` WHERE `preco_da_locacao` < 1 ORDER BY `titulo` ASC;
 
/*7. Listar os filmes com custo de substituição acima de 20 dolares mas que tenha preço de locação abaixo de 3 dolares. ordene pelo custo de subst e depois pelo preço de locação*/
SELECT titulo FROM `sakila`.`filme` WHERE `custo_de_substituicao` > 20 AND `preco_da_locacao` < 3 ORDER BY custo_de_substituicao AND preco_da_locacao;

/*8.1 Listar os dados de todos os clientes em ordem alfabética.*/ 
SELECT * FROM cliente ORDER BY primeiro_nome;

/*listar os títulos dos filmes, apresentando apenas os primeiros 10 títulos qual o primeiro nome tem apenas 3 letras e ordená-lo em ordem alfabética.*/

SELECT titulo FROM filme WHERE titulo LIKE '___' ORDER BY titulo;

/*ou*/

SELECT titulo FROM filme WHERE LENGTH(titulo) <= 3 ORDER BY titulo;
 
/*9. Em ordem alfabética, listar os títulos dos filmes, apresentando apenas os primeiros 10 títulos*/
SELECT titulo FROM `sakila`.`filme` ORDER BY `titulo` ASC LIMIT 10;

/*10. Em ordem alfabética, listar os títulos dos filmes, apresentando apenas os títulos que estiverem entre a posição 11 e 20 (usando como base o item 9, seria apresentar os próximos 10 filmes.)*/
SELECT titulo FROM `sakila`.`filme` WHERE `filme_id` BETWEEN 11 AND 20 ORDER BY `titulo`;
