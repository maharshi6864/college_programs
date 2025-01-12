declare
   input_number number;
   coun         number := 1;
begin
   input_number := &wwe;
   for i in 1..input_number loop
      for j in 1..i loop
         dbms_output.put(coun || ' ');
         coun := coun + 1;
      end loop;
      dbms_output.put_line('');
   end loop;
end;
/