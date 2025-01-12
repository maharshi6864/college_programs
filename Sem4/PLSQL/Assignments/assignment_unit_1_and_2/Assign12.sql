declare
   nu  number := 0;
   re  number := 0;
   du  number := 0;
   tot number := 0;
begin
   dbms_output.put_line('Program to check either the number is armstrong or not !!');
   nu := &nuu;
   du := nu;
   while nu > 0 loop
      re := mod(
         nu,
         10
      );
      tot := tot + ( re * re * re );
      nu := floor(nu / 10);
   end loop;

   if du = tot then
      dbms_output.put_line('Number is a armstrong number !!');
   end if;
   if du <> tot then
      dbms_output.put_line('Number is not a armstrong number !!');
   end if;
end;
/