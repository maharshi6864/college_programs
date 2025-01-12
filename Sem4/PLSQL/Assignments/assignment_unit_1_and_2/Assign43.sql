declare
   str     varchar2(100);
   charr   char;
   counter number := 0;
begin
   str := '&strrr';
   for i in 1..length(str) loop
      charr := substr(
         str,
         i,
         1
      );
      if charr = 'a'
      or charr = 'e'
      or charr = 'i'
      or charr = 'o'
      or charr = 'u'
      or charr = 'A'
      or charr = 'E'
      or charr = 'I'
      or charr = 'O'
      or charr = 'U' then
         counter := counter + 1;
      end if;
   end loop;

   dbms_output.put_line('Number of vowels in string : ' || counter);
end;
/