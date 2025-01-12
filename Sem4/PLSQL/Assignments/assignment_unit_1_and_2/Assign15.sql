declare
   ran  number;
   cont number;
begin
   ran := &rttr;
   cont := 0;
   for j in 1..ran loop
      if mod(
         ran,
         j
      ) = 0 then
         cont := cont + 1;
      end if;
   end loop;
   if cont = 2 then
      dbms_output.put_line(ran || ' is a prime number !!');
   end if;
   if cont <> 2 then
      dbms_output.put_line(ran || ' is not a prime number !!');
   end if;
end;
/