declare
   ta    double precision;
   da    double precision;
   hra   double precision;
   lic   double precision;
   gs    double precision;
   basic double precision;
begin
   basic := &basicc;
   ta := ( basic * 20 ) / 100;
   da := ( basic * 10 ) / 100;
   hra := ( basic * 30 ) / 100;
   lic := ( basic * 5 ) / 100;
   gs := basic + ta + da + hra + lic;
   dbms_output.put_line('basic salary : ' || basic);
   dbms_output.put_line('ta : ' || ta);
   dbms_output.put_line('da : ' || da);
   dbms_output.put_line('hra : ' || hra);
   dbms_output.put_line('lic : ' || lic);
   dbms_output.put_line('------------------------');
   dbms_output.put_line('gross salary : ' || gs);
end;
/