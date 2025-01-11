declare
   counter number := 0;
begin
   loop
      counter := counter + 1;
      if mod(
         counter,
         2
      ) <> 0 then
         dbms_output.put_line(counter);
      end if;
      if counter > 100 then
         exit;
      end if;
   end loop;
end;
/