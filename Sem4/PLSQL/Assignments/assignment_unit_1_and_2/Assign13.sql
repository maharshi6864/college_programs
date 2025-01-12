declare
   nu       number;
   re       number;
   du       number;
   tot      number;
   digcount number;
   ran      number;
begin
   dbms_output.put_line('Program to generate the armstrong number from entered range !!');
   for i in 1..2000 loop
      nu := i;
      digcount := 0;
      while nu > 0 loop
         re := mod(
            nu,
            10
         );
         digcount := digcount + 1;
         nu := floor(nu / 10);
      end loop;
      nu := i;
      du := nu;
      tot := 0;
      while nu > 0 loop
         re := mod(
            nu,
            10
         );
         tot := tot + power(
            re,
            digcount
         );
         nu := floor(nu / 10);
      end loop;

      if du = tot then
         dbms_output.put_line(i || ' Number is a armstrong number !!');
      end if;
   end loop;
end;
/