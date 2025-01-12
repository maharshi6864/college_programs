declare
   rr    double precision;
   areaa double precision;
begin
   rr := &rrrl;
   areaa := 3.1415926 * rr * rr;
   dbms_output.put_line('Area of circle is ' || areaa);
end;
/