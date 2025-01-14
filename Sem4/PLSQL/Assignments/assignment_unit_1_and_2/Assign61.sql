declare
   tot  number;
   remm number;
   du   number;
begin
   du := 98712;
   while true loop
      tot := 0;
      while du > 0 loop
         remm := mod(
            du,
            10
         );
         tot := tot + remm;
         du := floor(du / 10);
      end loop;
      if 10 > tot then
         exit;
      else
         du := tot;
      end if;
   end loop;
   dbms_output.put_line('single digit sum is : ' || tot);
end;
/