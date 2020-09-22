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

select concat(primeiro_nome, " ", ultimo_nome) as "nome e sobrenome" from funcionario;

select upper(concat(primeiro_nome, " ", ultimo_nome)) as "nome e sobrenome" from funcionario;

select ucase(concat(primeiro_nome, " ", ultimo_nome)) as "nome e sobrenome" from funcionario;

select lower(concat(primeiro_nome, " ", ultimo_nome)) as "nome e sobrenome" from funcionario;

select lcase(concat(primeiro_nome, " ", ultimo_nome)) as "nome e sobrenome" from funcionario;

select concat('R$ ', valor) as 'Valor do pagamento', data_de_pagamento from pagamento limit 10;

select concat('R$ ', valor) as 'Valor do pagamento', data_de_pagamento as 'data de pagamento' from pagamento limit 10;

select concat('R$ ', valor) as 'Valor do pagamento', date_format(data_de_pagamento, "%d/%m/%y") as 'data de pagamento' from pagamento limit 10;

select concat('R$ ', valor) as 'Valor do pagamento', date_format(data_de_pagamento, "%d/%m/%Y") as 'data de pagamento' from pagamento limit 10;

select concat('R$ ', valor) as 'Valor do pagamento', date_format(data_de_pagamento, "%d/%M/%Y") as 'data de pagamento' from pagamento limit 10;

select ultimo_nome from ator group by ultimo_nome;

select ultimo_nome, count(*) from ator group by ultimo_nome;

/*
select max(count(ultimo_nome)) from ator group by ultimo_nome;
*/

select ultimo_nome, count(*) from ator group by ultimo_nome having count(*) > 3;
