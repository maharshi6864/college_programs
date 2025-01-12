declare
   hh    double precision;
   bb    double precision;
   areaa double precision;
begin
   hh := &pp;
   bb := &aas;
   areaa := ( hh * bb ) / 2;
   dbms_output.put_line('aera of triangle is : ' || areaa);
end;
/