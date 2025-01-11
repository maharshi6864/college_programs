declare
   tot number := 0;
   ran number := 0;
begin
   dbms_output.put_line('Program to print the total of odd number between 1 to range !!');
   ran := &ll;
   for i in 1..ran loop
      if mod(
         i,
         2
      ) <> 0 then
         tot := tot + i;
      end if;
   end loop;
   dbms_output.put_line('the total of odd number between 1 to range '
                        || ran
                        || ' : '
                        || tot);
end;
/