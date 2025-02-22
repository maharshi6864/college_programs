declare
   n           number;
   sumofsqaure number := 0;
begin
   n := &n;
   for i in 1..n loop
      sumofsqaure := sumofsqaure + i * i;
   end loop;

   dbms_output.put_line('Answer is : ' || sumofsqaure);
end;
/