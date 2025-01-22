declare
   str varchar2(100) := '';
begin
   str := 'ORACLE';
   for i in 1..length(str) loop
      dbms_output.put_line(substr(
         str,
         1,
         i
      ));
   end loop;
end;
/