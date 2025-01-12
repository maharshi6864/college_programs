declare
   counter number := 1;
   nu      number := 2;
   mul     number := 0;
begin
   nu := &tablenumber;
   loop
      mul := nu * counter;
      dbms_output.put_line(nu
                           || ' X '
                           || counter
                           || ' = '
                           || mul);
      counter := counter + 1;
      if counter > 10 then
         exit;
      end if;
   end loop;
end;
/