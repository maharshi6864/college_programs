declare
   ran         number := 0;
   newvariable number := 0;
begin
   ran := &aa;
   for i in 1..ran loop
      newvariable := newvariable + i;
   end loop;
   dbms_output.put_line('Total of ' || newvariable);
end;
/