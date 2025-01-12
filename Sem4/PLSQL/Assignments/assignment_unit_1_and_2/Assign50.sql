declare
   str varchar2(100);
begin
   str := '&strrr';
   for i in reverse 1..length(str) loop
      dbms_output.put(substr(
         str,
         i,
         1
      ));
   end loop;
   dbms_output.put_line('');
end;
/