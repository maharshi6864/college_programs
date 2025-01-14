declare
   str    varchar2(1000) := '';
   charr  char;
   counnt number := 0;
begin
   str := '&strr';
   charr := '&charrr';
   for i in 1..length(str) loop
      if substr(
         str,
         i,
         1
      ) = charr then
         counnt := counnt + 1;
      end if;
   end loop;
   dbms_output.put_line('Number of character in the sentence is : ' || counnt);
end;
/