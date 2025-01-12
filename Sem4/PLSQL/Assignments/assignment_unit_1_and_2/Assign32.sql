declare
   principle double precision;
   months    double precision;
   rate      double precision;
   interest  double precision;
begin
   principle := &princuip;
   months := &months;
   rate := &rate;
   interest := ( principle * ( months / 12 ) * rate ) / 100;
   dbms_output.put_line('Interest : ' || interest);
end;
/