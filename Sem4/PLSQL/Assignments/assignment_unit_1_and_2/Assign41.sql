declare
   yearrr number;
begin
   yearrr := &yearrr;
   if mod(
      yearrr,
      4
   ) = 0 then
      dbms_output.put_line(yearrr || ' is a leap year.');
   else
      dbms_output.put_line(yearrr || ' is not a leap year.');
   end if;
end;
/