declare
   eng    double precision;
   sci    double precision;
   hin    double precision;
   tot    double precision;
   precnt double precision;
begin
   eng := &eng;
   sci := &sci;
   hin := &hin;
   tot := eng + sci + hin;
   precnt := ( tot * 100 ) / 300;
   if
      precnt >= 60
      and precnt <= 100
   then
      dbms_output.put_line('division is first ' || precnt);
   elsif
      precnt >= 50
      and precnt < 60
   then
      dbms_output.put_line('division is second ' || precnt);
   elsif
      precnt >= 35
      and precnt < 50
   then
      dbms_output.put_line('division is third ' || precnt);
   elsif
      precnt >= 0
      and precnt < 35
   then
      dbms_output.put_line('division is failed ' || precnt);
   else
      dbms_output.put_line('Entered Invalid marks !!' || precnt);
   end if;

end;
/