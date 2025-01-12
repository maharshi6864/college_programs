declare
   ran  number;
   cont number;
begin
   for i in 1..100 loop
      cont := 0;
      for j in 1..i loop
         if mod(
            i,
            j
         ) = 0 then
            cont := cont + 1;
         end if;
      end loop;
      if cont = 2 then
         if mod(
            i,
            2
         ) <> 0 then
            dbms_output.put_line(i || ' is a prime and odd number !!');
         end if;
      end if;
   end loop;
end;
/