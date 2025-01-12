declare
   counter number := 0;
begin
   loop
      dbms_output.put_line(counter);
      counter := counter + 1;
      if counter > 100 then
         exit;
      end if;
   end loop;
end;
/