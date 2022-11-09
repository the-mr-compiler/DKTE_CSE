create table books(id int, name nvarchar(20),price float);
create table books_history(id int, name nvarchar(20),price float);

insert into books values 
                (1,'SQL World',560),
                (2,'Oracle overview',780),
                (3,'Explore SSIS',458),
                (4,'Data Visualization',679),
                (5,'SQL Components',353),
                (6,'High Availability',781)


UPDATE books_history
	SET
		name = ?,
		price=?
	WHERE id=?


select * from books

select * from books_history

update books set price=400 where id =1

