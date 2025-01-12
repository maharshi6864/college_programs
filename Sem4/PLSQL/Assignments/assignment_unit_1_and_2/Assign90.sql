declare
   input_number number;
begin
   input_number := &wwe;
   for i in 1..input_number loop
      for j in reverse 1..i loop
         dbms_output.put(j || ' ');
      end loop;
      dbms_output.put_line('');
   end loop;
end;
/