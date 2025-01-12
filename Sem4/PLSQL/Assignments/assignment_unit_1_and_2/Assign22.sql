declare
   ff double precision;
   cc double precision;
begin
   cc := &pp;
   ff := cc * ( 9 / 5 ) + 32;
   dbms_output.put_line('Centigrade in to fahrenheit is : ' || ff);
end;
/