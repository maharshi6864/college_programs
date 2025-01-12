declare
   rr    double precision;
   areaa double precision;
begin
   rr := &rrrl;
   areaa := 3.1415926 * 2 * rr;
   dbms_output.put_line('Perimeter of circle is ' || areaa);
end;
/