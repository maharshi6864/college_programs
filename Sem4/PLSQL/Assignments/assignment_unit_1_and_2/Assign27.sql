declare
   aa number;
   bb number;
   cc number;
begin
   aa := &aaa;
   bb := &bbb;
   cc := &ccc;
   if aa > bb then
      if aa > cc then
         dbms_output.put_line('Value of aa is greatest !!');
      else
         dbms_output.put_line('Value of cc is greatest !!');
      end if;
   else
      if bb > cc then
         dbms_output.put_line('Value of bb is greatest !!');
      else
         dbms_output.put_line('Value of cc is greatest !!');
      end if;
   end if;
end;
/