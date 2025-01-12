declare
   input_number number;
   ran          number;
begin
   input_number := &wwe;
   for i in 1..input_number loop
      for j in 1..i loop
         ran := j + i;
         if mod(
            ran,
            2
         ) = 0 then
            dbms_output.put('0 ');
         else
            dbms_output.put('1 ');
         end if;
      end loop;
      dbms_output.put_line('');
   end loop;
end;
/