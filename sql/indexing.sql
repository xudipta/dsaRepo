show databases;
use testdb;
show tables;
-- -----------------------------------------------
select * from index_demo;
-- checking for duplicates
select  name, age, pan_no, phone_no,count(*) 
	from index_demo group by name, age, pan_no, phone_no;
-- remove duplicates using temp table; 
create table index_demo_distinct AS
	select distinct name, age, pan_no, phone_no
		from index_demo;
-- check new table 
select * from index_demo_distinct;
select * from index_demo;
-- clear table
truncate table index_demo;
-- copy from temp table
insert into index_demo
	select * from index_demo_distinct;
-- delete table
drop table index_demo_distinct;
-- ----------------------------------

explain select * from index_demo where name="Kalpesh";
show indexes from index_demo;
alter table index_demo add primary key(phone_no);
explain select * from index_demo where phone_no = 1234567890;
