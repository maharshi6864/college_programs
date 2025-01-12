declare
   str    varchar2(100) := '';
   newstr varchar2(100) := '';
   len    number;
begin
   str := 'lellel0';
   len := length(str);
   for i in reverse 1..len loop
      newstr := newstr
                || substr(
         str,
         i,
         1
      );
   end loop;
   if str = newstr then
      dbms_output.put_line('String is palindrom ' || newstr);
   else
      dbms_output.put_line('String is not palindrom ' || newstr);
   end if;
end;
/