declare
   ran  number := 99999;
   summ number := 9;
   tot  number;
   remm number;
   du   number;
begin
   for i in 1..ran loop
      tot := 0;
      du := i;
      while du > 0 loop
         remm := mod(
            du,
            10
         );
         tot := tot + remm;
         du := floor(du / 10);
      end loop;
      if summ = tot then
         dbms_output.put_line('number '
                              || i
                              || ' has exact sum of 9.');
      end if;
   end loop;
end;
/