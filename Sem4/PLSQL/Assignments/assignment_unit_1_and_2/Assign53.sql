declare
   ll   double precision;
   hh   double precision;
   prei double precision;
begin
   hh := &hh;
   ll := &ll;
   prei := ( ll + hh ) * 2;
   dbms_output.put_line('Perimeter of rectangle : ' || prei);
end;
/