declare
   input_number number;
begin
   input_number := &wwe;
   for i in 1..input_number loop
      for j in 1..i loop
         dbms_output.put(2 +(10 * j)
                         || ' ');
      end loop;
      dbms_output.put_line('');
   end loop;
end;
/