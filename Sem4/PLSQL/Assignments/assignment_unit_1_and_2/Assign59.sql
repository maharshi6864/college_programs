declare
   str1 varchar2(1000) := '';
   str2 varchar2(1000) := '';
begin
   str1 := '&str1';
   str2 := '&str2';
   if length(str1) > length(str2) then
      dbms_output.put_line('String 1 is greater than string 2  !');
   else
      dbms_output.put_line('String 2 is greater than string 1  !');
   end if;
end;
/