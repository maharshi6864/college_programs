declare
   days   number;
   months number;
   years  number;
begin
   days := &dayss;
   dbms_output.put_line('number ' || days);
  --  days := days - ( years * 365 );
   years := floor(days / 365);
   days := mod(
      days,
      365
   );
   months := floor(days / 30);
   dbms_output.put_line('Number of years and months for given number of days will be : '
                        || years
                        || ' years and '
                        || months
                        || ' months.');
end;
/