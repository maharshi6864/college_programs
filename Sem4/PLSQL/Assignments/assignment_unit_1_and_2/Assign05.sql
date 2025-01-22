declare
   nu  number := 2;
   mul number := 0;
begin
   nu := &tablenumber;
   for i in 1..10 loop
      mul := nu * i;
      dbms_output.put_line(nu
                           || ' X '
                           || i
                           || ' = '
                           || mul);
   end loop;
end;
/