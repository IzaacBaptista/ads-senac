use sakila;

select primeiro_nome from ator where primeiro_nome like 'an%';

select distinct primeiro_nome from ator where primeiro_nome like 'an%';

select count(primeiro_nome) from ator where primeiro_nome like 'an%';

select count(distinct primeiro_nome) from ator where primeiro_nome like 'an%';

select count(distinct primeiro_nome, ultimo_nome) from ator where primeiro_nome like 'an%';

select count(*) from ator;

select max(preco_da_locacao) from filme where titulo like "A%";

select avg(preco_da_locacao) from filme; 

select min(preco_da_locacao) from filme;

select max(preco_da_locacao) from filme; 

select min(titulo) from filme;

select max(titulo) from filme;

select min(preco_da_locacao) from filme;

select ceiling(avg(preco_da_locacao)) from filme;

select floor(avg(preco_da_locacao)) from filme;

select round(avg(preco_da_locacao)) from filme;

select round(avg(preco_da_locacao),2) from filme;

select truncate(avg(preco_da_locacao),1) from filme;

select concat(primeiro_nome, ultimo_nome) from funcionario;

select concat(primeiro_nome, " ", ultimo_nome) from funcionario;